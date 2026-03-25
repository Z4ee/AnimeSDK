#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172B8DC0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172B9380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlMouseTypeInfoRow_TypeDefinitionIndex = 12623;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InControlMouseTypeInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InControlMouseTypeInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
