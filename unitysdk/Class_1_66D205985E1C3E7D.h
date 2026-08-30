#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_66D205985E1C3E7D_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0xB73AE10)
#define CLASS_1_66D205985E1C3E7D_METHOD_1_33AFA49D239A6650_OFFSET UNITYSDK_OFFSET(0xB73AF70)
#define CLASS_1_66D205985E1C3E7D__CTOR_OFFSET UNITYSDK_OFFSET(0xB73B320)

inline static constexpr unsigned int Class_1_66D205985E1C3E7D_TypeDefinitionIndex = 62400;

class Class_1_66D205985E1C3E7D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::System::String*>** StaticGet_LCCALPJDKAH()
	{
		return (::System::Collections::Generic::Queue_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x5E4E0);
	}
	static ::System::Single* StaticGet_CENECBNFGLD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x134D0);
	}
	static ::System::Single* StaticGet_EPFHHGKHJOG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x134D4);
	}
	static ::System::Single* StaticGet_PGFBFDJIDLM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x134D8);
	}
	static ::System::Boolean* StaticGet_IJCDEINGADN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x134DC);
	}
	static ::System::Single* StaticGet_GLOLNLDCKEM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66D205985E1C3E7D_TypeDefinitionIndex)->GetStaticField(0x134E0);
	}
	// static const ::System::Int32 GELOACJEJCL = 0x14; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D_METHOD_1_1DCEF572AAED75CF_OFFSET))(a1);
	}

	static ::System::String* Method_1_33AFA49D239A6650()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66D205985E1C3E7D_METHOD_1_33AFA49D239A6650_OFFSET))();
	}
};
