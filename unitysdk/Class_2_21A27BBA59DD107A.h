#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Enum_3_2271A294FCCB3EAE.h"

class Class_3_32287D2997141DD8_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_21A27BBA59DD107A_METHOD_2_554E2C4750C8F1D2_OFFSET UNITYSDK_OFFSET(0xD48E3E0)
#define CLASS_2_21A27BBA59DD107A_METHOD_2_7F7298D49EF0B310_OFFSET UNITYSDK_OFFSET(0xD48F8D0)
#define CLASS_2_21A27BBA59DD107A_METHOD_2_AF5C6F6152377069_OFFSET UNITYSDK_OFFSET(0xD48F790)
#define CLASS_2_21A27BBA59DD107A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD48E390)
#define CLASS_2_21A27BBA59DD107A_METHOD_2_E3979DA7E0E6B8EF_OFFSET UNITYSDK_OFFSET(0xD48FCC0)
#define CLASS_2_21A27BBA59DD107A_ONSTART_OFFSET UNITYSDK_OFFSET(0xD48E350)
#define CLASS_2_21A27BBA59DD107A__CTOR_OFFSET UNITYSDK_OFFSET(0xD48E3D0)

inline static constexpr unsigned int Class_2_21A27BBA59DD107A_TypeDefinitionIndex = 59666;

class Class_2_21A27BBA59DD107A : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21A27BBA59DD107A__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21A27BBA59DD107A_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21A27BBA59DD107A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_554E2C4750C8F1D2(::Enum_3_2271A294FCCB3EAE a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2271A294FCCB3EAE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_21A27BBA59DD107A_METHOD_2_554E2C4750C8F1D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF5C6F6152377069(::Class_3_32287D2997141DD8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32287D2997141DD8_1*))((::PBYTE)hIl2Cpp + CLASS_2_21A27BBA59DD107A_METHOD_2_AF5C6F6152377069_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F7298D49EF0B310(::Enum_3_2271A294FCCB3EAE a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2271A294FCCB3EAE, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_21A27BBA59DD107A_METHOD_2_7F7298D49EF0B310_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E3979DA7E0E6B8EF(::Enum_3_2271A294FCCB3EAE a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2271A294FCCB3EAE, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_21A27BBA59DD107A_METHOD_2_E3979DA7E0E6B8EF_OFFSET))(this, a1, a2);
	}
};
