#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TOASTMANAGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D52B0C0)
#define RPG_GAMECORE_TOASTMANAGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52BA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastManagerRow_TypeDefinitionIndex = 15134;

	class ToastManagerRow : public ::System::Object
	{
	public:
		::System::String* FuncName; // 0x10
		::System::UInt32 Duration; // 0x18
		::System::UInt32 Priority; // 0x1C
		::System::Boolean IsinBattle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToastManagerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastManagerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
