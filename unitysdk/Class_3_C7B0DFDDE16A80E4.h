#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }

#define CLASS_3_C7B0DFDDE16A80E4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x138ECD40)
#define CLASS_3_C7B0DFDDE16A80E4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x138ECE20)
#define CLASS_3_C7B0DFDDE16A80E4_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x138ECEB0)
#define CLASS_3_C7B0DFDDE16A80E4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x138ECCF0)
#define CLASS_3_C7B0DFDDE16A80E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x138ECD90)
#define CLASS_3_C7B0DFDDE16A80E4__CTOR_OFFSET UNITYSDK_OFFSET(0x138ECE10)

inline static constexpr unsigned int Class_3_C7B0DFDDE16A80E4_TypeDefinitionIndex = 67945;

class Class_3_C7B0DFDDE16A80E4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0xAA; // 0x0
	::System::String* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_C7B0DFDDE16A80E4* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_C7B0DFDDE16A80E4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C7B0DFDDE16A80E4_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
