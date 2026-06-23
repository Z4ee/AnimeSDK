#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }

#define CLASS_3_703088CDA8FDF3C2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11DE4350)
#define CLASS_3_703088CDA8FDF3C2_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11DE44B0)
#define CLASS_3_703088CDA8FDF3C2_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11DE4430)
#define CLASS_3_703088CDA8FDF3C2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11DE42F0)
#define CLASS_3_703088CDA8FDF3C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DE43A0)
#define CLASS_3_703088CDA8FDF3C2__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE4420)

inline static constexpr unsigned int Class_3_703088CDA8FDF3C2_TypeDefinitionIndex = 75369;

class Class_3_703088CDA8FDF3C2 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0xB4; // 0x0
	::System::String* Field_3_0; // 0x48
	::System::Single Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_703088CDA8FDF3C2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_703088CDA8FDF3C2__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_703088CDA8FDF3C2_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_703088CDA8FDF3C2_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_703088CDA8FDF3C2* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_703088CDA8FDF3C2*(*)())((::PBYTE)hIl2Cpp + CLASS_3_703088CDA8FDF3C2_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_703088CDA8FDF3C2_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
