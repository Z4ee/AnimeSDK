#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_4_0200DDD1DEC4CA99_EXTRAEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1A7A00)

inline static constexpr unsigned int Class_4_0200DDD1DEC4CA99_ExtraExportData_TypeDefinitionIndex = 39719;

class Class_4_0200DDD1DEC4CA99_ExtraExportData : public ::System::Object
{
public:
	::System::String* cookieMapPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0200DDD1DEC4CA99_EXTRAEXPORTDATA__CTOR_OFFSET))(this);
	}
};
