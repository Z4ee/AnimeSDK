#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_22F71A1C35A0732B_OFFSET UNITYSDK_OFFSET(0x1DB370C0)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_76F0E11626B5E74A_OFFSET UNITYSDK_OFFSET(0x1DB36F40)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_B1993E383B78DE1E_OFFSET UNITYSDK_OFFSET(0x1DB370F0)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_EEA1B1E98F2EBAF1_OFFSET UNITYSDK_OFFSET(0x1DB36F80)
#define RPG_GAMECORE_ST_BYHASPATROLPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasPatrolPath_TypeDefinitionIndex = 19837;

	class ST_ByHasPatrolPath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_76F0E11626B5E74A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasPatrolPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasPatrolPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_76F0E11626B5E74A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEA1B1E98F2EBAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_EEA1B1E98F2EBAF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22F71A1C35A0732B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_22F71A1C35A0732B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B1993E383B78DE1E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_METHOD_4_B1993E383B78DE1E_OFFSET))(a1, a2);
		}
	};
}
