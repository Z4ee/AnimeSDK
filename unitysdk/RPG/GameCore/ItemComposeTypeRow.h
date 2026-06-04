#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMCOMPOSETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1985B650)
#define RPG_GAMECORE_ITEMCOMPOSETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1985BD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeTypeRow_TypeDefinitionIndex = 13194;

	class ItemComposeTypeRow : public ::System::Object
	{
	public:
		::System::String* TypeTextmapID; // 0x10
		::System::String* UnlockDescribe; // 0x18
		::System::String* TypeIconPath; // 0x20
		::System::UInt32 MainTypeID; // 0x28
		::System::UInt32 TypeID; // 0x2C
		::System::UInt32 UnlockID; // 0x30
		::System::UInt32 MainTypeOrder; // 0x34
		::System::Boolean IsMainType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemComposeTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemComposeTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
