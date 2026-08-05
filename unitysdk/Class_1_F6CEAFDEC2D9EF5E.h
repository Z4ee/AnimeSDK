#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigUIWeaponGacha; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x17E9CCA0)
#define CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x17E9CEC0)
#define CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_72320CDEF0EB04D5_1_OFFSET UNITYSDK_OFFSET(0x17E9D2F0)
#define CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_72320CDEF0EB04D5_OFFSET UNITYSDK_OFFSET(0x17E9D130)
#define CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_DCC6722BF69701B9_OFFSET UNITYSDK_OFFSET(0x17E9CFB0)
#define CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_F8B04AFD575F8F9F_OFFSET UNITYSDK_OFFSET(0x17E9CC50)
#define CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_F938D1DC429043F0_OFFSET UNITYSDK_OFFSET(0x17E9D4A0)
#define CLASS_1_F6CEAFDEC2D9EF5E__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9CC40)

inline static constexpr unsigned int Class_1_F6CEAFDEC2D9EF5E_TypeDefinitionIndex = 51383;

class Class_1_F6CEAFDEC2D9EF5E : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIWeaponGacha** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIWeaponGacha**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6CEAFDEC2D9EF5E_TypeDefinitionIndex)->GetStaticField(0x3ED50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigUIWeaponGacha* Method_1_F8B04AFD575F8F9F()
	{
		return ((::MoleMole::Config::ConfigUIWeaponGacha*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_F8B04AFD575F8F9F_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* Method_1_DCC6722BF69701B9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_DCC6722BF69701B9_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_72320CDEF0EB04D5()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_72320CDEF0EB04D5_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_72320CDEF0EB04D5_1()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_72320CDEF0EB04D5_1_OFFSET))();
	}

	static ::System::Boolean Method_1_F938D1DC429043F0(::System::Int32 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_METHOD_1_F938D1DC429043F0_OFFSET))(a1, a2);
	}
};
