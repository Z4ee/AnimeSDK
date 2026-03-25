#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TOASTMANAGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178A1D70)
#define RPG_GAMECORE_TOASTMANAGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178A2370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastManagerRow_TypeDefinitionIndex = 14029;

	class ToastManagerRow : public ::System::Object
	{
	public:
		::System::String* FuncName; // 0x10
		::System::UInt32 Priority; // 0x18
		::System::UInt32 Duration; // 0x1C
		::System::Boolean IsinBattle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ToastManagerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastManagerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
