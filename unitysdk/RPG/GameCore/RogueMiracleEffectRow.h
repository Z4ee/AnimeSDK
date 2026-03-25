#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMIRACLEEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1761B660)
#define RPG_GAMECORE_ROGUEMIRACLEEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1761B8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleEffectRow_TypeDefinitionIndex = 13426;

	class RogueMiracleEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 MiracleEffectID; // 0x18
		::RPG::Client::TextID MiracleDynamicHint; // 0x20
		::RPG::Client::TextID MiracleDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMiracleEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
