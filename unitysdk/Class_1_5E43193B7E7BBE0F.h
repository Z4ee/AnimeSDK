#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_0FDF67DBC6DA0B2C_OFFSET UNITYSDK_OFFSET(0xE88BAE0)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_2B5EA2FCAA2EB0FD_OFFSET UNITYSDK_OFFSET(0xE88C980)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0xE88BFF0)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_44468AADE1F8CB19_OFFSET UNITYSDK_OFFSET(0xE88D1E0)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_5FE6980FC88769F9_OFFSET UNITYSDK_OFFSET(0xE88CD20)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_6BE9EC5EFBCAE0C1_OFFSET UNITYSDK_OFFSET(0xE88C4A0)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0xE88B9C0)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_7FD9FC5D9F11A306_OFFSET UNITYSDK_OFFSET(0xE88CF30)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_964DDA809B48CE47_OFFSET UNITYSDK_OFFSET(0xE88C6E0)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_9E786708FA7D4041_OFFSET UNITYSDK_OFFSET(0xE88C270)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_A2B14AB917CDA2E9_OFFSET UNITYSDK_OFFSET(0xE88B920)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0xE88D0B0)
#define CLASS_1_5E43193B7E7BBE0F_METHOD_1_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xE88BE50)
#define CLASS_1_5E43193B7E7BBE0F__CCTOR_OFFSET UNITYSDK_OFFSET(0xE88B8B0)

inline static constexpr unsigned int Class_1_5E43193B7E7BBE0F_TypeDefinitionIndex = 78871;

class Class_1_5E43193B7E7BBE0F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigCommonEntityAnimEvents*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigCommonEntityAnimEvents*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E43193B7E7BBE0F_TypeDefinitionIndex)->GetStaticField(0x45480);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E43193B7E7BBE0F_TypeDefinitionIndex)->GetStaticField(0x45488);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E43193B7E7BBE0F_TypeDefinitionIndex)->GetStaticField(0x45490);
	}
	// static const ::System::Char Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_A2B14AB917CDA2E9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_A2B14AB917CDA2E9_OFFSET))(a1);
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D737CD2779D51A4E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_D737CD2779D51A4E_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9E786708FA7D4041(::System::String* a1, ::MoleMole::Config::ConfigCommonEntityAnimEvents*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::ConfigCommonEntityAnimEvents*&))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_9E786708FA7D4041_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_964DDA809B48CE47(::System::String* a1, ::MoleMole::Config::ConfigCommonEntityAnimEvents* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_964DDA809B48CE47_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEntityAnimEvent* Method_1_2B5EA2FCAA2EB0FD(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_2B5EA2FCAA2EB0FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0FDF67DBC6DA0B2C(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_0FDF67DBC6DA0B2C_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEntityAnimEvent* Method_1_7FD9FC5D9F11A306(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_7FD9FC5D9F11A306_OFFSET))(a1);
	}

	static ::System::Void Method_1_6BE9EC5EFBCAE0C1(::System::Boolean a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_6BE9EC5EFBCAE0C1_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::ConfigEntityAnimEvent* Method_1_5FE6980FC88769F9(::MoleMole::SkillCharacterScriptConfig* a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::MoleMole::SkillCharacterScriptConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_5FE6980FC88769F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_C26623CFD2E6EAE3_OFFSET))();
	}

	static ::System::Void Method_1_44468AADE1F8CB19(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySharedAnimEvents*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySharedAnimEvents*>*))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_METHOD_1_44468AADE1F8CB19_OFFSET))(a1);
	}
};
