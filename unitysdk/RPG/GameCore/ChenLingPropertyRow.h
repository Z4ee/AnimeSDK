#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17088640)
#define RPG_GAMECORE_CHENLINGPROPERTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17088890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingPropertyRow_TypeDefinitionIndex = 10355;

	class ChenLingPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::Boolean IsShow; // 0x28
		::System::Int32 Property; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPROPERTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingPropertyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingPropertyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPROPERTYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
