#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_410E868806A47842_OFFSET UNITYSDK_OFFSET(0x1952F7A0)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_7422550D9B236837_OFFSET UNITYSDK_OFFSET(0x1952F820)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_9BEF9B85DD88872B_OFFSET UNITYSDK_OFFSET(0x1952F5D0)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_C71C2B3D6551204F_OFFSET UNITYSDK_OFFSET(0x1952F4F0)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1952F570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScreenRatio_TypeDefinitionIndex = 21039;

	class ByCompareScreenRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Single ReferenceRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C71C2B3D6551204F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScreenRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScreenRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_C71C2B3D6551204F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9BEF9B85DD88872B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_9BEF9B85DD88872B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_410E868806A47842(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_410E868806A47842_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7422550D9B236837(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_METHOD_4_7422550D9B236837_OFFSET))(a1, a2);
		}
	};
}
