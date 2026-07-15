#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF5ADF0)
#define RPG_GAMECORE_MESSAGEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5BA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageGroupRow_TypeDefinitionIndex = 13874;

	class MessageGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MessageSectionIDList; // 0x10
		::System::Boolean IsChatGroup; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 MessageContactsID; // 0x20
		::System::UInt32 ActivityModuleID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MessageGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
