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

#define CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET UNITYSDK_OFFSET(0x1CF82FB0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x1CF70D60)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x1CF69E50)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET UNITYSDK_OFFSET(0x1CF69EA0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET UNITYSDK_OFFSET(0x1CF70010)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1CF6F070)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_E9C16E203CD4DBF0_OFFSET UNITYSDK_OFFSET(0x1CF74270)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1CF6FA20)
#define CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF84B30)

inline static constexpr unsigned int Class_1_5908431D9A8FB2AE_TypeDefinitionIndex = 33898;

class Class_1_5908431D9A8FB2AE : public ::System::Object
{
public:
	static ::Class_1_5908431D9A8FB2AE** StaticGet_Field_1_2()
	{
		return (::Class_1_5908431D9A8FB2AE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5908431D9A8FB2AE_TypeDefinitionIndex)->GetStaticField(0x27670);
	}
	::Class_1_468101999ADA762F* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Class_1_5908431D9A8FB2AE_Struct_2_87B41F269C9BEEBB<::Class_1_63D3B1017C3CE3C8*>>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_63D3B1017C3CE3C8*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET))(this);
	}

	::Class_1_468101999ADA762F* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_468101999ADA762F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	static ::Class_1_5908431D9A8FB2AE* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_5908431D9A8FB2AE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	::System::Void Method_1_123B9BEBCFBEA5D0(::Class_1_63D3B1017C3CE3C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D3B1017C3CE3C8*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66D65081E4B39592(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1, ::Class_1_63D3B1017C3CE3C8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_63D3B1017C3CE3C8*&))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9C16E203CD4DBF0(::Class_1_63D3B1017C3CE3C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D3B1017C3CE3C8*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_E9C16E203CD4DBF0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_63D3B1017C3CE3C8*>* Method_1_9A2A9A8FD6B5D017()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_63D3B1017C3CE3C8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET))(this);
	}
};
