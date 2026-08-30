#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_681;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7EEF10492AA3A193_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1819C530)
#define CLASS_1_7EEF10492AA3A193_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x1819C1F0)
#define CLASS_1_7EEF10492AA3A193_METHOD_1_7F1EBB775AF956AD_OFFSET UNITYSDK_OFFSET(0x1819C330)
#define CLASS_1_7EEF10492AA3A193_METHOD_1_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0x1819C2A0)
#define CLASS_1_7EEF10492AA3A193__CTOR_OFFSET UNITYSDK_OFFSET(0x1819C5A0)

inline static constexpr unsigned int Class_1_7EEF10492AA3A193_TypeDefinitionIndex = 61421;

class Class_1_7EEF10492AA3A193 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_681*>* GKEGIJAEPLK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEF10492AA3A193__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_681* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_681*))((::PBYTE)hIl2Cpp + CLASS_1_7EEF10492AA3A193_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_681* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_681*))((::PBYTE)hIl2Cpp + CLASS_1_7EEF10492AA3A193_METHOD_1_D1B1E19AC459D83C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F1EBB775AF956AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7EEF10492AA3A193_METHOD_1_7F1EBB775AF956AD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEF10492AA3A193_DISPOSE_OFFSET))(this);
	}
};
