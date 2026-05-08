#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_94DDD6F5500DC080_METHOD_1_278803D3BFDFF41B_1_OFFSET UNITYSDK_OFFSET(0x144148F0)
#define CLASS_1_94DDD6F5500DC080_METHOD_1_278803D3BFDFF41B_2_OFFSET UNITYSDK_OFFSET(0x14414980)
#define CLASS_1_94DDD6F5500DC080_METHOD_1_278803D3BFDFF41B_OFFSET UNITYSDK_OFFSET(0x144148A0)
#define CLASS_1_94DDD6F5500DC080_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14414940)
#define CLASS_1_94DDD6F5500DC080_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x14414A20)
#define CLASS_1_94DDD6F5500DC080_METHOD_1_B5974F5D27B0554F_OFFSET UNITYSDK_OFFSET(0x144149D0)
#define CLASS_1_94DDD6F5500DC080__CTOR_OFFSET UNITYSDK_OFFSET(0x14414890)

inline static constexpr unsigned int Class_1_94DDD6F5500DC080_TypeDefinitionIndex = 59652;

class Class_1_94DDD6F5500DC080 : public ::System::Object
{
public:
	static ::Class_1_94DDD6F5500DC080** StaticGet_Field_1_0()
	{
		return (::Class_1_94DDD6F5500DC080**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94DDD6F5500DC080_TypeDefinitionIndex)->GetStaticField(0x44190);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94DDD6F5500DC080__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_278803D3BFDFF41B(::System::String* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_94DDD6F5500DC080_METHOD_1_278803D3BFDFF41B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_278803D3BFDFF41B_1(::System::String* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_94DDD6F5500DC080_METHOD_1_278803D3BFDFF41B_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94DDD6F5500DC080_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_278803D3BFDFF41B_2(::System::String* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_94DDD6F5500DC080_METHOD_1_278803D3BFDFF41B_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B5974F5D27B0554F(::System::Exception* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_94DDD6F5500DC080_METHOD_1_B5974F5D27B0554F_OFFSET))(a1, a2);
	}

	static ::Class_1_94DDD6F5500DC080* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_94DDD6F5500DC080*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94DDD6F5500DC080_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}
};
