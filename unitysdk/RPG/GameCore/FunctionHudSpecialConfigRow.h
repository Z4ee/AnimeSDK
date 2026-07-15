#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B984670)
#define RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9849D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunctionHudSpecialConfigRow_TypeDefinitionIndex = 12811;

	class FunctionHudSpecialConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActivityModuleIDList; // 0x10
		::System::String* FirstWorldText; // 0x18
		::System::String* OverrideIconPath; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* HideConditions; // 0x28
		::RPG::Client::TextID NotInScheduleToast; // 0x30
		::System::UInt32 ID; // 0x40
		::System::Boolean ControlRightHud; // 0x44
		::System::Boolean IsLargeBtn; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FunctionHudSpecialConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunctionHudSpecialConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
