#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CLASS_1_57F915E910E94985__CTOR_OFFSET UNITYSDK_OFFSET(0x17B19B20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TimeRewindParterrePuzzleBoard_Class_1_57F915E910E94985_TypeDefinitionIndex = 78437;

	class TimeRewindParterrePuzzleBoard_Class_1_57F915E910E94985 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AKGGPKLCEFE; // 0x10
		::System::UInt32 HNKPCCEHCKK; // 0x18
		::System::UInt32 KMABOAAIGDM; // 0x1C
		::System::Boolean PGGCOLJAACF; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CLASS_1_57F915E910E94985__CTOR_OFFSET))(this);
		}
	};
}
