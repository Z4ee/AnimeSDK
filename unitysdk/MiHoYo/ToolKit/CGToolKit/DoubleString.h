#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_DOUBLESTRING_REPLACE_OFFSET UNITYSDK_OFFSET(0x13E9DDB0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_DOUBLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x13E9DDA0)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int DoubleString_TypeDefinitionIndex = 44660;

	class DoubleString : public ::System::Object
	{
	public:
		::System::String* Item1; // 0x10
		::System::String* Item2; // 0x18

		::System::Void _ctor(::System::String* item1, ::System::String* item2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_DOUBLESTRING__CTOR_OFFSET))(this, item1, item2);
		}

		::MiHoYo::ToolKit::CGToolKit::DoubleString* Replace(::System::String* replacedStr, ::System::String* replaceStr)
		{
			return ((::MiHoYo::ToolKit::CGToolKit::DoubleString*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_DOUBLESTRING_REPLACE_OFFSET))(this, replacedStr, replaceStr);
		}
	};
}
