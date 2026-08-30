#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_12174AF93FD37625_OFFSET UNITYSDK_OFFSET(0x1DB38400)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_214D1F9CA74CD3D1_OFFSET UNITYSDK_OFFSET(0x1DB385B0)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_602A2B6A12E99DB0_OFFSET UNITYSDK_OFFSET(0x1DB38580)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_CE9321DFFBDC3826_OFFSET UNITYSDK_OFFSET(0x1DB38440)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAttackDistance_TypeDefinitionIndex = 19841;

	class ST_ByInAttackDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_12174AF93FD37625(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_12174AF93FD37625_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE9321DFFBDC3826(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_CE9321DFFBDC3826_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_602A2B6A12E99DB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_602A2B6A12E99DB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_214D1F9CA74CD3D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_METHOD_4_214D1F9CA74CD3D1_OFFSET))(a1, a2);
		}
	};
}
