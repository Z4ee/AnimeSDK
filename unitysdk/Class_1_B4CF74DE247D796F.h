#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_94EF767DB88BCE69.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/Struct_2_3AAA09564DC7733E.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_28;
class Class_1_91E71DDCF754E6A2;
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_1_B4CF74DE247D796F_METHOD_1_0A2C7117DA59C1CD_OFFSET UNITYSDK_OFFSET(0x14637BE0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_1574A106FF29D3BE_OFFSET UNITYSDK_OFFSET(0x146382C0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_2AA92CD0E283146F_OFFSET UNITYSDK_OFFSET(0x146371C0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_2D61BFB2958D0740_OFFSET UNITYSDK_OFFSET(0x14636240)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_48021046C8547C21_OFFSET UNITYSDK_OFFSET(0x146376C0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_490CF9B24F02BA36_OFFSET UNITYSDK_OFFSET(0x146360A0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_63EE0B85571BB920_OFFSET UNITYSDK_OFFSET(0x14636FC0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_7CACD99999C9F98F_OFFSET UNITYSDK_OFFSET(0x14635A30)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_8349E000AF074CBD_OFFSET UNITYSDK_OFFSET(0x14635E30)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_8C19E224D01386FB_OFFSET UNITYSDK_OFFSET(0x14636B90)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_A1F098720017518E_OFFSET UNITYSDK_OFFSET(0x14635CD0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_A4D101D691E0188A_OFFSET UNITYSDK_OFFSET(0x14637E80)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_A9D9425DDA042081_OFFSET UNITYSDK_OFFSET(0x146364C0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_B267DDAB46C1880F_OFFSET UNITYSDK_OFFSET(0x14638010)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_B5C5625E407992E3_OFFSET UNITYSDK_OFFSET(0x14636EE0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_C08BEA7113A329F8_OFFSET UNITYSDK_OFFSET(0x14637900)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14638280)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_FDA99477C848DA96_OFFSET UNITYSDK_OFFSET(0x14636CE0)
#define CLASS_1_B4CF74DE247D796F__CTOR_OFFSET UNITYSDK_OFFSET(0x14634FE0)

inline static constexpr unsigned int Class_1_B4CF74DE247D796F_TypeDefinitionIndex = 51782;

class Class_1_B4CF74DE247D796F : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_Field_1_9()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4CF74DE247D796F_TypeDefinitionIndex)->GetStaticField(0x12BD0);
	}
	::UnityEngine::Rendering::Volume* Field_1_7; // 0x10
	::UnityEngine::Rendering::Volume* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ScreenEffectType>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ScreenEffectType, ::System::Collections::Generic::List_1<::Struct_2_3AAA09564DC7733E>*>* Field_1_5; // 0x28
	::System::String* Field_1_4; // 0x30
	::MoleMole::Config::ConfigHollowChessboard* Field_1_10; // 0x38
	::MoleMole::Config::ConfigChessboardFilter* Field_1_11; // 0x40

	::System::Void _ctor(::UnityEngine::Rendering::Volume* a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CACD99999C9F98F(::System::String* a1, ::Enum_3_94EF767DB88BCE69 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_7CACD99999C9F98F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_490CF9B24F02BA36(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_490CF9B24F02BA36_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D61BFB2958D0740(::System::String* a1, ::Enum_3_94EF767DB88BCE69 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_94EF767DB88BCE69, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_2D61BFB2958D0740_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C19E224D01386FB(::Class_1_91E71DDCF754E6A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91E71DDCF754E6A2*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_8C19E224D01386FB_OFFSET))(this, a1);
	}

	::Struct_2_3AAA09564DC7733E Method_1_B5C5625E407992E3(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::Enum_3_94EF767DB88BCE69 a3)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_B5C5625E407992E3_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_2AA92CD0E283146F(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_2AA92CD0E283146F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_48021046C8547C21(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_48021046C8547C21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8349E000AF074CBD(::MoleMole::Config::ScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_8349E000AF074CBD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0A2C7117DA59C1CD(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_0A2C7117DA59C1CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4D101D691E0188A(::Class_1_91E71DDCF754E6A2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91E71DDCF754E6A2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_A4D101D691E0188A_OFFSET))(this, a1, a2);
	}

	::Class_1_91E71DDCF754E6A2* Method_1_A9D9425DDA042081(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* a1, ::Enum_3_94EF767DB88BCE69 a2, ::Class_1_43BD383C98B4C0C5_28* a3)
	{
		return ((::Class_1_91E71DDCF754E6A2*(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::Enum_3_94EF767DB88BCE69, ::Class_1_43BD383C98B4C0C5_28*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_A9D9425DDA042081_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B267DDAB46C1880F(::Enum_3_94EF767DB88BCE69 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_B267DDAB46C1880F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A1F098720017518E(::MoleMole::Config::ScreenEffectType a1, ::Enum_3_94EF767DB88BCE69 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_A1F098720017518E_OFFSET))(this, a1, a2);
	}

	::Struct_2_3AAA09564DC7733E Method_1_1574A106FF29D3BE(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_1574A106FF29D3BE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Struct_2_3AAA09564DC7733E Method_1_63EE0B85571BB920(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::Enum_3_94EF767DB88BCE69 a3, ::Class_1_43BD383C98B4C0C5_28* a4)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::Enum_3_94EF767DB88BCE69, ::Class_1_43BD383C98B4C0C5_28*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_63EE0B85571BB920_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FDA99477C848DA96(::MoleMole::Config::ScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_FDA99477C848DA96_OFFSET))(this, a1);
	}

	::System::Void Method_1_C08BEA7113A329F8(::Struct_2_3AAA09564DC7733E a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3AAA09564DC7733E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_C08BEA7113A329F8_OFFSET))(this, a1, a2);
	}
};
