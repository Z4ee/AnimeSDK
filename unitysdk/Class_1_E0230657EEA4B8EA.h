#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"

class Class_1_C01CD724E4B5E41C;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E0230657EEA4B8EA_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16315850)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_1AF2DA66CAEEB938_OFFSET UNITYSDK_OFFSET(0x16313EC0)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_2C6EBE7C20E87B94_OFFSET UNITYSDK_OFFSET(0x163136E0)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x16313AA0)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_6424D2B0A912F983_OFFSET UNITYSDK_OFFSET(0x16315030)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_70764F01A4DBCF8A_OFFSET UNITYSDK_OFFSET(0x16315D80)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_9BAB385F8658C2AD_OFFSET UNITYSDK_OFFSET(0x16313CD0)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_A411300876E69F5E_OFFSET UNITYSDK_OFFSET(0x16315A10)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_F7721D0B419638BB_OFFSET UNITYSDK_OFFSET(0x16314CC0)
#define CLASS_1_E0230657EEA4B8EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x163164B0)
#define CLASS_1_E0230657EEA4B8EA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163138F0)
#define CLASS_1_E0230657EEA4B8EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16313750)

inline static constexpr unsigned int Class_1_E0230657EEA4B8EA_TypeDefinitionIndex = 47299;

class Class_1_E0230657EEA4B8EA : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0230657EEA4B8EA_TypeDefinitionIndex)->GetStaticField(0x41030);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0230657EEA4B8EA_TypeDefinitionIndex)->GetStaticField(0x41038);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0230657EEA4B8EA_TypeDefinitionIndex)->GetStaticField(0x41040);
	}
	::Class_1_C01CD724E4B5E41C* Field_1_3; // 0x10
	::Class_1_C01CD724E4B5E41C* Field_1_4; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>* Field_1_6; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA__CTOR_1_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2C6EBE7C20E87B94(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_2C6EBE7C20E87B94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_1_9BAB385F8658C2AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_9BAB385F8658C2AD_OFFSET))(this);
	}

	::Class_1_C01CD724E4B5E41C* Method_1_6424D2B0A912F983(::System::Type* a1)
	{
		return ((::Class_1_C01CD724E4B5E41C*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_6424D2B0A912F983_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::Class_1_C01CD724E4B5E41C* Method_1_1AF2DA66CAEEB938()
	{
		return ((::Class_1_C01CD724E4B5E41C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_1AF2DA66CAEEB938_OFFSET))(this);
	}

	::Class_1_C01CD724E4B5E41C* Method_1_A411300876E69F5E(::System::Type* a1, ::ScenenLightManager::LightTypeID a2)
	{
		return ((::Class_1_C01CD724E4B5E41C*(*)(::PVOID, ::System::Type*, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_A411300876E69F5E_OFFSET))(this, a1, a2);
	}

	::Class_1_C01CD724E4B5E41C* Method_1_F7721D0B419638BB()
	{
		return ((::Class_1_C01CD724E4B5E41C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_F7721D0B419638BB_OFFSET))(this);
	}

	static ::System::Void Method_1_70764F01A4DBCF8A(::System::Type* a1)
	{
		return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_70764F01A4DBCF8A_OFFSET))(a1);
	}
};
