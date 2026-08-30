#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_0BE47BDACEC751FC_OFFSET UNITYSDK_OFFSET(0x1CD513E0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_3DF17D840518F7BA_OFFSET UNITYSDK_OFFSET(0x1CD4ED50)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_926AD33C7D65209D_OFFSET UNITYSDK_OFFSET(0x1CD51430)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_DA5A30176234CCE9_OFFSET UNITYSDK_OFFSET(0x1CD4D200)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4D1F0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_ByRandom_TypeDefinitionIndex = 10314;

	class ST_ByRandom : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::Int32 LeftRandomMin; // 0x20
		::System::Int32 LeftRandomMax; // 0x24
		::System::Int32 RightValue; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0BE47BDACEC751FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_ByRandom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_ByRandom*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_0BE47BDACEC751FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DA5A30176234CCE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_DA5A30176234CCE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3DF17D840518F7BA(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_3DF17D840518F7BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_926AD33C7D65209D(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_926AD33C7D65209D_OFFSET))(a1, a2);
		}
	};
}
