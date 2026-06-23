#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DEB66ADD8E10ACA9_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x18EABF40)
#define CLASS_1_DEB66ADD8E10ACA9_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x18EABE50)
#define CLASS_1_DEB66ADD8E10ACA9_METHOD_1_9BD67FCABA7E1586_OFFSET UNITYSDK_OFFSET(0x18EAC160)
#define CLASS_1_DEB66ADD8E10ACA9_METHOD_1_C7892575E541D38A_OFFSET UNITYSDK_OFFSET(0x18EAC1B0)
#define CLASS_1_DEB66ADD8E10ACA9__CTOR_OFFSET UNITYSDK_OFFSET(0x18EABE40)

inline static constexpr unsigned int Class_1_DEB66ADD8E10ACA9_TypeDefinitionIndex = 42573;

class Class_1_DEB66ADD8E10ACA9 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIAvatar** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIAvatar**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEB66ADD8E10ACA9_TypeDefinitionIndex)->GetStaticField(0x41900);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigUIAvatar* Method_1_9BD67FCABA7E1586()
	{
		return ((::MoleMole::Config::ConfigUIAvatar*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_METHOD_1_9BD67FCABA7E1586_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_C7892575E541D38A(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Color(*)(::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_METHOD_1_C7892575E541D38A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
