#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_43A15B3BD4B47FBF___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x14797B70)
#define CLASS_2_43A15B3BD4B47FBF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14797B20)
#define CLASS_2_43A15B3BD4B47FBF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14797B60)

inline static constexpr unsigned int Class_2_43A15B3BD4B47FBF___c_TypeDefinitionIndex = 49779;

class Class_2_43A15B3BD4B47FBF___c : public ::System::Object
{
public:
	static ::Class_2_43A15B3BD4B47FBF___c** StaticGet___9()
	{
		return (::Class_2_43A15B3BD4B47FBF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_43A15B3BD4B47FBF___c_TypeDefinitionIndex)->GetStaticField(0x39C20);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__19_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_43A15B3BD4B47FBF___c_TypeDefinitionIndex)->GetStaticField(0x39C28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_43A15B3BD4B47FBF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43A15B3BD4B47FBF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43A15B3BD4B47FBF___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
