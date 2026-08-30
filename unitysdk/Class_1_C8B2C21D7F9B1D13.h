#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C8B2C21D7F9B1D13_GET__RANDOM_OFFSET UNITYSDK_OFFSET(0x18DE00A0)
#define CLASS_1_C8B2C21D7F9B1D13_METHOD_1_19060179242D253B_OFFSET UNITYSDK_OFFSET(0x18DE0480)
#define CLASS_1_C8B2C21D7F9B1D13_METHOD_1_43D33F88F40D8EAB_OFFSET UNITYSDK_OFFSET(0x18DE03A0)
#define CLASS_1_C8B2C21D7F9B1D13_METHOD_1_8B39A86A62D35EA0_OFFSET UNITYSDK_OFFSET(0x18DE0210)
#define CLASS_1_C8B2C21D7F9B1D13_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18DE00F0)
#define CLASS_1_C8B2C21D7F9B1D13_METHOD_1_EFB3C862D4035DBE_1_OFFSET UNITYSDK_OFFSET(0x18DE0540)
#define CLASS_1_C8B2C21D7F9B1D13_METHOD_1_EFB3C862D4035DBE_OFFSET UNITYSDK_OFFSET(0x18DE0130)
#define CLASS_1_C8B2C21D7F9B1D13__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE00B0)

inline static constexpr unsigned int Class_1_C8B2C21D7F9B1D13_TypeDefinitionIndex = 76960;

class Class_1_C8B2C21D7F9B1D13 : public ::System::Object
{
public:
	::System::Random* __Random_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13__CTOR_OFFSET))(this, a1);
	}

	::System::Random* get__Random()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13_GET__RANDOM_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_EFB3C862D4035DBE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13_METHOD_1_EFB3C862D4035DBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B39A86A62D35EA0(::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13_METHOD_1_8B39A86A62D35EA0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_43D33F88F40D8EAB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13_METHOD_1_43D33F88F40D8EAB_OFFSET))(this, a1);
	}

	::System::Double Method_1_19060179242D253B()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13_METHOD_1_19060179242D253B_OFFSET))(this);
	}

	::System::Int32 Method_1_EFB3C862D4035DBE_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8B2C21D7F9B1D13_METHOD_1_EFB3C862D4035DBE_1_OFFSET))(this, a1, a2);
	}
};
