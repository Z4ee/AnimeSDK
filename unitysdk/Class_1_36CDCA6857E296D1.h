#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_36CDCA6857E296D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5958E0)

inline static constexpr unsigned int Class_1_36CDCA6857E296D1_TypeDefinitionIndex = 42120;

class Class_1_36CDCA6857E296D1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FFGLKGPHKNO; // 0x10
	::System::Single IEHPFADHJFD; // 0x18
	::System::Int32 BJDAIKLOODC; // 0x1C
	::System::Boolean COILLDIDGIN; // 0x20
	::System::Single GJNGOKLGKMM; // 0x24
	::System::Single PECFGEIDOCJ; // 0x28
	::System::Int32 NMOKIHDMMNG; // 0x2C
	::System::Single HKOANFBDPCK; // 0x30
	::System::Single GCJMFBKLGHI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36CDCA6857E296D1__CTOR_OFFSET))(this);
	}
};
