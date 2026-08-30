#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_2FF606840276CCDE_OFFSET UNITYSDK_OFFSET(0x1D5BC9D0)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_79FCE1B26DC2F0B6_OFFSET UNITYSDK_OFFSET(0x1D5BC8D0)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_D0DC364474FED5F4_OFFSET UNITYSDK_OFFSET(0x1D5BC980)
#define RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_D640436D2B6EE6FC_OFFSET UNITYSDK_OFFSET(0x1D5BC870)
#define RPG_GAMECORE_TARGETSORTSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BC8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortSequence_TypeDefinitionIndex = 23704;

	class TargetSortSequence : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* SortSequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D640436D2B6EE6FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_D640436D2B6EE6FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79FCE1B26DC2F0B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_79FCE1B26DC2F0B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0DC364474FED5F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_D0DC364474FED5F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2FF606840276CCDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTSEQUENCE_METHOD_3_2FF606840276CCDE_OFFSET))(a1, a2);
		}
	};
}
