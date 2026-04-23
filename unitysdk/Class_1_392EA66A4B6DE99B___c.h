#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_392EA66A4B6DE99B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12910630)
#define CLASS_1_392EA66A4B6DE99B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12910670)
#define CLASS_1_392EA66A4B6DE99B___C__SERIALIZE_B__1_0_OFFSET UNITYSDK_OFFSET(0x12910680)

inline static constexpr unsigned int Class_1_392EA66A4B6DE99B___c_TypeDefinitionIndex = 59477;

class Class_1_392EA66A4B6DE99B___c : public ::System::Object
{
public:
	static ::Class_1_392EA66A4B6DE99B___c** StaticGet___9()
	{
		return (::Class_1_392EA66A4B6DE99B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_392EA66A4B6DE99B___c_TypeDefinitionIndex)->GetStaticField(0x26760);
	}
	static ::System::Func_2<::Class_2_181F61C600ECA68B*, ::System::UInt32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_2_181F61C600ECA68B*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_392EA66A4B6DE99B___c_TypeDefinitionIndex)->GetStaticField(0x26768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _Serialize_b__1_0(::Class_2_181F61C600ECA68B* r)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B___C__SERIALIZE_B__1_0_OFFSET))(this, r);
	}
};
