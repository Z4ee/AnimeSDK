#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F7C5537073E374C_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x135D85E0)
#define CLASS_1_8F7C5537073E374C_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x135D84F0)
#define CLASS_1_8F7C5537073E374C_METHOD_1_84494FA40CA18E8A_OFFSET UNITYSDK_OFFSET(0x135D8860)
#define CLASS_1_8F7C5537073E374C_METHOD_1_CA3B7614D09E08CF_OFFSET UNITYSDK_OFFSET(0x135D8960)
#define CLASS_1_8F7C5537073E374C__CTOR_OFFSET UNITYSDK_OFFSET(0x135D84E0)

inline static constexpr unsigned int Class_1_8F7C5537073E374C_TypeDefinitionIndex = 49738;

class Class_1_8F7C5537073E374C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAbilityTarget*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAbilityTarget*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F7C5537073E374C_TypeDefinitionIndex)->GetStaticField(0x44080);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigAbilityTarget* Method_1_84494FA40CA18E8A(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigAbilityTarget*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_METHOD_1_84494FA40CA18E8A_OFFSET))(a1);
	}

	static ::System::Void Method_1_CA3B7614D09E08CF(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityTargetData*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityTargetData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_METHOD_1_CA3B7614D09E08CF_OFFSET))(a1);
	}
};
