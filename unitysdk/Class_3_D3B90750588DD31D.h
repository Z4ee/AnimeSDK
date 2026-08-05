#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Struct_2_2656809D0E9B3F8B.h"

class Class_1_9F2E73BE57A0ED54;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D3B90750588DD31D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xDC68230)
#define CLASS_3_D3B90750588DD31D_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0xDC68310)
#define CLASS_3_D3B90750588DD31D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xDC68350)
#define CLASS_3_D3B90750588DD31D_METHOD_3_A61E1D6B38C49F8B_OFFSET UNITYSDK_OFFSET(0xDC68460)
#define CLASS_3_D3B90750588DD31D_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xDC683E0)
#define CLASS_3_D3B90750588DD31D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xDC67540)
#define CLASS_3_D3B90750588DD31D_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDC67640)
#define CLASS_3_D3B90750588DD31D__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC68280)
#define CLASS_3_D3B90750588DD31D__CTOR_OFFSET UNITYSDK_OFFSET(0xDC68300)

inline static constexpr unsigned int Class_3_D3B90750588DD31D_TypeDefinitionIndex = 80727;

class Class_3_D3B90750588DD31D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xBD; // 0x0
	::System::Collections::Generic::Dictionary_2<::Enum_3_2C704E2262533CBD, ::System::Single>* Field_3_0; // 0x48
	::Class_1_9F2E73BE57A0ED54* Field_3_2; // 0x50
	::System::Action_1<::Class_3_D3B90750588DD31D*>* Field_3_7; // 0x58
	::System::Collections::Generic::List_1<::Enum_3_CE80FD07999C5845>* Field_3_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D_GETCLASSID_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_D3B90750588DD31D* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D3B90750588DD31D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_A61E1D6B38C49F8B(::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_D3B90750588DD31D_METHOD_3_A61E1D6B38C49F8B_OFFSET))(this, a1);
	}
};
