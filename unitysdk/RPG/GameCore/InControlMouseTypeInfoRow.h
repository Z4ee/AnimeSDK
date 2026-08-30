#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D21ADE0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21B3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlMouseTypeInfoRow_TypeDefinitionIndex = 13712;

	class InControlMouseTypeInfoRow : public ::System::Object
	{
	public:
		::System::String* iconForMouse; // 0x10
		::System::String* controlType; // 0x18
		::System::Boolean isSettingMouseType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InControlMouseTypeInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InControlMouseTypeInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
