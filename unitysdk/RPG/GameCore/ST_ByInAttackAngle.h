#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_8C3A557952A85091_OFFSET UNITYSDK_OFFSET(0x1B77EBA0)
#define RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_A8DE72BDFEE68B70_OFFSET UNITYSDK_OFFSET(0x1B77EB70)
#define RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_BD8C3D5EAABA0365_OFFSET UNITYSDK_OFFSET(0x1B77E9F0)
#define RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_FEE07A009578FB66_OFFSET UNITYSDK_OFFSET(0x1B77EA30)
#define RPG_GAMECORE_ST_BYINATTACKANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77EA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAttackAngle_TypeDefinitionIndex = 19301;

	class ST_ByInAttackAngle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BD8C3D5EAABA0365(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackAngle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_BD8C3D5EAABA0365_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEE07A009578FB66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_FEE07A009578FB66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8DE72BDFEE68B70(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackAngle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_A8DE72BDFEE68B70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C3A557952A85091(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKANGLE_METHOD_4_8C3A557952A85091_OFFSET))(a1, a2);
		}
	};
}
