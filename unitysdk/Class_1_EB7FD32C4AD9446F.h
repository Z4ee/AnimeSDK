#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EB7FD32C4AD9446F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29CAD0)

inline static constexpr unsigned int Class_1_EB7FD32C4AD9446F_TypeDefinitionIndex = 35761;

class Class_1_EB7FD32C4AD9446F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HJFGABKPGHD; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* NOPNDBOAOMN; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* LGKPONDOKJC; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* GPLAFNGCCMA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB7FD32C4AD9446F__CTOR_OFFSET))(this);
	}
};
