#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19634EE0)
#define RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196350C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraArrangementPresetRow_TypeDefinitionIndex = 12420;

	class ChimeraArrangementPresetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CommonChimeras; // 0x10
		::RPG::Client::TextID Description; // 0x18
		::System::UInt32 PresetID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraArrangementPresetRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraArrangementPresetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
