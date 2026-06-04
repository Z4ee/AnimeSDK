#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ByCompareItemPair; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_62096ED0421E85AB_OFFSET UNITYSDK_OFFSET(0x1951B220)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_66E41288138A193C_OFFSET UNITYSDK_OFFSET(0x1951B1A0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_71100AC1BB1B7480_OFFSET UNITYSDK_OFFSET(0x1951AF10)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_8C33D2099279797E_OFFSET UNITYSDK_OFFSET(0x1951AFE0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1951AF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemNum_TypeDefinitionIndex = 19926;

	class ByCompareItemNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ByCompareItemPair*>* ItemPair; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_71100AC1BB1B7480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_71100AC1BB1B7480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C33D2099279797E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_8C33D2099279797E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_66E41288138A193C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_66E41288138A193C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_62096ED0421E85AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_62096ED0421E85AB_OFFSET))(a1, a2);
		}
	};
}
