#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_D2D5B9F46E93ECBE___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x12A0BBE0)
#define CLASS_2_D2D5B9F46E93ECBE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A0BB90)
#define CLASS_2_D2D5B9F46E93ECBE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0BBD0)

inline static constexpr unsigned int Class_2_D2D5B9F46E93ECBE___c_TypeDefinitionIndex = 59398;

class Class_2_D2D5B9F46E93ECBE___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_19()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2D5B9F46E93ECBE___c_TypeDefinitionIndex)->GetStaticField(0x39790);
	}
	static ::Class_2_D2D5B9F46E93ECBE___c** StaticGet___9()
	{
		return (::Class_2_D2D5B9F46E93ECBE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2D5B9F46E93ECBE___c_TypeDefinitionIndex)->GetStaticField(0x39798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D2D5B9F46E93ECBE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D5B9F46E93ECBE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D5B9F46E93ECBE___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
