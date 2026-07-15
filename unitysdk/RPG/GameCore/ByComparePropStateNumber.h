#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_2716ECF2CB1C354B_OFFSET UNITYSDK_OFFSET(0x19D019D0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_27902ED612432387_OFFSET UNITYSDK_OFFSET(0x19D01CD0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_3630FDCB3FF92690_OFFSET UNITYSDK_OFFSET(0x19D01D00)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_C18CC9D627BC6B6D_OFFSET UNITYSDK_OFFSET(0x19D01A10)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D01A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropStateNumber_TypeDefinitionIndex = 20888;

	class ByComparePropStateNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* PropIDList; // 0x28
		::RPG::GameCore::PropState State; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x34
		::System::UInt32 CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2716ECF2CB1C354B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropStateNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropStateNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_2716ECF2CB1C354B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C18CC9D627BC6B6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_C18CC9D627BC6B6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27902ED612432387(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_27902ED612432387_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3630FDCB3FF92690(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_3630FDCB3FF92690_OFFSET))(a1, a2);
		}
	};
}
