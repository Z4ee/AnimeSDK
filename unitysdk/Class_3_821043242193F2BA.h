#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayPenaconyEndmostSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_821043242193F2BA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17BA31B0)
#define CLASS_3_821043242193F2BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BA2F30)
#define CLASS_3_821043242193F2BA__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA2F00)

inline static constexpr unsigned int Class_3_821043242193F2BA_TypeDefinitionIndex = 53344;

class Class_3_821043242193F2BA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_3_821043242193F2BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_821043242193F2BA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_821043242193F2BA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
