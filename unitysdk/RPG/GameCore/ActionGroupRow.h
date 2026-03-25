#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E9A360)
#define RPG_GAMECORE_ACTIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E9AB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionGroupRow_TypeDefinitionIndex = 12619;

	class ActionGroupRow : public ::System::Object
	{
	public:
		::System::String* FranceKeyMouseImagePath; // 0x10
		::Il2CppArray<::System::String*>* ActionListForAnd; // 0x18
		::System::String* XboxImagePath; // 0x20
		::Il2CppArray<::System::String*>* ActionListForOr; // 0x28
		::System::String* ActionName; // 0x30
		::System::String* PsImagePath; // 0x38
		::System::String* KeyMouseImagePath; // 0x40
		::System::String* ActionGroupName; // 0x48
		::System::String* GermanyKeyMouseImagePath; // 0x50
		::RPG::Client::TextID ActionGroupTextmapID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActionGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
