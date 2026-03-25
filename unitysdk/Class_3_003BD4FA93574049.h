#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetTraceOrigamiFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_003BD4FA93574049_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113DCCB0)
#define CLASS_3_003BD4FA93574049__CCTOR_OFFSET UNITYSDK_OFFSET(0x113DCDC0)
#define CLASS_3_003BD4FA93574049__CTOR_OFFSET UNITYSDK_OFFSET(0x113DCC80)

inline static constexpr unsigned int Class_3_003BD4FA93574049_TypeDefinitionIndex = 43119;

class Class_3_003BD4FA93574049 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTraceOrigamiFlag*>
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_3_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_3_003BD4FA93574049_TypeDefinitionIndex)->GetStaticField(0x4D60);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTraceOrigamiFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTraceOrigamiFlag*))((::PBYTE)hIl2Cpp + CLASS_3_003BD4FA93574049__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_003BD4FA93574049__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003BD4FA93574049_ONTASKBEGIN_OFFSET))(this);
	}
};
