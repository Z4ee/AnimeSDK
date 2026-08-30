#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEPROPERTY_METHOD_2_2E317E38A1103EEA_OFFSET UNITYSDK_OFFSET(0x1D4AF7D0)
#define RPG_GAMECORE_MARBLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AF920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleProperty_TypeDefinitionIndex = 16653;

	class MarbleProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::RPG::GameCore::MarbleValue ValueType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2E317E38A1103EEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPROPERTY_METHOD_2_2E317E38A1103EEA_OFFSET))(a1, a2);
		}
	};
}
