#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_659DB91BB3418704;
class ConfigEntityJoystickOrder;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7FB212E2C96187FB_METHOD_1_224E7491882823E0_OFFSET UNITYSDK_OFFSET(0x14A5EA10)
#define CLASS_1_7FB212E2C96187FB_METHOD_1_299DA8FF1D721BED_OFFSET UNITYSDK_OFFSET(0x14A5E770)
#define CLASS_1_7FB212E2C96187FB_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x14A5ED00)
#define CLASS_1_7FB212E2C96187FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A5E600)

inline static constexpr unsigned int Class_1_7FB212E2C96187FB_TypeDefinitionIndex = 62191;

class Class_1_7FB212E2C96187FB : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FB212E2C96187FB_TypeDefinitionIndex)->GetStaticField(0x3B950);
	}
	static ::System::Collections::Generic::Dictionary_2<::ConfigEntityJoystickOrder*, ::System::Int32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::ConfigEntityJoystickOrder*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FB212E2C96187FB_TypeDefinitionIndex)->GetStaticField(0x3B958);
	}
	static ::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FB212E2C96187FB_TypeDefinitionIndex)->GetStaticField(0x3B960);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FB212E2C96187FB_TypeDefinitionIndex)->GetStaticField(0xEA10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FB212E2C96187FB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_299DA8FF1D721BED(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7FB212E2C96187FB_METHOD_1_299DA8FF1D721BED_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>* Method_1_224E7491882823E0(::Class_1_659DB91BB3418704* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>*(*)(::Class_1_659DB91BB3418704*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7FB212E2C96187FB_METHOD_1_224E7491882823E0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7FB212E2C96187FB_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
