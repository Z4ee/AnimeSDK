#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CLASS_1_57F915E910E94985__CTOR_OFFSET UNITYSDK_OFFSET(0xC635C00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TimeRewindParterrePuzzleBoard_Class_1_57F915E910E94985_TypeDefinitionIndex = 73427;

	class TimeRewindParterrePuzzleBoard_Class_1_57F915E910E94985 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
		::System::Boolean Field_1_1; // 0x18
		::System::UInt32 Field_1_2; // 0x1C
		::System::UInt32 Field_1_3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CLASS_1_57F915E910E94985__CTOR_OFFSET))(this);
		}
	};
}
