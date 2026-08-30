#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_4B6B21F84FCB689D_OFFSET UNITYSDK_OFFSET(0x1CEAAAE0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_7F92AC83456AF0E0_OFFSET UNITYSDK_OFFSET(0x1CEAAC90)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_807F8DBE2A87AA57_OFFSET UNITYSDK_OFFSET(0x1CEAAC60)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_B21D5F2B4E4FB1B8_OFFSET UNITYSDK_OFFSET(0x1CEAAAA0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAAAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackStatusType_TypeDefinitionIndex = 22786;

	class ByCheckModifierCallBackStatusType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType TargetStatusType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B21D5F2B4E4FB1B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_B21D5F2B4E4FB1B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B6B21F84FCB689D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_4B6B21F84FCB689D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_807F8DBE2A87AA57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_807F8DBE2A87AA57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F92AC83456AF0E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_7F92AC83456AF0E0_OFFSET))(a1, a2);
		}
	};
}
