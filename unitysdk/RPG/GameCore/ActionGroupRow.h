#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193CBA00)
#define RPG_GAMECORE_ACTIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193CC220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionGroupRow_TypeDefinitionIndex = 13169;

	class ActionGroupRow : public ::System::Object
	{
	public:
		::System::String* ActionName; // 0x10
		::System::String* FranceKeyMouseImagePath; // 0x18
		::Il2CppArray<::System::String*>* ActionListForOr; // 0x20
		::System::String* PsImagePath; // 0x28
		::System::String* KeyMouseImagePath; // 0x30
		::System::String* GermanyKeyMouseImagePath; // 0x38
		::Il2CppArray<::System::String*>* ActionListForAnd; // 0x40
		::System::String* XboxImagePath; // 0x48
		::System::String* ActionGroupName; // 0x50
		::RPG::Client::TextID ActionGroupTextmapID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
