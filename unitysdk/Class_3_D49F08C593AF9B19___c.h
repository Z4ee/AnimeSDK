#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A70C3BF41A60625E;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D49F08C593AF9B19___C_METHOD_1_55E3CCBC85479A37_OFFSET UNITYSDK_OFFSET(0x17C36890)
#define CLASS_3_D49F08C593AF9B19___C_METHOD_1_D1904B685ED5D695_OFFSET UNITYSDK_OFFSET(0x17C366C0)
#define CLASS_3_D49F08C593AF9B19___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C36670)
#define CLASS_3_D49F08C593AF9B19___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C366B0)

inline static constexpr unsigned int Class_3_D49F08C593AF9B19___c_TypeDefinitionIndex = 60381;

class Class_3_D49F08C593AF9B19___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_A70C3BF41A60625E*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_A70C3BF41A60625E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D49F08C593AF9B19___c_TypeDefinitionIndex)->GetStaticField(0x42AC0);
	}
	static ::System::Action_2<::Class_3_A70C3BF41A60625E*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_A70C3BF41A60625E*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D49F08C593AF9B19___c_TypeDefinitionIndex)->GetStaticField(0x42AC8);
	}
	static ::Class_3_D49F08C593AF9B19___c** StaticGet___9()
	{
		return (::Class_3_D49F08C593AF9B19___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D49F08C593AF9B19___c_TypeDefinitionIndex)->GetStaticField(0x42AD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D49F08C593AF9B19___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D49F08C593AF9B19___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D1904B685ED5D695(::Class_3_A70C3BF41A60625E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A70C3BF41A60625E*))((::PBYTE)hIl2Cpp + CLASS_3_D49F08C593AF9B19___C_METHOD_1_D1904B685ED5D695_OFFSET))(this, a1);
	}

	::System::Void Method_1_55E3CCBC85479A37(::Class_3_A70C3BF41A60625E* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A70C3BF41A60625E*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_D49F08C593AF9B19___C_METHOD_1_55E3CCBC85479A37_OFFSET))(this, a1, a2);
	}
};
