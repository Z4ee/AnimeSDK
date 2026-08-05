#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_3B9412253A0E3E79;
class Class_3_827280A7B00D3846;
class Class_3_C93CC3D2C2AC4067;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_57500065D4377E02_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17D13090)
#define CLASS_3_57500065D4377E02_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x17D13350)
#define CLASS_3_57500065D4377E02_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x17D13BE0)
#define CLASS_3_57500065D4377E02_METHOD_3_753CB2C1C0CF4233_OFFSET UNITYSDK_OFFSET(0x17D13C30)
#define CLASS_3_57500065D4377E02_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x17D13B50)
#define CLASS_3_57500065D4377E02_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D13AC0)
#define CLASS_3_57500065D4377E02_UPDATE_OFFSET UNITYSDK_OFFSET(0x17D132A0)
#define CLASS_3_57500065D4377E02__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D13A50)
#define CLASS_3_57500065D4377E02__CTOR_OFFSET UNITYSDK_OFFSET(0x17D13A00)

inline static constexpr unsigned int Class_3_57500065D4377E02_TypeDefinitionIndex = 89482;

class Class_3_57500065D4377E02 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Action_3<::Class_3_827280A7B00D3846*, ::Class_3_3B9412253A0E3E79*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet_Field_3_0()
	{
		return (::System::Action_3<::Class_3_827280A7B00D3846*, ::Class_3_3B9412253A0E3E79*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_57500065D4377E02_TypeDefinitionIndex)->GetStaticField(0x51CC0);
	}
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_57500065D4377E02_TypeDefinitionIndex)->GetStaticField(0x51CC8);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_753CB2C1C0CF4233(::Class_3_827280A7B00D3846* a1, ::Class_3_3B9412253A0E3E79* a2, ::Class_3_C93CC3D2C2AC4067* a3)
	{
		return ((::System::Void(*)(::Class_3_827280A7B00D3846*, ::Class_3_3B9412253A0E3E79*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02_METHOD_3_753CB2C1C0CF4233_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_57500065D4377E02_METHOD_3_07280B24DFAC0CA9_OFFSET))();
	}
};
