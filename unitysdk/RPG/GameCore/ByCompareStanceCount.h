#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_3B18B028373F0FAD_OFFSET UNITYSDK_OFFSET(0x1CF00A90)
#define RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_46A8ED4DD0560684_OFFSET UNITYSDK_OFFSET(0x1CF00A50)
#define RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_4A4E99C75BB354CF_OFFSET UNITYSDK_OFFSET(0x1CF00CC0)
#define RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_8F96967624C5AEF1_OFFSET UNITYSDK_OFFSET(0x1CF00CF0)
#define RPG_GAMECORE_BYCOMPARESTANCECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF00A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStanceCount_TypeDefinitionIndex = 23222;

	class ByCompareStanceCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_46A8ED4DD0560684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_46A8ED4DD0560684_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B18B028373F0FAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_3B18B028373F0FAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4A4E99C75BB354CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_4A4E99C75BB354CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F96967624C5AEF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_8F96967624C5AEF1_OFFSET))(a1, a2);
		}
	};
}
