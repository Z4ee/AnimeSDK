#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpecialAvatarRow; }

#define CLASS_1_E76252B4E69B839F_GET_ISPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xA65D700)
#define CLASS_1_E76252B4E69B839F_GET_TRIALAVATARCONFIG_OFFSET UNITYSDK_OFFSET(0xA65D6E0)
#define CLASS_1_E76252B4E69B839F_SET_ISPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xA65D710)
#define CLASS_1_E76252B4E69B839F_SET_TRIALAVATARCONFIG_OFFSET UNITYSDK_OFFSET(0xA65D6F0)
#define CLASS_1_E76252B4E69B839F__CTOR_OFFSET UNITYSDK_OFFSET(0xA65D720)

inline static constexpr unsigned int Class_1_E76252B4E69B839F_TypeDefinitionIndex = 58770;

class Class_1_E76252B4E69B839F : public ::System::Object
{
public:
	::RPG::GameCore::SpecialAvatarRow* _TrialAvatarConfig_k__BackingField; // 0x10
	::System::Boolean _IsPlayerReturn_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E76252B4E69B839F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::SpecialAvatarRow* get_TrialAvatarConfig()
	{
		return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E76252B4E69B839F_GET_TRIALAVATARCONFIG_OFFSET))(this);
	}

	::System::Void set_TrialAvatarConfig(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_E76252B4E69B839F_SET_TRIALAVATARCONFIG_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPlayerReturn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E76252B4E69B839F_GET_ISPLAYERRETURN_OFFSET))(this);
	}

	::System::Void set_IsPlayerReturn(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E76252B4E69B839F_SET_ISPLAYERRETURN_OFFSET))(this, a1);
	}
};
