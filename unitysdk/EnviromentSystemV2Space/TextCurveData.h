#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x135F1EA0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TextCurveData_TypeDefinitionIndex = 46576;

	class TextCurveData : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::String* path; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEDATA__CTOR_OFFSET))(this);
		}
	};
}
