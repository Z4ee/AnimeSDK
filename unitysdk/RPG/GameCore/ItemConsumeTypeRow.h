#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMCONSUMETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C85F0)
#define RPG_GAMECORE_ITEMCONSUMETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172C8C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemConsumeTypeRow_TypeDefinitionIndex = 12652;

	class ItemConsumeTypeRow : public ::System::Object
	{
	public:
		::System::String* TypeIconPath; // 0x10
		::RPG::Client::TextID FilterName; // 0x18
		::System::UInt32 TypeID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemConsumeTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemConsumeTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
