#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_9333BACDC00CE767___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17E8C3E0)
#define CLASS_2_9333BACDC00CE767___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E8C390)
#define CLASS_2_9333BACDC00CE767___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8C3D0)

inline static constexpr unsigned int Class_2_9333BACDC00CE767___c_TypeDefinitionIndex = 41029;

class Class_2_9333BACDC00CE767___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__258_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9333BACDC00CE767___c_TypeDefinitionIndex)->GetStaticField(0x3ECD0);
	}
	static ::Class_2_9333BACDC00CE767___c** StaticGet___9()
	{
		return (::Class_2_9333BACDC00CE767___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9333BACDC00CE767___c_TypeDefinitionIndex)->GetStaticField(0x3ECD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9333BACDC00CE767___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9333BACDC00CE767___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9333BACDC00CE767___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
