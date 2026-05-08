#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffAttackPropertType.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_10FEEAE9D3BD65B7_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x12580010)
#define CLASS_1_10FEEAE9D3BD65B7_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x1257FA70)
#define CLASS_1_10FEEAE9D3BD65B7_METHOD_1_B8E4B7E669EBC719_OFFSET UNITYSDK_OFFSET(0x12580100)
#define CLASS_1_10FEEAE9D3BD65B7_METHOD_1_DF2F0F65BDE7252E_1_OFFSET UNITYSDK_OFFSET(0x125803D0)
#define CLASS_1_10FEEAE9D3BD65B7_METHOD_1_DF2F0F65BDE7252E_OFFSET UNITYSDK_OFFSET(0x1257FC30)

inline static constexpr unsigned int Class_1_10FEEAE9D3BD65B7_TypeDefinitionIndex = 59097;

class Class_1_10FEEAE9D3BD65B7 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigEntityUnderlyingAnimEvents**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10FEEAE9D3BD65B7_TypeDefinitionIndex)->GetStaticField(0x2D8B0);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEntityAttackProperty* Method_1_DF2F0F65BDE7252E(::MoleMole::Config::BuffGroupName a1, ::MoleMole::Config::BuffAttackPropertType a2, ::System::Int32 a3)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffAttackPropertType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_METHOD_1_DF2F0F65BDE7252E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigEntityAttackProperty* Method_1_B8E4B7E669EBC719(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_METHOD_1_B8E4B7E669EBC719_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigEntityAttackProperty* Method_1_DF2F0F65BDE7252E_1(::MoleMole::Config::BuffGroupName a1, ::MoleMole::Config::BuffAttackPropertType a2, ::System::Int32 a3)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffAttackPropertType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_METHOD_1_DF2F0F65BDE7252E_1_OFFSET))(a1, a2, a3);
	}
};
