#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2; }

#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_2082A5CF70CD5C62_OFFSET UNITYSDK_OFFSET(0xB58F940)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_369897B8D90C5F5F_OFFSET UNITYSDK_OFFSET(0xB58FA30)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_4F0040A703640ABF_OFFSET UNITYSDK_OFFSET(0xB58FD90)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_87BD0C5330ED6BCB_OFFSET UNITYSDK_OFFSET(0xB58F860)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB58F7C0)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB58FF80)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterRootMotionBakedData_TypeDefinitionIndex = 56152;

	class CharacterRootMotionBakedData : public ::System::Object
	{
	public:
		::System::Single selectTolerance; // 0x10
		::System::Single OverrideRotationSpeed; // 0x14
		::System::Single ReferenceWalkSpeed; // 0x18
		::System::Single ReferenceRunSpeed; // 0x1C
		::System::Single ReferenceFastRunSpeed; // 0x20
		::Il2CppArray<::RPG::Client::MovementStoppedRootMotionBakedData>* MovementStoppedArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Boolean Method_1_2082A5CF70CD5C62(::Struct_2_1ADED1EDA7578A33 a1, ::System::Single a2, ::RPG::GameCore::CharacterMotionFlag a3, ::System::Single a4, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*& a5, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_1ADED1EDA7578A33, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*&, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_2082A5CF70CD5C62_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_1_369897B8D90C5F5F(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::CharacterMotionFlag a4, ::System::Single a5, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*& a6, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve& a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*&, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_369897B8D90C5F5F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean Method_1_4F0040A703640ABF(::System::Int32 a1, ::System::Single a2, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*& a3, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*&, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_4F0040A703640ABF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_87BD0C5330ED6BCB(::RPG::Client::MovementStoppedRootMotionBakedData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MovementStoppedRootMotionBakedData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_METHOD_1_87BD0C5330ED6BCB_OFFSET))(this, a1);
		}
	};
}
