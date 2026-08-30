#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEIMGDANMUROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A0BF0)
#define RPG_GAMECORE_IDLELIVEIMGDANMUROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A0F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveImgDanmuRow_TypeDefinitionIndex = 11763;

	class IdleLiveImgDanmuRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt16 SizeType; // 0x1C
		::System::Boolean IsExclusive; // 0x1E
		::System::UInt32 TriggerID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 RepeatCount; // 0x28
		::System::Single FlySpeed; // 0x2C
		::System::Single Interval; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEIMGDANMUROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveImgDanmuRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveImgDanmuRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEIMGDANMUROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
