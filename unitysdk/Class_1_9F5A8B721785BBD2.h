#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class BaseConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace MoleMole::Config { class HitEffectConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class TagConfigAnimatorBeHitPriority; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F5A8B721785BBD2_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x162A77F0)
#define CLASS_1_9F5A8B721785BBD2_METHOD_1_7335620F26BD6231_OFFSET UNITYSDK_OFFSET(0x162A7A00)
#define CLASS_1_9F5A8B721785BBD2_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x162A7700)
#define CLASS_1_9F5A8B721785BBD2_METHOD_1_B22B4FDB2488C35A_OFFSET UNITYSDK_OFFSET(0x162A7B00)

inline static constexpr unsigned int Class_1_9F5A8B721785BBD2_TypeDefinitionIndex = 63292;

class Class_1_9F5A8B721785BBD2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::HitEffectConfigAnimatorBeHitPriority*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::HitEffectConfigAnimatorBeHitPriority*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F5A8B721785BBD2_TypeDefinitionIndex)->GetStaticField(0x3D3C0);
	}
	static ::MoleMole::Config::ConfigAnimatorBeHitPriorities** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigAnimatorBeHitPriorities**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F5A8B721785BBD2_TypeDefinitionIndex)->GetStaticField(0x3D3C8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F5A8B721785BBD2_TypeDefinitionIndex)->GetStaticField(0x3D3D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::TagConfigAnimatorBeHitPriority*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::TagConfigAnimatorBeHitPriority*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F5A8B721785BBD2_TypeDefinitionIndex)->GetStaticField(0x3D3D8);
	}
	// static const ::System::Int32 Field_1_4 = 0x0; // 0x0

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_7335620F26BD6231(::MoleMole::Config::AnimatorBeHitTag a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::AnimatorBeHitTag))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_METHOD_1_7335620F26BD6231_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_B22B4FDB2488C35A(::MoleMole::Config::AnimatorHitEffect a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::MoleMole::Config::AnimatorHitEffect, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_METHOD_1_B22B4FDB2488C35A_OFFSET))(a1, a2);
	}
};
