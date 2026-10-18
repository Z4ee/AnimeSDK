#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44340B2393166A74;
class Class_1_7B5BC5F7531D3B01_2;
class Class_1_D17272E82AE804C2_699;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7B5BC5F7531D3B01_2___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CD6B0)
#define CLASS_1_7B5BC5F7531D3B01_2___C__DISPLAYCLASS3_0__SAVE_B__0_OFFSET UNITYSDK_OFFSET(0xB2CD720)
#define CLASS_1_7B5BC5F7531D3B01_2___C__DISPLAYCLASS3_0__SAVE_B__2_OFFSET UNITYSDK_OFFSET(0xB2CD750)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_2___c__DisplayClass3_0_TypeDefinitionIndex = 80244;

class Class_1_7B5BC5F7531D3B01_2___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_44340B2393166A74* applyingData; // 0x10
	::System::Collections::Generic::List_1<::Class_1_44340B2393166A74*>* savedData; // 0x18
	::Class_1_7B5BC5F7531D3B01_2* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Save_b__0(::Class_1_44340B2393166A74* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_44340B2393166A74*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2___C__DISPLAYCLASS3_0__SAVE_B__0_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_699* _Save_b__2(::Class_1_D17272E82AE804C2_699* a1)
	{
		return ((::Class_1_D17272E82AE804C2_699*(*)(::PVOID, ::Class_1_D17272E82AE804C2_699*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2___C__DISPLAYCLASS3_0__SAVE_B__2_OFFSET))(this, a1);
	}
};
