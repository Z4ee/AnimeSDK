#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_4EDCC855D6668973_OFFSET UNITYSDK_OFFSET(0x19D2C550)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_737BDE7DEB19E75D_OFFSET UNITYSDK_OFFSET(0x19D2EE00)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_79FCE1B26DC2F0B6_OFFSET UNITYSDK_OFFSET(0x19D1F2F0)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_7F35EE05383C3A9C_OFFSET UNITYSDK_OFFSET(0x19D2ED90)
#define RPG_GAMECORE_TARGETSORTSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1F2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortSequence_TypeDefinitionIndex = 22661;

	class TargetSortSequence : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* SortSequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F35EE05383C3A9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_7F35EE05383C3A9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79FCE1B26DC2F0B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_79FCE1B26DC2F0B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4EDCC855D6668973(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_4EDCC855D6668973_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_737BDE7DEB19E75D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_737BDE7DEB19E75D_OFFSET))(a1, a2);
		}
	};
}
