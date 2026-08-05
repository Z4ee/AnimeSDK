#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/Class_1_5908431D9A8FB2AE_Struct_2_87B41F269C9BEEBB.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_468101999ADA762F;
class Class_1_63D3B1017C3CE3C8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET UNITYSDK_OFFSET(0x1E3AE300)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x1E3AE1E0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_3A564D5662A43279_OFFSET UNITYSDK_OFFSET(0x1E397DB0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x1E397D60)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET UNITYSDK_OFFSET(0x1E3A9D50)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET UNITYSDK_OFFSET(0x1E3AEDC0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1E3AE260)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1E3AEE40)
#define CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AE0A0)

inline static constexpr unsigned int Class_1_5908431D9A8FB2AE_TypeDefinitionIndex = 34548;

class Class_1_5908431D9A8FB2AE : public ::System::Object
{
public:
	static ::Class_1_5908431D9A8FB2AE** StaticGet_Field_1_6()
	{
		return (::Class_1_5908431D9A8FB2AE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5908431D9A8FB2AE_TypeDefinitionIndex)->GetStaticField(0x28E80);
	}
	::System::Collections::Generic::Dictionary_2<::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_63D3B1017C3CE3C8*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Class_1_5908431D9A8FB2AE_Struct_2_87B41F269C9BEEBB<::Class_1_63D3B1017C3CE3C8*>>* Field_1_7; // 0x18
	::Class_1_468101999ADA762F* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	::System::Void Method_1_123B9BEBCFBEA5D0(::Class_1_63D3B1017C3CE3C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D3B1017C3CE3C8*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3A564D5662A43279(::Class_1_63D3B1017C3CE3C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D3B1017C3CE3C8*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_3A564D5662A43279_OFFSET))(this, a1);
	}

	static ::Class_1_5908431D9A8FB2AE* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_5908431D9A8FB2AE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	::System::Boolean Method_1_66D65081E4B39592(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1, ::Class_1_63D3B1017C3CE3C8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_63D3B1017C3CE3C8*&))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_63D3B1017C3CE3C8*>* Method_1_9A2A9A8FD6B5D017()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_63D3B1017C3CE3C8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET))(this);
	}

	::Class_1_468101999ADA762F* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_468101999ADA762F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
