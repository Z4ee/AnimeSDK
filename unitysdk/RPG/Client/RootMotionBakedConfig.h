#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class AvatarRootMotionBakedData; }
namespace RPG::Client { class CharacterRootMotionBakedData; }
namespace RPG::Client { class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2; }
namespace RPG::Client { class NPCRootMotionBakedData; }
namespace RPG::GameCore { class AdventureCharacterConfig; }

#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xC884680)
#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_METHOD_3_25C60997F67081D0_OFFSET UNITYSDK_OFFSET(0xC884760)
#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_METHOD_3_C28A1E00AC9CDDF5_OFFSET UNITYSDK_OFFSET(0xC884850)
#define RPG_CLIENT_ROOTMOTIONBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC884B50)

namespace RPG::Client
{
	inline static constexpr unsigned int RootMotionBakedConfig_TypeDefinitionIndex = 56155;

	class RootMotionBakedConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::AvatarRootMotionBakedData*>* AvatarDataArray; // 0x18
		::Il2CppArray<::RPG::Client::NPCRootMotionBakedData*>* NPCDataArray; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_AWAKE_OFFSET))(this);
		}

		::RPG::Client::CharacterRootMotionBakedData* Method_3_25C60997F67081D0(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::RPG::Client::CharacterRootMotionBakedData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_METHOD_3_25C60997F67081D0_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_C28A1E00AC9CDDF5(::RPG::GameCore::AdventureCharacterConfig* a1, ::Struct_2_1ADED1EDA7578A33 a2, ::System::Single a3, ::RPG::GameCore::CharacterMotionFlag a4, ::System::Single a5, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*& a6, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve& a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*, ::Struct_2_1ADED1EDA7578A33, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*&, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKEDCONFIG_METHOD_3_C28A1E00AC9CDDF5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
