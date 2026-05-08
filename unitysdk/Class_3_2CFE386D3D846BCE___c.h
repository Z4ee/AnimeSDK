#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_577338F062DABB28;
class Class_3_D6DA183EF60F02C8;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_2CFE386D3D846BCE___C_METHOD_1_B44633009BEF126A_OFFSET UNITYSDK_OFFSET(0x115864C0)
#define CLASS_3_2CFE386D3D846BCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11586470)
#define CLASS_3_2CFE386D3D846BCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x115864B0)

inline static constexpr unsigned int Class_3_2CFE386D3D846BCE___c_TypeDefinitionIndex = 53257;

class Class_3_2CFE386D3D846BCE___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_D6DA183EF60F02C8*, ::Class_3_577338F062DABB28*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::Class_3_D6DA183EF60F02C8*, ::Class_3_577338F062DABB28*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2CFE386D3D846BCE___c_TypeDefinitionIndex)->GetStaticField(0x31300);
	}
	static ::Class_3_2CFE386D3D846BCE___c** StaticGet___9()
	{
		return (::Class_3_2CFE386D3D846BCE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2CFE386D3D846BCE___c_TypeDefinitionIndex)->GetStaticField(0x31308);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B44633009BEF126A(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_577338F062DABB28* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_577338F062DABB28*))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE___C_METHOD_1_B44633009BEF126A_OFFSET))(this, a1, a2);
	}
};
