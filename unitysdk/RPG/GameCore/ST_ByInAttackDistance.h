#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_301990978E85906C_OFFSET UNITYSDK_OFFSET(0x19C15860)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_BB753925E4582DFD_OFFSET UNITYSDK_OFFSET(0x19C15AF0)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_CE9321DFFBDC3826_OFFSET UNITYSDK_OFFSET(0x19C15930)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_EF5E6C6439BBAC19_OFFSET UNITYSDK_OFFSET(0x19C15A70)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C158E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAttackDistance_TypeDefinitionIndex = 18950;

	class ST_ByInAttackDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_301990978E85906C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_301990978E85906C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE9321DFFBDC3826(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_CE9321DFFBDC3826_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF5E6C6439BBAC19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_EF5E6C6439BBAC19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB753925E4582DFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_BB753925E4582DFD_OFFSET))(a1, a2);
		}
	};
}
