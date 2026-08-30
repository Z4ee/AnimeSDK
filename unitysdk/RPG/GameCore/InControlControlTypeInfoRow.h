#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A7930)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A7FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlControlTypeInfoRow_TypeDefinitionIndex = 13714;

	class InControlControlTypeInfoRow : public ::System::Object
	{
	public:
		::System::String* iconForSony; // 0x10
		::System::String* iconForXBox; // 0x18
		::System::String* iconForSwitch; // 0x20
		::System::String* controlType; // 0x28
		::System::Boolean isSettingControlType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InControlControlTypeInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InControlControlTypeInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
