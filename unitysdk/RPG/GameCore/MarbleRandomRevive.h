#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_3BA470CAB48ABC99_OFFSET UNITYSDK_OFFSET(0x1D8454B0)
#define RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_706AF5C35B5C6EC3_OFFSET UNITYSDK_OFFSET(0x1D845450)
#define RPG_GAMECORE_MARBLERANDOMREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8454A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRandomRevive_TypeDefinitionIndex = 16857;

	class MarbleRandomRevive : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 ReviveTimes; // 0x10
		::System::String* ReviveTimesDynamic; // 0x18
		::System::Single ReviveRate; // 0x20
		::System::String* ReviveRateDynamic; // 0x28
		::System::Int32 ReviveHp; // 0x30
		::System::String* ReviveHpDynamic; // 0x38
		::System::Single ReviveMaxHPRatio; // 0x40
		::System::String* ReviveMaxHPRatioDynamic; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_706AF5C35B5C6EC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRandomRevive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRandomRevive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_706AF5C35B5C6EC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3BA470CAB48ABC99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRandomRevive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRandomRevive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_3BA470CAB48ABC99_OFFSET))(a1, a2);
		}
	};
}
