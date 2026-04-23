#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupFetchLocalTarget; }

#define RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_017AB40905B3BEB2_OFFSET UNITYSDK_OFFSET(0x186485A0)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_C4ECCD55934F7F79_OFFSET UNITYSDK_OFFSET(0x18648400)
#define RPG_GAMECORE_ADVBYENTITIESEXIST__CTOR_OFFSET UNITYSDK_OFFSET(0x186484E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByEntitiesExist_TypeDefinitionIndex = 20194;

	class AdvByEntitiesExist : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GroupFetchLocalTarget* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C4ECCD55934F7F79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntitiesExist*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntitiesExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_C4ECCD55934F7F79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_017AB40905B3BEB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_METHOD_4_017AB40905B3BEB2_OFFSET))(a1, a2);
		}
	};
}
