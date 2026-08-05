#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_508203A30A850CC8_Struct_2_BBD456EBC9087BC2_18.h"
#include "unitysdk/Nap/NapECS/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_92DA5310F390EF4D.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace MoleMole { class MonoRenderHandlerForAvatar_Class_1_9A90CD018E72DF20_4; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }

#define CLASS_2_508203A30A850CC8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F3BFE0)
#define CLASS_2_508203A30A850CC8_METHOD_2_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x16F3D450)
#define CLASS_2_508203A30A850CC8_METHOD_2_0B8C920CBAC3508E_OFFSET UNITYSDK_OFFSET(0x16F3E0A0)
#define CLASS_2_508203A30A850CC8_METHOD_2_1FE2B10286A019B7_OFFSET UNITYSDK_OFFSET(0x16F3C9C0)
#define CLASS_2_508203A30A850CC8_METHOD_2_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x16F3E140)
#define CLASS_2_508203A30A850CC8_METHOD_2_30478BAF7CBFD618_OFFSET UNITYSDK_OFFSET(0x16F3EFC0)
#define CLASS_2_508203A30A850CC8_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x16F3C680)
#define CLASS_2_508203A30A850CC8_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x16F3C360)
#define CLASS_2_508203A30A850CC8_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16F3EBB0)
#define CLASS_2_508203A30A850CC8_METHOD_2_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x16F3CAA0)
#define CLASS_2_508203A30A850CC8_METHOD_2_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x16F3D660)
#define CLASS_2_508203A30A850CC8_METHOD_2_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x16F3C110)
#define CLASS_2_508203A30A850CC8_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16F3C1A0)
#define CLASS_2_508203A30A850CC8_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x16F3DC40)
#define CLASS_2_508203A30A850CC8_METHOD_2_C47A61DDA4747C86_OFFSET UNITYSDK_OFFSET(0x16F3E870)
#define CLASS_2_508203A30A850CC8_METHOD_2_CA344D06ECBECF75_OFFSET UNITYSDK_OFFSET(0x16F3E560)
#define CLASS_2_508203A30A850CC8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F3DC00)
#define CLASS_2_508203A30A850CC8_METHOD_2_EE99F357F5699AB8_OFFSET UNITYSDK_OFFSET(0x16F3DA00)
#define CLASS_2_508203A30A850CC8_METHOD_2_F5AA1F37051E2C94_OFFSET UNITYSDK_OFFSET(0x16F3DEB0)
#define CLASS_2_508203A30A850CC8_METHOD_2_F648798D2C4DCB04_OFFSET UNITYSDK_OFFSET(0x16F3E9D0)
#define CLASS_2_508203A30A850CC8_ONCREATE_OFFSET UNITYSDK_OFFSET(0x16F3C220)
#define CLASS_2_508203A30A850CC8__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F3C670)
#define CLASS_2_508203A30A850CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3C5A0)

inline static constexpr unsigned int Class_2_508203A30A850CC8_TypeDefinitionIndex = 81810;

class Class_2_508203A30A850CC8 : public ::Nap::NapECS::SingletonDisposable_1<::Class_2_508203A30A850CC8*>
{
public:
	static ::Class_2_508203A30A850CC8** StaticGet_Field_2_6()
	{
		return (::Class_2_508203A30A850CC8**)Il2CppClass::FromTypeDefinitionIndex(Class_2_508203A30A850CC8_TypeDefinitionIndex)->GetStaticField(0x41BD0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_508203A30A850CC8_TypeDefinitionIndex)->GetStaticField(0x41BD8);
	}
	static ::Class_2_508203A30A850CC8** StaticGet_Field_2_15()
	{
		return (::Class_2_508203A30A850CC8**)Il2CppClass::FromTypeDefinitionIndex(Class_2_508203A30A850CC8_TypeDefinitionIndex)->GetStaticField(0x41BE0);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_508203A30A850CC8_TypeDefinitionIndex)->GetStaticField(0xF4D0);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_508203A30A850CC8_TypeDefinitionIndex)->GetStaticField(0xF4D1);
	}
	::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::MoleMole::MonoRenderHandler*>>* Field_2_10; // 0x10
	::Unity::Collections::ManagedBlockQueue_1<::System::Int32>* Field_2_12; // 0x18
	::Unity::Collections::ManagedBlockQueue_1<::Class_2_508203A30A850CC8_Struct_2_BBD456EBC9087BC2_18>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandler*>* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar_Class_1_9A90CD018E72DF20_4*>* Field_2_14; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>* Field_2_3; // 0x38
	::System::Collections::Generic::HashSet_1<::MoleMole::MonoRenderHandler*>* Field_2_16; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>* Field_2_2; // 0x48
	::System::Boolean Field_2_11; // 0x50
	::System::Boolean Field_2_9; // 0x51
	::System::Boolean Field_2_18; // 0x52
	::System::Boolean Field_2_17; // 0x53
	::System::Boolean Field_2_8; // 0x54
	::Unity::Jobs::JobHandle Field_2_19; // 0x58
	::Unity::Jobs::JobHandle Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_2_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_660474B0F8C5FECE_OFFSET))(this);
	}

	::System::Void Method_2_EE99F357F5699AB8(::MoleMole::MonoRenderHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_EE99F357F5699AB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_2_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_86026B47A3027B67_OFFSET))();
	}

	::System::Void Method_2_F5AA1F37051E2C94(::MoleMole::MonoRenderHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_F5AA1F37051E2C94_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_0B8C920CBAC3508E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_0B8C920CBAC3508E_OFFSET))(a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_1FE2B10286A019B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_1FE2B10286A019B7_OFFSET))(this);
	}

	static ::System::Void Method_2_C47A61DDA4747C86(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_C47A61DDA4747C86_OFFSET))(a1);
	}

	::System::Void Method_2_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_2_F648798D2C4DCB04(::MoleMole::MonoRenderHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_F648798D2C4DCB04_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA344D06ECBECF75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_CA344D06ECBECF75_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_30478BAF7CBFD618(::MoleMole::MonoRenderHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_METHOD_2_30478BAF7CBFD618_OFFSET))(this, a1);
	}
};
