#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17224A60)
#define RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17224DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunctionHudSpecialConfigRow_TypeDefinitionIndex = 12150;

	class FunctionHudSpecialConfigRow : public ::System::Object
	{
	public:
		::System::String* OverrideIconPath; // 0x10
		::System::String* FirstWorldText; // 0x18
		::Il2CppArray<::System::UInt32>* ActivityModuleIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* HideConditions; // 0x28
		::RPG::Client::TextID NotInScheduleToast; // 0x30
		::System::Boolean ControlRightHud; // 0x40
		::System::Boolean IsLargeBtn; // 0x41
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FunctionHudSpecialConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunctionHudSpecialConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDSPECIALCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
