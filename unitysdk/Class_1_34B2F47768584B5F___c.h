#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_34B2F47768584B5F___C__ADDNOTIFY_B__7_0_OFFSET UNITYSDK_OFFSET(0x128BEC40)
#define CLASS_1_34B2F47768584B5F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128BEBF0)
#define CLASS_1_34B2F47768584B5F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x128BEC30)

inline static constexpr unsigned int Class_1_34B2F47768584B5F___c_TypeDefinitionIndex = 56307;

class Class_1_34B2F47768584B5F___c : public ::System::Object
{
public:
	static ::System::Action_2<::RPG::Client::NotifyType, ::System::Object*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::RPG::Client::NotifyType, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34B2F47768584B5F___c_TypeDefinitionIndex)->GetStaticField(0x21E60);
	}
	static ::Class_1_34B2F47768584B5F___c** StaticGet___9()
	{
		return (::Class_1_34B2F47768584B5F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34B2F47768584B5F___c_TypeDefinitionIndex)->GetStaticField(0x21E68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F___C__CTOR_OFFSET))(this);
	}

	::System::Void _AddNotify_b__7_0(::RPG::Client::NotifyType type, ::System::Object* arg)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F___C__ADDNOTIFY_B__7_0_OFFSET))(this, type, arg);
	}
};
