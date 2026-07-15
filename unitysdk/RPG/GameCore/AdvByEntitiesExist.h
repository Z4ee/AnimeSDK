#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_017AB40905B3BEB2_OFFSET UNITYSDK_OFFSET(0x1BE11DE0)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_1282EDB314A836F1_OFFSET UNITYSDK_OFFSET(0x1BE11F90)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_5D2537ADF48FF29A_OFFSET UNITYSDK_OFFSET(0x1BE11D60)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_F7F493EF79C311C4_OFFSET UNITYSDK_OFFSET(0x1BE11F40)
#define RPG_GAMECORE_ADVBYENTITIESEXIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE11DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByEntitiesExist_TypeDefinitionIndex = 20423;

	class AdvByEntitiesExist : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GroupFetchLocalTarget* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5D2537ADF48FF29A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntitiesExist*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntitiesExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_5D2537ADF48FF29A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_017AB40905B3BEB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_017AB40905B3BEB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7F493EF79C311C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_F7F493EF79C311C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1282EDB314A836F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_1282EDB314A836F1_OFFSET))(a1, a2);
		}
	};
}
