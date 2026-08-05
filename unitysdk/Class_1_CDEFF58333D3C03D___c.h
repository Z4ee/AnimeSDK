#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4A1AD10FD6B58ED3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_CDEFF58333D3C03D___C_METHOD_1_110495AB56079231_OFFSET UNITYSDK_OFFSET(0x1DF9DBE0)
#define CLASS_1_CDEFF58333D3C03D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9DB90)
#define CLASS_1_CDEFF58333D3C03D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9DBD0)

inline static constexpr unsigned int Class_1_CDEFF58333D3C03D___c_TypeDefinitionIndex = 92016;

class Class_1_CDEFF58333D3C03D___c : public ::System::Object
{
public:
	static ::Class_1_CDEFF58333D3C03D___c** StaticGet___9()
	{
		return (::Class_1_CDEFF58333D3C03D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDEFF58333D3C03D___c_TypeDefinitionIndex)->GetStaticField(0x51E50);
	}
	static ::System::Func_2<::Class_1_4A1AD10FD6B58ED3*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Class_1_4A1AD10FD6B58ED3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDEFF58333D3C03D___c_TypeDefinitionIndex)->GetStaticField(0x51E58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDEFF58333D3C03D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDEFF58333D3C03D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_110495AB56079231(::Class_1_4A1AD10FD6B58ED3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_4A1AD10FD6B58ED3*))((::PBYTE)hIl2Cpp + CLASS_1_CDEFF58333D3C03D___C_METHOD_1_110495AB56079231_OFFSET))(this, a1);
	}
};
