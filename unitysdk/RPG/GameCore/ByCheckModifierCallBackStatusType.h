#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_4A5A36F7E11F37FB_OFFSET UNITYSDK_OFFSET(0x194FEA40)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_4B6B21F84FCB689D_OFFSET UNITYSDK_OFFSET(0x194FEB10)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_7ED12F00306D98F2_OFFSET UNITYSDK_OFFSET(0x194FEC90)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_E11A7A0D88D09293_OFFSET UNITYSDK_OFFSET(0x194FED10)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x194FEAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackStatusType_TypeDefinitionIndex = 21791;

	class ByCheckModifierCallBackStatusType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType TargetStatusType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A5A36F7E11F37FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_4A5A36F7E11F37FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B6B21F84FCB689D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_4B6B21F84FCB689D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7ED12F00306D98F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_7ED12F00306D98F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E11A7A0D88D09293(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_METHOD_4_E11A7A0D88D09293_OFFSET))(a1, a2);
		}
	};
}
