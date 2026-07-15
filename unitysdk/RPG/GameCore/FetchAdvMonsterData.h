#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FETCHADVMONSTERDATA_METHOD_2_880E0F7030892A29_OFFSET UNITYSDK_OFFSET(0x1BA77D80)
#define RPG_GAMECORE_FETCHADVMONSTERDATA_METHOD_2_B4515B1F66F7981E_OFFSET UNITYSDK_OFFSET(0x1BA77FE0)
#define RPG_GAMECORE_FETCHADVMONSTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA77F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FetchAdvMonsterData_TypeDefinitionIndex = 23015;

	class FetchAdvMonsterData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVMONSTERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_880E0F7030892A29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FetchAdvMonsterData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FetchAdvMonsterData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVMONSTERDATA_METHOD_2_880E0F7030892A29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B4515B1F66F7981E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvMonsterData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvMonsterData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVMONSTERDATA_METHOD_2_B4515B1F66F7981E_OFFSET))(a1, a2);
		}
	};
}
