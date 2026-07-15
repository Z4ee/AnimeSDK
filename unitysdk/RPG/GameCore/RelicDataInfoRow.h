#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELICDATAINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9C5AC0)
#define RPG_GAMECORE_RELICDATAINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C6280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicDataInfoRow_TypeDefinitionIndex = 14063;

	class RelicDataInfoRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* RelicName; // 0x18
		::System::String* BGStoryContent; // 0x20
		::System::String* ItemFigureIconPath; // 0x28
		::System::String* BGStoryTitle; // 0x30
		::System::String* ItemBGDesc; // 0x38
		::System::UInt32 SetID; // 0x40
		::RPG::GameCore::RelicType Type; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicDataInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicDataInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICDATAINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
