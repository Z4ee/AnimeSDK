#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_250486381BD34CB0_OFFSET UNITYSDK_OFFSET(0x1950B850)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_4B3F51E7B3B0ED1E_OFFSET UNITYSDK_OFFSET(0x1950B920)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_810F7458DAD1874E_OFFSET UNITYSDK_OFFSET(0x1950BB20)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_848112803BDF5EB3_OFFSET UNITYSDK_OFFSET(0x1950BAA0)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1950B8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentModifierStatusType_TypeDefinitionIndex = 22242;

	class ByCompareCurrentModifierStatusType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType TargetStatusType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_250486381BD34CB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_250486381BD34CB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B3F51E7B3B0ED1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_4B3F51E7B3B0ED1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_848112803BDF5EB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_848112803BDF5EB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_810F7458DAD1874E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_810F7458DAD1874E_OFFSET))(a1, a2);
		}
	};
}
