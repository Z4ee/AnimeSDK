#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_19AC5C273F75E63D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8DBD650)
#define CLASS_3_1F4ADFD0E4F1734B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8DBDA70)
#define CLASS_3_1F4ADFD0E4F1734B__CTOR_OFFSET UNITYSDK_OFFSET(0x8DBD570)
#define CLASS_3_1F4ADFD0E4F1734B___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8DBDAC0)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_TypeDefinitionIndex = 43955;

class Class_3_1F4ADFD0E4F1734B : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_19AC5C273F75E63D*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_19AC5C273F75E63D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_19AC5C273F75E63D*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
