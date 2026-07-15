#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_62368A41E97C646F;
namespace System { class Object; }
namespace System { class Type; }

#define CLASS_2_EC59B1E75C3565F0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x185AF8F0)
#define CLASS_2_EC59B1E75C3565F0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x185AFA10)
#define CLASS_2_EC59B1E75C3565F0_METHOD_2_4102C7EC43D1EB1B_OFFSET UNITYSDK_OFFSET(0x185AEF60)
#define CLASS_2_EC59B1E75C3565F0_METHOD_2_546D123B31C1EA8A_OFFSET UNITYSDK_OFFSET(0x185AEDE0)
#define CLASS_2_EC59B1E75C3565F0_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x185AF830)
#define CLASS_2_EC59B1E75C3565F0_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x185AF770)
#define CLASS_2_EC59B1E75C3565F0_METHOD_2_FB354432755DC8C3_OFFSET UNITYSDK_OFFSET(0x185AF500)
#define CLASS_2_EC59B1E75C3565F0__CTOR_OFFSET UNITYSDK_OFFSET(0x185AFB00)

inline static constexpr unsigned int Class_2_EC59B1E75C3565F0_TypeDefinitionIndex = 68831;

class Class_2_EC59B1E75C3565F0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_546D123B31C1EA8A(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0_METHOD_2_546D123B31C1EA8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB354432755DC8C3(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0_METHOD_2_FB354432755DC8C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4102C7EC43D1EB1B(::System::Type* a1, ::Class_2_62368A41E97C646F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::Class_2_62368A41E97C646F*))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0_METHOD_2_4102C7EC43D1EB1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC59B1E75C3565F0_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
