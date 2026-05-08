#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_94EF767DB88BCE69.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/Struct_2_3AAA09564DC7733E.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_87;
class Class_1_91E71DDCF754E6A2;
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_1_B4CF74DE247D796F_METHOD_1_067C1326F0892759_OFFSET UNITYSDK_OFFSET(0x11F309C0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_0A2C7117DA59C1CD_OFFSET UNITYSDK_OFFSET(0x11F317D0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_1574A106FF29D3BE_OFFSET UNITYSDK_OFFSET(0x11F31A70)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_1A25D14E9139ACB0_OFFSET UNITYSDK_OFFSET(0x11F2F980)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_48021046C8547C21_OFFSET UNITYSDK_OFFSET(0x11F307A0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_490CF9B24F02BA36_OFFSET UNITYSDK_OFFSET(0x11F2FC50)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_63EE0B85571BB920_OFFSET UNITYSDK_OFFSET(0x11F2FA50)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_72522B04A308EC6C_OFFSET UNITYSDK_OFFSET(0x11F30CA0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_7CACD99999C9F98F_OFFSET UNITYSDK_OFFSET(0x11F31CD0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_801231E37F2C7F58_OFFSET UNITYSDK_OFFSET(0x11F30060)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_8349E000AF074CBD_OFFSET UNITYSDK_OFFSET(0x11F31560)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_8C19E224D01386FB_OFFSET UNITYSDK_OFFSET(0x11F2F630)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_A1F098720017518E_OFFSET UNITYSDK_OFFSET(0x11F31400)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_A4D101D691E0188A_OFFSET UNITYSDK_OFFSET(0x11F31F70)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_B267DDAB46C1880F_OFFSET UNITYSDK_OFFSET(0x11F31190)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_BF382E56624385D3_OFFSET UNITYSDK_OFFSET(0x11F2FDF0)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11F31C90)
#define CLASS_1_B4CF74DE247D796F_METHOD_1_FDA99477C848DA96_OFFSET UNITYSDK_OFFSET(0x11F2F780)
#define CLASS_1_B4CF74DE247D796F__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2EC30)

inline static constexpr unsigned int Class_1_B4CF74DE247D796F_TypeDefinitionIndex = 54523;

class Class_1_B4CF74DE247D796F : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_Field_1_7()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4CF74DE247D796F_TypeDefinitionIndex)->GetStaticField(0x10150);
	}
	::MoleMole::Config::ConfigChessboardFilter* Field_1_5; // 0x10
	::UnityEngine::Rendering::Volume* Field_1_1; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ScreenEffectType>* Field_1_2; // 0x28
	::UnityEngine::Rendering::Volume* Field_1_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ScreenEffectType, ::System::Collections::Generic::List_1<::Struct_2_3AAA09564DC7733E>*>* Field_1_3; // 0x38
	::MoleMole::Config::ConfigHollowChessboard* Field_1_6; // 0x40

	::System::Void _ctor(::UnityEngine::Rendering::Volume* a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C19E224D01386FB(::Class_1_91E71DDCF754E6A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91E71DDCF754E6A2*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_8C19E224D01386FB_OFFSET))(this, a1);
	}

	::Struct_2_3AAA09564DC7733E Method_1_1A25D14E9139ACB0(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::Enum_3_94EF767DB88BCE69 a3)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_1A25D14E9139ACB0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF382E56624385D3(::System::String* a1, ::Enum_3_94EF767DB88BCE69 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_94EF767DB88BCE69, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_BF382E56624385D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_48021046C8547C21(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_48021046C8547C21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_490CF9B24F02BA36(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_490CF9B24F02BA36_OFFSET))(this, a1);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_72522B04A308EC6C(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_72522B04A308EC6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B267DDAB46C1880F(::Enum_3_94EF767DB88BCE69 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_B267DDAB46C1880F_OFFSET))(this, a1);
	}

	::System::Void Method_1_067C1326F0892759(::Struct_2_3AAA09564DC7733E a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3AAA09564DC7733E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_067C1326F0892759_OFFSET))(this, a1, a2);
	}

	::Struct_2_3AAA09564DC7733E Method_1_1574A106FF29D3BE(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_1574A106FF29D3BE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_0A2C7117DA59C1CD(::Struct_2_3AAA09564DC7733E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3AAA09564DC7733E))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_0A2C7117DA59C1CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CACD99999C9F98F(::System::String* a1, ::Enum_3_94EF767DB88BCE69 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_7CACD99999C9F98F_OFFSET))(this, a1, a2);
	}

	::Class_1_91E71DDCF754E6A2* Method_1_801231E37F2C7F58(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* a1, ::Enum_3_94EF767DB88BCE69 a2, ::Class_1_43BD383C98B4C0C5_87* a3)
	{
		return ((::Class_1_91E71DDCF754E6A2*(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::Enum_3_94EF767DB88BCE69, ::Class_1_43BD383C98B4C0C5_87*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_801231E37F2C7F58_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A1F098720017518E(::MoleMole::Config::ScreenEffectType a1, ::Enum_3_94EF767DB88BCE69 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::Enum_3_94EF767DB88BCE69))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_A1F098720017518E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8349E000AF074CBD(::MoleMole::Config::ScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_8349E000AF074CBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDA99477C848DA96(::MoleMole::Config::ScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_FDA99477C848DA96_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4D101D691E0188A(::Class_1_91E71DDCF754E6A2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91E71DDCF754E6A2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_A4D101D691E0188A_OFFSET))(this, a1, a2);
	}

	::Struct_2_3AAA09564DC7733E Method_1_63EE0B85571BB920(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::Enum_3_94EF767DB88BCE69 a3, ::Class_1_43BD383C98B4C0C5_87* a4)
	{
		return ((::Struct_2_3AAA09564DC7733E(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::Enum_3_94EF767DB88BCE69, ::Class_1_43BD383C98B4C0C5_87*))((::PBYTE)hIl2Cpp + CLASS_1_B4CF74DE247D796F_METHOD_1_63EE0B85571BB920_OFFSET))(this, a1, a2, a3, a4);
	}
};
