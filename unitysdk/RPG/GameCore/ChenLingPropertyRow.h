#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB8380)
#define RPG_GAMECORE_CHENLINGPROPERTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB85D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingPropertyRow_TypeDefinitionIndex = 11043;

	class ChenLingPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Boolean IsShow; // 0x18
		::System::Int32 Property; // 0x1C
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPROPERTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingPropertyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingPropertyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPROPERTYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
