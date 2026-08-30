#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_40C3D6A20CF98EA5_OFFSET UNITYSDK_OFFSET(0x1BBC0A70)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_5E6DBFA5633E856C_OFFSET UNITYSDK_OFFSET(0x1BBC0AB0)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_6717B9C0B19B7DA9_OFFSET UNITYSDK_OFFSET(0x1BBC0C50)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_9BFBF4EFB6EDE536_OFFSET UNITYSDK_OFFSET(0x1BBC0C20)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC0AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStoryLineID_TypeDefinitionIndex = 20529;

	class ByCompareStoryLineID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetStoryLineID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_40C3D6A20CF98EA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStoryLineID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStoryLineID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_40C3D6A20CF98EA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E6DBFA5633E856C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_5E6DBFA5633E856C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9BFBF4EFB6EDE536(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_9BFBF4EFB6EDE536_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6717B9C0B19B7DA9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_METHOD_4_6717B9C0B19B7DA9_OFFSET))(a1, a2);
		}
	};
}
