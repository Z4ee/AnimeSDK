#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_1E4E64BD744F6C80_OFFSET UNITYSDK_OFFSET(0x193B6E10)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_33A150F63F87FC82_OFFSET UNITYSDK_OFFSET(0x193B6EA0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_7AA5FCB1DD1A4D30_OFFSET UNITYSDK_OFFSET(0x193B5910)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_DA5A30176234CCE9_OFFSET UNITYSDK_OFFSET(0x193B39C0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x193B3970)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_ByRandom_TypeDefinitionIndex = 9963;

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

		static ::System::Void Method_5_1E4E64BD744F6C80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_ByRandom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_ByRandom*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_1E4E64BD744F6C80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DA5A30176234CCE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_DA5A30176234CCE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7AA5FCB1DD1A4D30(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_7AA5FCB1DD1A4D30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_33A150F63F87FC82(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_BYRANDOM_METHOD_5_33A150F63F87FC82_OFFSET))(a1, a2);
		}
	};
}
