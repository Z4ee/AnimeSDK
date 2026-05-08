#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_69FE2A2F26EAE95C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F21834FAEFB228CB___C_METHOD_1_123DD3AD7C20E1C5_OFFSET UNITYSDK_OFFSET(0x1BE7F310)
#define CLASS_2_F21834FAEFB228CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE7F2C0)
#define CLASS_2_F21834FAEFB228CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7F300)

inline static constexpr unsigned int Class_2_F21834FAEFB228CB___c_TypeDefinitionIndex = 9254;

class Class_2_F21834FAEFB228CB___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_69FE2A2F26EAE95C*, ::System::Int32>** StaticGet___9__5_4()
	{
		return (::System::Func_2<::Class_2_69FE2A2F26EAE95C*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F21834FAEFB228CB___c_TypeDefinitionIndex)->GetStaticField(0x8170);
	}
	static ::Class_2_F21834FAEFB228CB___c** StaticGet___9()
	{
		return (::Class_2_F21834FAEFB228CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F21834FAEFB228CB___c_TypeDefinitionIndex)->GetStaticField(0x8178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F21834FAEFB228CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F21834FAEFB228CB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_123DD3AD7C20E1C5(::Class_2_69FE2A2F26EAE95C* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_69FE2A2F26EAE95C*))((::PBYTE)hIl2Cpp + CLASS_2_F21834FAEFB228CB___C_METHOD_1_123DD3AD7C20E1C5_OFFSET))(this, a1);
	}
};
