#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class CharacterRootMotionBakedData; }
namespace RPG::Client { class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3; }

#define RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xE0C0760)
#define RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_METHOD_3_00620367755B96F4_OFFSET UNITYSDK_OFFSET(0xE0C0820)
#define RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C09C0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpeciallyRootMotionBakedConfig_TypeDefinitionIndex = 60198;

	class SpeciallyRootMotionBakedConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::CharacterRootMotionBakedData* CharacterData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET))(this);
		}

		::System::Boolean Method_3_00620367755B96F4(::Struct_2_1ADED1EDA7578A33 a1, ::System::Single a2, ::RPG::GameCore::CharacterMotionFlag a3, ::System::Single a4, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3*& a5, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_1ADED1EDA7578A33, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3*&, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALLYROOTMOTIONBAKEDCONFIG_METHOD_3_00620367755B96F4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
