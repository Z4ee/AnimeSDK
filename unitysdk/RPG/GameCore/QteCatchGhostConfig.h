#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_QTECATCHGHOSTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D18C1A0)
#define RPG_GAMECORE_QTECATCHGHOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostConfig_TypeDefinitionIndex = 17377;

	class QteCatchGhostConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ProtectTime; // 0x10
		::System::Single InteractRadius; // 0x14
		::System::Single StruggleRange; // 0x18
		::System::Single AppearDistance; // 0x1C
		::System::Single AppearTime; // 0x20
		::System::Single UiFadeOut; // 0x24
		::System::String* PathEffect; // 0x28
		::System::String* PointEffect; // 0x30
		::Il2CppArray<::System::UInt32>* QuestID; // 0x38
		::System::Single Tolerance; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
