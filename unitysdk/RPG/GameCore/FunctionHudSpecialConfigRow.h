#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCC01E0)
#define RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC0540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunctionHudSpecialConfigRow_TypeDefinitionIndex = 13202;

	class FunctionHudSpecialConfigRow : public ::System::Object
	{
	public:
		::System::String* OverrideIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ActivityModuleIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* HideConditions; // 0x20
		::System::String* FirstWorldText; // 0x28
		::RPG::Client::TextID NotInScheduleToast; // 0x30
		::System::Boolean IsLargeBtn; // 0x40
		::System::Boolean ControlRightHud; // 0x41
		::System::UInt32 ID; // 0x44

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
