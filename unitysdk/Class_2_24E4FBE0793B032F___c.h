#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_24E4FBE0793B032F___C_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x12F0F2F0)
#define CLASS_2_24E4FBE0793B032F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F0F2A0)
#define CLASS_2_24E4FBE0793B032F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F0F2E0)

inline static constexpr unsigned int Class_2_24E4FBE0793B032F___c_TypeDefinitionIndex = 47274;

class Class_2_24E4FBE0793B032F___c : public ::System::Object
{
public:
	static ::Class_2_24E4FBE0793B032F___c** StaticGet___9()
	{
		return (::Class_2_24E4FBE0793B032F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_24E4FBE0793B032F___c_TypeDefinitionIndex)->GetStaticField(0x3B6B0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_24E4FBE0793B032F___c_TypeDefinitionIndex)->GetStaticField(0x3B6B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_24E4FBE0793B032F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E4FBE0793B032F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E4FBE0793B032F___C_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}
};
