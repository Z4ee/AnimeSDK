#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_4_F5F252917445E3C5_EXTRAEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA92D390)

inline static constexpr unsigned int Class_4_F5F252917445E3C5_ExtraExportData_TypeDefinitionIndex = 46211;

class Class_4_F5F252917445E3C5_ExtraExportData : public ::System::Object
{
public:
	::System::String* cookieMapPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F5F252917445E3C5_EXTRAEXPORTDATA__CTOR_OFFSET))(this);
	}
};
