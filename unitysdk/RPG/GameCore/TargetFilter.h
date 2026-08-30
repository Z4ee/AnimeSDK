#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTER_METHOD_3_B9ECCC6BB3AA9BF8_OFFSET UNITYSDK_OFFSET(0x1E1B83F0)
#define RPG_GAMECORE_TARGETFILTER_METHOD_3_D23B0B18BBB03035_OFFSET UNITYSDK_OFFSET(0x1E1B8330)
#define RPG_GAMECORE_TARGETFILTER_METHOD_3_D622FF9914E7984E_OFFSET UNITYSDK_OFFSET(0x1E1B8490)
#define RPG_GAMECORE_TARGETFILTER_METHOD_3_E4943BCBD1B69713_OFFSET UNITYSDK_OFFSET(0x1E1B84C0)
#define RPG_GAMECORE_TARGETFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B83E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilter_TypeDefinitionIndex = 23625;

	class TargetFilter : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D23B0B18BBB03035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_D23B0B18BBB03035_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9ECCC6BB3AA9BF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_B9ECCC6BB3AA9BF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D622FF9914E7984E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_D622FF9914E7984E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4943BCBD1B69713(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_E4943BCBD1B69713_OFFSET))(a1, a2);
		}
	};
}
