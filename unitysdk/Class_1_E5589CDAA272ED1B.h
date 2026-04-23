#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class String; }

#define CLASS_1_E5589CDAA272ED1B_METHOD_1_57793BBDC4F790CE_OFFSET UNITYSDK_OFFSET(0x19D67060)
#define CLASS_1_E5589CDAA272ED1B_SET_OFFSET UNITYSDK_OFFSET(0x19D66D70)
#define CLASS_1_E5589CDAA272ED1B__CTOR_OFFSET UNITYSDK_OFFSET(0x19D670B0)

inline static constexpr unsigned int Class_1_E5589CDAA272ED1B_TypeDefinitionIndex = 9643;

class Class_1_E5589CDAA272ED1B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5589CDAA272ED1B__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5589CDAA272ED1B_SET_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_57793BBDC4F790CE(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_E5589CDAA272ED1B_METHOD_1_57793BBDC4F790CE_OFFSET))(a1);
	}
};
