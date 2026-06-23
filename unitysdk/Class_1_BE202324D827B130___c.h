#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define CLASS_1_BE202324D827B130___C_METHOD_1_8158B2D0A847ADEF_OFFSET UNITYSDK_OFFSET(0x155BCC20)
#define CLASS_1_BE202324D827B130___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155BCBD0)
#define CLASS_1_BE202324D827B130___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155BCC10)

inline static constexpr unsigned int Class_1_BE202324D827B130___c_TypeDefinitionIndex = 57548;

class Class_1_BE202324D827B130___c : public ::System::Object
{
public:
	static ::Class_1_BE202324D827B130___c** StaticGet___9()
	{
		return (::Class_1_BE202324D827B130___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE202324D827B130___c_TypeDefinitionIndex)->GetStaticField(0x3DD30);
	}
	static ::System::Func_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE202324D827B130___c_TypeDefinitionIndex)->GetStaticField(0x3DD38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE202324D827B130___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE202324D827B130___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8158B2D0A847ADEF(::UnityEngine::Material* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_BE202324D827B130___C_METHOD_1_8158B2D0A847ADEF_OFFSET))(this, a1);
	}
};
