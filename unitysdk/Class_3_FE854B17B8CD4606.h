#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_3B9412253A0E3E79;
class Class_3_B4FB01F6D0265A09;
class Class_3_DFD5D1FDB9D2A4AC;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FE854B17B8CD4606_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFB83BC0)
#define CLASS_3_FE854B17B8CD4606_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xFB83E80)
#define CLASS_3_FE854B17B8CD4606_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xFB85340)
#define CLASS_3_FE854B17B8CD4606_METHOD_3_B7941620B4C04914_OFFSET UNITYSDK_OFFSET(0xFB845F0)
#define CLASS_3_FE854B17B8CD4606_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFB852B0)
#define CLASS_3_FE854B17B8CD4606_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB85390)
#define CLASS_3_FE854B17B8CD4606_UPDATE_OFFSET UNITYSDK_OFFSET(0xFB83DD0)
#define CLASS_3_FE854B17B8CD4606__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB84580)
#define CLASS_3_FE854B17B8CD4606__CTOR_OFFSET UNITYSDK_OFFSET(0xFB84530)

inline static constexpr unsigned int Class_3_FE854B17B8CD4606_TypeDefinitionIndex = 63262;

class Class_3_FE854B17B8CD4606 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Action_3<::Class_3_B4FB01F6D0265A09*, ::Class_3_3B9412253A0E3E79*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet_Field_3_2()
	{
		return (::System::Action_3<::Class_3_B4FB01F6D0265A09*, ::Class_3_3B9412253A0E3E79*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE854B17B8CD4606_TypeDefinitionIndex)->GetStaticField(0x38870);
	}
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE854B17B8CD4606_TypeDefinitionIndex)->GetStaticField(0x38878);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_B7941620B4C04914(::Class_3_B4FB01F6D0265A09* a1, ::Class_3_3B9412253A0E3E79* a2, ::Class_3_DFD5D1FDB9D2A4AC* a3)
	{
		return ((::System::Void(*)(::Class_3_B4FB01F6D0265A09*, ::Class_3_3B9412253A0E3E79*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606_METHOD_3_B7941620B4C04914_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606_METHOD_3_07280B24DFAC0CA9_OFFSET))();
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE854B17B8CD4606_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
