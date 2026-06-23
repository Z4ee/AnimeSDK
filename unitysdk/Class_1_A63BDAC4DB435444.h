#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_A63BDAC4DB435444_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x13304E30)
#define CLASS_1_A63BDAC4DB435444_METHOD_1_43BDF54FD1794694_OFFSET UNITYSDK_OFFSET(0x13304F20)
#define CLASS_1_A63BDAC4DB435444_METHOD_1_68B73E886BFAE264_OFFSET UNITYSDK_OFFSET(0x13305100)
#define CLASS_1_A63BDAC4DB435444_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x13304E90)
#define CLASS_1_A63BDAC4DB435444_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x13305040)
#define CLASS_1_A63BDAC4DB435444_METHOD_1_DA4A45B63F207DED_OFFSET UNITYSDK_OFFSET(0x13304F80)
#define CLASS_1_A63BDAC4DB435444_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x13304F30)

inline static constexpr unsigned int Class_1_A63BDAC4DB435444_TypeDefinitionIndex = 45552;

class Class_1_A63BDAC4DB435444 : public ::System::Object
{
public:
	static ::System::Random** StaticGet_Field_1_1()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A63BDAC4DB435444_TypeDefinitionIndex)->GetStaticField(0x472A0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A63BDAC4DB435444_TypeDefinitionIndex)->GetStaticField(0x112C0);
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_A63BDAC4DB435444_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A63BDAC4DB435444_METHOD_1_D09831639F615812_OFFSET))(a1);
	}

	static ::System::Random* Method_1_43BDF54FD1794694()
	{
		return ((::System::Random*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A63BDAC4DB435444_METHOD_1_43BDF54FD1794694_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A63BDAC4DB435444_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Single Method_1_DA4A45B63F207DED(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A63BDAC4DB435444_METHOD_1_DA4A45B63F207DED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A63BDAC4DB435444_METHOD_1_D0CD9A971CA3B1CF_OFFSET))();
	}

	static ::System::Int32 Method_1_68B73E886BFAE264(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A63BDAC4DB435444_METHOD_1_68B73E886BFAE264_OFFSET))(a1, a2);
	}
};
