#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FontAssetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class Material; }

#define CLASS_1_3A34B8763585140A_METHOD_1_3C3A2B3153073CE6_OFFSET UNITYSDK_OFFSET(0xEBAD370)
#define CLASS_1_3A34B8763585140A_METHOD_1_4A4A5C26D746CA31_OFFSET UNITYSDK_OFFSET(0xEBACB20)
#define CLASS_1_3A34B8763585140A_METHOD_1_63449EEC6B308260_OFFSET UNITYSDK_OFFSET(0xEBAD1E0)
#define CLASS_1_3A34B8763585140A_METHOD_1_972F203BE0A312B2_OFFSET UNITYSDK_OFFSET(0xEBACD70)
#define CLASS_1_3A34B8763585140A_METHOD_1_980D4F94D57B1A88_OFFSET UNITYSDK_OFFSET(0xEBACF20)
#define CLASS_1_3A34B8763585140A_METHOD_1_A71CC0D167A2B228_OFFSET UNITYSDK_OFFSET(0xEBACFC0)
#define CLASS_1_3A34B8763585140A_METHOD_1_B84897AE509F782F_OFFSET UNITYSDK_OFFSET(0xEBAD5A0)
#define CLASS_1_3A34B8763585140A_METHOD_1_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0xEBAC860)
#define CLASS_1_3A34B8763585140A__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBAD780)

inline static constexpr unsigned int Class_1_3A34B8763585140A_TypeDefinitionIndex = 72527;

class Class_1_3A34B8763585140A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::TMPro::TMP_FontAsset*, ::System::Int32>** StaticGet_PMEMCMCAOPC()
	{
		return (::System::Collections::Generic::Dictionary_2<::TMPro::TMP_FontAsset*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A34B8763585140A_TypeDefinitionIndex)->GetStaticField(0x58910);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::FontAssetConfig*, ::TMPro::TMP_FontAsset*>** StaticGet_MMHNLDCEDNO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::FontAssetConfig*, ::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A34B8763585140A_TypeDefinitionIndex)->GetStaticField(0x58918);
	}
	static ::System::Boolean* StaticGet_JLPIKFOJPBJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A34B8763585140A_TypeDefinitionIndex)->GetStaticField(0x13860);
	}
	static ::System::Boolean* StaticGet_ECFACLNOKFG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A34B8763585140A_TypeDefinitionIndex)->GetStaticField(0x13861);
	}
	// static const ::System::String* NFNCFMABGCC; // 0x0
	// static const ::System::String* IINJBIGPJDL; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F206290BA342BA13()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_F206290BA342BA13_OFFSET))();
	}

	static ::TMPro::TMP_FontAsset* Method_1_4A4A5C26D746CA31(::RPG::Client::FontAssetConfig* a1)
	{
		return ((::TMPro::TMP_FontAsset*(*)(::RPG::Client::FontAssetConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_4A4A5C26D746CA31_OFFSET))(a1);
	}

	static ::System::Void Method_1_980D4F94D57B1A88(::TMPro::TMP_FontAsset* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::TMPro::TMP_FontAsset*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_980D4F94D57B1A88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_63449EEC6B308260(::TMPro::TMP_FontAsset* a1)
	{
		return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_63449EEC6B308260_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C3A2B3153073CE6(::TMPro::TMP_FontAsset* a1)
	{
		return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_3C3A2B3153073CE6_OFFSET))(a1);
	}

	static ::System::Void Method_1_B84897AE509F782F(::TMPro::TMP_FontAsset* a1)
	{
		return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_B84897AE509F782F_OFFSET))(a1);
	}

	static ::System::Void Method_1_972F203BE0A312B2(::TMPro::TMP_FontAsset* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_972F203BE0A312B2_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::UInt32>* Method_1_A71CC0D167A2B228(::System::String* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3A34B8763585140A_METHOD_1_A71CC0D167A2B228_OFFSET))(a1);
	}
};
