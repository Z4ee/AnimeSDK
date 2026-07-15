#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FETCHADVPROPDATA_METHOD_2_1AD64DEA13BFCA7F_OFFSET UNITYSDK_OFFSET(0x1BA78B70)
#define RPG_GAMECORE_FETCHADVPROPDATA_METHOD_2_E3F5F84184119E16_OFFSET UNITYSDK_OFFSET(0x1BA78DB0)
#define RPG_GAMECORE_FETCHADVPROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA78D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FetchAdvPropData_TypeDefinitionIndex = 23017;

	class FetchAdvPropData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVPROPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1AD64DEA13BFCA7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FetchAdvPropData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FetchAdvPropData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVPROPDATA_METHOD_2_1AD64DEA13BFCA7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_E3F5F84184119E16(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvPropData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvPropData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVPROPDATA_METHOD_2_E3F5F84184119E16_OFFSET))(a1, a2);
		}
	};
}
