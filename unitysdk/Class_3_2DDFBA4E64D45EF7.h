#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenRaid; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2DDFBA4E64D45EF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1394C300)
#define CLASS_3_2DDFBA4E64D45EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x1394C250)
#define CLASS_3_2DDFBA4E64D45EF7___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1394C7D0)

inline static constexpr unsigned int Class_3_2DDFBA4E64D45EF7_TypeDefinitionIndex = 54437;

class Class_3_2DDFBA4E64D45EF7 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenRaid*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenRaid* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenRaid*))((::PBYTE)hIl2Cpp + CLASS_3_2DDFBA4E64D45EF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DDFBA4E64D45EF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DDFBA4E64D45EF7___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
