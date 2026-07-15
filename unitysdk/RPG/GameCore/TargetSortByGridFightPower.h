#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_5C01214E3FBE39E0_OFFSET UNITYSDK_OFFSET(0x1D0C7EE0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_9E0586056D3A677C_OFFSET UNITYSDK_OFFSET(0x1D0C7DD0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_9E4B091EE7B7F8B0_OFFSET UNITYSDK_OFFSET(0x1D0C7CC0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_CF6C3B0C17636C00_OFFSET UNITYSDK_OFFSET(0x1D0C7E90)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C7DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByGridFightPower_TypeDefinitionIndex = 23140;

	class TargetSortByGridFightPower : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E4B091EE7B7F8B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightPower*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightPower*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_9E4B091EE7B7F8B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E0586056D3A677C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_9E0586056D3A677C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF6C3B0C17636C00(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_CF6C3B0C17636C00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C01214E3FBE39E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_METHOD_3_5C01214E3FBE39E0_OFFSET))(a1, a2);
		}
	};
}
