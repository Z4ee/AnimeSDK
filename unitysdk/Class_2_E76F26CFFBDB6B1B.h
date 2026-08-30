#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_1_D9E989B298282E16;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x179D1CE0)
#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_28065FBC4645B1B8_OFFSET UNITYSDK_OFFSET(0x179D1FC0)
#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x179D1DE0)
#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x179D1EC0)
#define CLASS_2_E76F26CFFBDB6B1B__CTOR_OFFSET UNITYSDK_OFFSET(0x179D2040)

inline static constexpr unsigned int Class_2_E76F26CFFBDB6B1B_TypeDefinitionIndex = 53965;

class Class_2_E76F26CFFBDB6B1B : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_1_D9E989B298282E16* OHKCFMOAECF; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* GCOEIOANDLG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Void Method_2_28065FBC4645B1B8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_28065FBC4645B1B8_OFFSET))(this, a1);
	}
};
