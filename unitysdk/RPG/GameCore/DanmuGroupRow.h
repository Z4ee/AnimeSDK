#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DANMUGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C0FAC50)
#define RPG_GAMECORE_DANMUGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FAF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DanmuGroupRow_TypeDefinitionIndex = 14582;

	class DanmuGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Contents; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Single FlySpeed; // 0x1C
		::System::Boolean IsLoop; // 0x20
		::System::UInt32 RepeatTimesTillEnd; // 0x24
		::System::Single Interval; // 0x28
		::RPG::GameCore::DanmuType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DANMUGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DanmuGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DanmuGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DANMUGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
