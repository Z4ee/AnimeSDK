#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9E6770)
#define RPG_GAMECORE_ACTIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E6F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionGroupRow_TypeDefinitionIndex = 13708;

	class ActionGroupRow : public ::System::Object
	{
	public:
		::System::String* ActionGroupName; // 0x10
		::System::String* XboxImagePath; // 0x18
		::System::String* FranceKeyMouseImagePath; // 0x20
		::System::String* ActionName; // 0x28
		::Il2CppArray<::System::String*>* ActionListForAnd; // 0x30
		::System::String* KeyMouseImagePath; // 0x38
		::System::String* GermanyKeyMouseImagePath; // 0x40
		::System::String* PsImagePath; // 0x48
		::Il2CppArray<::System::String*>* ActionListForOr; // 0x50
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
