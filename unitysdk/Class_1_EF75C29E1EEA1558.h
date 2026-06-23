#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Shader; }

#define CLASS_1_EF75C29E1EEA1558_METHOD_1_04461A73DF446C03_OFFSET UNITYSDK_OFFSET(0x19516190)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x195166B0)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_2930B0423DA28A82_OFFSET UNITYSDK_OFFSET(0x19516570)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_6E4751160880EC59_OFFSET UNITYSDK_OFFSET(0x19516180)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x195163B0)
#define CLASS_1_EF75C29E1EEA1558_METHOD_1_95013F6B6EBED372_OFFSET UNITYSDK_OFFSET(0x19516580)

inline static constexpr unsigned int Class_1_EF75C29E1EEA1558_TypeDefinitionIndex = 39812;

class Class_1_EF75C29E1EEA1558 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMaterialPropertySettings** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMaterialPropertySettings**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF75C29E1EEA1558_TypeDefinitionIndex)->GetStaticField(0x45420);
	}

	static ::MoleMole::Config::ConfigMaterialPropertySettings* Method_1_6E4751160880EC59()
	{
		return ((::MoleMole::Config::ConfigMaterialPropertySettings*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_6E4751160880EC59_OFFSET))();
	}

	static ::System::Boolean Method_1_04461A73DF446C03(::MoleMole::Config::MaterialPropertyType a1, ::UnityEngine::Shader*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Shader*&))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_04461A73DF446C03_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2930B0423DA28A82(::MoleMole::Config::ConfigMaterialPropertySettings* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMaterialPropertySettings*))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_2930B0423DA28A82_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_95013F6B6EBED372(::MoleMole::Config::MaterialPropertyType a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_95013F6B6EBED372_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF75C29E1EEA1558_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}
};
