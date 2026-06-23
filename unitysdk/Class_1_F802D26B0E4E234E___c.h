#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_F802D26B0E4E234E___C_METHOD_1_6E793510D10B5A80_OFFSET UNITYSDK_OFFSET(0x12D5B5F0)
#define CLASS_1_F802D26B0E4E234E___C_METHOD_1_D60598A5700EA616_OFFSET UNITYSDK_OFFSET(0x12D5B560)
#define CLASS_1_F802D26B0E4E234E___C_METHOD_1_FFF09625474370F2_OFFSET UNITYSDK_OFFSET(0x12D5B650)
#define CLASS_1_F802D26B0E4E234E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D5B510)
#define CLASS_1_F802D26B0E4E234E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D5B550)

inline static constexpr unsigned int Class_1_F802D26B0E4E234E___c_TypeDefinitionIndex = 54341;

class Class_1_F802D26B0E4E234E___c : public ::System::Object
{
public:
	static ::Class_1_F802D26B0E4E234E___c** StaticGet___9()
	{
		return (::Class_1_F802D26B0E4E234E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F802D26B0E4E234E___c_TypeDefinitionIndex)->GetStaticField(0x3DA70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F802D26B0E4E234E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F802D26B0E4E234E___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* Method_1_D60598A5700EA616()
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F802D26B0E4E234E___C_METHOD_1_D60598A5700EA616_OFFSET))(this);
	}

	::System::Boolean Method_1_6E793510D10B5A80(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F802D26B0E4E234E___C_METHOD_1_6E793510D10B5A80_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_FFF09625474370F2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F802D26B0E4E234E___C_METHOD_1_FFF09625474370F2_OFFSET))(this, a1);
	}
};
