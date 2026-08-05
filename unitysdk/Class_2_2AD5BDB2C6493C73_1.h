#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_58A9EDFD57C447CB.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_31.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_9C2ABEAE14C6A912;
class Class_1_E13183B148E560DC;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }

#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x125ABB30)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x125AB4A0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x125ABF20)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x125AB4F0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_3617ADA7F9086B3B_OFFSET UNITYSDK_OFFSET(0x125AC180)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x125AABD0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_4A3668559C84AAEB_OFFSET UNITYSDK_OFFSET(0x125AA9D0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_4D851AEC7175AA9E_OFFSET UNITYSDK_OFFSET(0x125AB300)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x125ABCE0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_67328CD3EE23C7DF_OFFSET UNITYSDK_OFFSET(0x125AACD0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x125AAB30)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_BC6BFFDCB4FF191F_OFFSET UNITYSDK_OFFSET(0x125AB3D0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_C37B9FFC411D3659_OFFSET UNITYSDK_OFFSET(0x125AC0D0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x125ABC50)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x125ABFC0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x125ABBC0)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x125AB830)
#define CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_E3E5AD85F8AC988E_OFFSET UNITYSDK_OFFSET(0x125AC050)
#define CLASS_2_2AD5BDB2C6493C73_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x125ABA60)
#define CLASS_2_2AD5BDB2C6493C73_1__CTOR_OFFSET UNITYSDK_OFFSET(0x125ABA50)

inline static constexpr unsigned int Class_2_2AD5BDB2C6493C73_1_TypeDefinitionIndex = 81461;

class Class_2_2AD5BDB2C6493C73_1 : public ::Class_1_58A9EDFD57C447CB
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AD5BDB2C6493C73_1_TypeDefinitionIndex)->GetStaticField(0x43000);
	}
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AD5BDB2C6493C73_1_TypeDefinitionIndex)->GetStaticField(0x43008);
	}
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AD5BDB2C6493C73_1_TypeDefinitionIndex)->GetStaticField(0x43010);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AD5BDB2C6493C73_1_TypeDefinitionIndex)->GetStaticField(0xF9F0);
	}
	::System::String* Field_2_11; // 0x18
	::Class_1_E13183B148E560DC* Field_2_5; // 0x20
	::UnityEngine::SpriteRenderer* Field_2_10; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::Boolean Field_2_9; // 0x38
	::System::Single Field_2_8; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_4A3668559C84AAEB(::UnityEngine::SpriteRenderer* a1, ::Class_1_0C791B68CB2A5BF5* a2, ::UnityEngine::MaterialPropertyBlock* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::Class_1_0C791B68CB2A5BF5*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_4A3668559C84AAEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_67328CD3EE23C7DF(::Class_1_9C2ABEAE14C6A912* a1, ::Enum_3_4608E37A1B3D374A_31 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C2ABEAE14C6A912*, ::Enum_3_4608E37A1B3D374A_31))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_67328CD3EE23C7DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_4EA6B1791DACA9CC_OFFSET))();
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_2_4D851AEC7175AA9E(::Class_1_9C2ABEAE14C6A912* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C2ABEAE14C6A912*))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_4D851AEC7175AA9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC6BFFDCB4FF191F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_BC6BFFDCB4FF191F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C37B9FFC411D3659(::UnityEngine::SpriteRenderer* a1, ::Class_1_0C791B68CB2A5BF5* a2, ::UnityEngine::MaterialPropertyBlock* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::Class_1_0C791B68CB2A5BF5*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_C37B9FFC411D3659_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3617ADA7F9086B3B(::Class_1_9C2ABEAE14C6A912* a1, ::Enum_3_4608E37A1B3D374A_31 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C2ABEAE14C6A912*, ::Enum_3_4608E37A1B3D374A_31))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_3617ADA7F9086B3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3E5AD85F8AC988E(::MoleMole::TextureSheetData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2AD5BDB2C6493C73_1_METHOD_2_E3E5AD85F8AC988E_OFFSET))(this, a1, a2);
	}
};
