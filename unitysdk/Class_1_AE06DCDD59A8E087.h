#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define CLASS_1_AE06DCDD59A8E087_METHOD_1_0FE50CBD2E24F050_OFFSET UNITYSDK_OFFSET(0xBBB80B0)
#define CLASS_1_AE06DCDD59A8E087_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xBBB86C0)
#define CLASS_1_AE06DCDD59A8E087_METHOD_1_413DAC3032662C22_OFFSET UNITYSDK_OFFSET(0xBBB8860)
#define CLASS_1_AE06DCDD59A8E087_METHOD_1_6BDC033A1C44AAC5_OFFSET UNITYSDK_OFFSET(0xBBB82F0)
#define CLASS_1_AE06DCDD59A8E087_METHOD_1_71E5E8D13212F37C_OFFSET UNITYSDK_OFFSET(0xBBB7E70)
#define CLASS_1_AE06DCDD59A8E087_METHOD_1_7D41A1A7E79589E1_OFFSET UNITYSDK_OFFSET(0xBBB8550)
#define CLASS_1_AE06DCDD59A8E087_METHOD_1_B90418FDB9C76FBB_OFFSET UNITYSDK_OFFSET(0xBBB8020)
#define CLASS_1_AE06DCDD59A8E087__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBB8980)

inline static constexpr unsigned int Class_1_AE06DCDD59A8E087_TypeDefinitionIndex = 72602;

class Class_1_AE06DCDD59A8E087 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>** StaticGet_DCELJHGLCLH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE06DCDD59A8E087_TypeDefinitionIndex)->GetStaticField(0x63D90);
	}
	static ::UnityEngine::Font** StaticGet_EGBLKEDNFDN()
	{
		return (::UnityEngine::Font**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE06DCDD59A8E087_TypeDefinitionIndex)->GetStaticField(0x63D98);
	}
	static ::System::Boolean* StaticGet_CPKGNGANNIO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE06DCDD59A8E087_TypeDefinitionIndex)->GetStaticField(0x14590);
	}
	// static const ::System::Int32 CJKPHGBNHFL = 0x5A; // 0x0
	// static const ::System::String* NLLKNJLCEPA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_71E5E8D13212F37C(::UnityEngine::Font* a1, ::System::String* a2, ::UnityEngine::Font*& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*, ::System::String*, ::UnityEngine::Font*&))((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087_METHOD_1_71E5E8D13212F37C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0FE50CBD2E24F050(::UnityEngine::Font* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087_METHOD_1_0FE50CBD2E24F050_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B90418FDB9C76FBB(::UnityEngine::Font* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087_METHOD_1_B90418FDB9C76FBB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6BDC033A1C44AAC5(::UnityEngine::Font* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087_METHOD_1_6BDC033A1C44AAC5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7D41A1A7E79589E1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087_METHOD_1_7D41A1A7E79589E1_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087_METHOD_1_2C95AFAD0256302F_OFFSET))();
	}

	static ::System::Void Method_1_413DAC3032662C22(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_AE06DCDD59A8E087_METHOD_1_413DAC3032662C22_OFFSET))(a1);
	}
};
