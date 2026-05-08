#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5150279DA7DE4C40_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16AEEE50)
#define CLASS_1_5150279DA7DE4C40_METHOD_1_37715A9417E6B35C_OFFSET UNITYSDK_OFFSET(0x16AEF1D0)
#define CLASS_1_5150279DA7DE4C40_METHOD_1_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x16AEEF10)
#define CLASS_1_5150279DA7DE4C40_METHOD_1_C8F593A1D5076FBB_OFFSET UNITYSDK_OFFSET(0x16AEF030)
#define CLASS_1_5150279DA7DE4C40__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AEEDF0)
#define CLASS_1_5150279DA7DE4C40__CTOR_OFFSET UNITYSDK_OFFSET(0x16AEEDE0)

inline static constexpr unsigned int Class_1_5150279DA7DE4C40_TypeDefinitionIndex = 42800;

class Class_1_5150279DA7DE4C40 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Foundation::AssetPath>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5150279DA7DE4C40_TypeDefinitionIndex)->GetStaticField(0x46F30);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5150279DA7DE4C40_TypeDefinitionIndex)->GetStaticField(0x11160);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5150279DA7DE4C40__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5150279DA7DE4C40__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5150279DA7DE4C40_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5150279DA7DE4C40_METHOD_1_BCB087DFB7399B96_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_1_C8F593A1D5076FBB()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5150279DA7DE4C40_METHOD_1_C8F593A1D5076FBB_OFFSET))();
	}

	static ::System::Void Method_1_37715A9417E6B35C(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_5150279DA7DE4C40_METHOD_1_37715A9417E6B35C_OFFSET))(a1);
	}
};
