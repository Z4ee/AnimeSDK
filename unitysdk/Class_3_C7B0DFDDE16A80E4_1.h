#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }

#define CLASS_3_C7B0DFDDE16A80E4_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13AA0900)
#define CLASS_3_C7B0DFDDE16A80E4_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13AA0A60)
#define CLASS_3_C7B0DFDDE16A80E4_1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13AA09E0)
#define CLASS_3_C7B0DFDDE16A80E4_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13AA08B0)
#define CLASS_3_C7B0DFDDE16A80E4_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AA0950)
#define CLASS_3_C7B0DFDDE16A80E4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA09D0)

inline static constexpr unsigned int Class_3_C7B0DFDDE16A80E4_1_TypeDefinitionIndex = 71239;

class Class_3_C7B0DFDDE16A80E4_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0xB5; // 0x0
	::System::String* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_1_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_C7B0DFDDE16A80E4_1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_C7B0DFDDE16A80E4_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
