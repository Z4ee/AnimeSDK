#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"

class Class_1_C01CD724E4B5E41C;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E0230657EEA4B8EA_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x145ADBF0)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_1AF2DA66CAEEB938_OFFSET UNITYSDK_OFFSET(0x145ACD00)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_2C6EBE7C20E87B94_OFFSET UNITYSDK_OFFSET(0x145AC3C0)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_2DB57E0DE2A0763C_OFFSET UNITYSDK_OFFSET(0x145AE120)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x145AC780)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_44448CD903E536F4_OFFSET UNITYSDK_OFFSET(0x145AD770)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_4D92D9532E199C2E_OFFSET UNITYSDK_OFFSET(0x145ACA60)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_A411300876E69F5E_OFFSET UNITYSDK_OFFSET(0x145ADDB0)
#define CLASS_1_E0230657EEA4B8EA_METHOD_1_F7721D0B419638BB_OFFSET UNITYSDK_OFFSET(0x145AD400)
#define CLASS_1_E0230657EEA4B8EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x145AE650)
#define CLASS_1_E0230657EEA4B8EA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x145AC5D0)
#define CLASS_1_E0230657EEA4B8EA__CTOR_OFFSET UNITYSDK_OFFSET(0x145AC430)

inline static constexpr unsigned int Class_1_E0230657EEA4B8EA_TypeDefinitionIndex = 46334;

class Class_1_E0230657EEA4B8EA : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0230657EEA4B8EA_TypeDefinitionIndex)->GetStaticField(0x50CF0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0230657EEA4B8EA_TypeDefinitionIndex)->GetStaticField(0x50CF8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0230657EEA4B8EA_TypeDefinitionIndex)->GetStaticField(0x50D00);
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

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_1_4D92D9532E199C2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_4D92D9532E199C2E_OFFSET))(this);
	}

	::Class_1_C01CD724E4B5E41C* Method_1_44448CD903E536F4(::System::Type* a1)
	{
		return ((::Class_1_C01CD724E4B5E41C*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_44448CD903E536F4_OFFSET))(this, a1);
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

	static ::System::Void Method_1_2DB57E0DE2A0763C(::System::Type* a1)
	{
		return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_E0230657EEA4B8EA_METHOD_1_2DB57E0DE2A0763C_OFFSET))(a1);
	}
};
