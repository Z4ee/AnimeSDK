#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_0BA604B637879A0A_OFFSET UNITYSDK_OFFSET(0x1CEBB0F0)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_10A7E00360129B2D_OFFSET UNITYSDK_OFFSET(0x1CEBB120)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_4B3F51E7B3B0ED1E_OFFSET UNITYSDK_OFFSET(0x1CEBAF70)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_8BAD87B37D9BB86F_OFFSET UNITYSDK_OFFSET(0x1CEBAF30)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBAF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentModifierStatusType_TypeDefinitionIndex = 23259;

	class ByCompareCurrentModifierStatusType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType TargetStatusType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8BAD87B37D9BB86F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_8BAD87B37D9BB86F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B3F51E7B3B0ED1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_4B3F51E7B3B0ED1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0BA604B637879A0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_0BA604B637879A0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10A7E00360129B2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_10A7E00360129B2D_OFFSET))(a1, a2);
		}
	};
}
