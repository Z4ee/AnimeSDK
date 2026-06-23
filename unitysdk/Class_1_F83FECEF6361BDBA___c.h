#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F83FECEF6361BDBA___C_METHOD_1_2FF9C3B2F1FB3AF5_1_OFFSET UNITYSDK_OFFSET(0xF97A0B0)
#define CLASS_1_F83FECEF6361BDBA___C_METHOD_1_2FF9C3B2F1FB3AF5_OFFSET UNITYSDK_OFFSET(0xF97A0A0)
#define CLASS_1_F83FECEF6361BDBA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF97A050)
#define CLASS_1_F83FECEF6361BDBA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF97A090)

inline static constexpr unsigned int Class_1_F83FECEF6361BDBA___c_TypeDefinitionIndex = 67705;

class Class_1_F83FECEF6361BDBA___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::Vector2, ::System::Single>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::UnityEngine::Vector2, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F83FECEF6361BDBA___c_TypeDefinitionIndex)->GetStaticField(0x3CE40);
	}
	static ::Class_1_F83FECEF6361BDBA___c** StaticGet___9()
	{
		return (::Class_1_F83FECEF6361BDBA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F83FECEF6361BDBA___c_TypeDefinitionIndex)->GetStaticField(0x3CE48);
	}
	static ::System::Func_2<::UnityEngine::Vector2, ::System::Single>** StaticGet___9__13_1()
	{
		return (::System::Func_2<::UnityEngine::Vector2, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F83FECEF6361BDBA___c_TypeDefinitionIndex)->GetStaticField(0x3CE50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_2FF9C3B2F1FB3AF5(::UnityEngine::Vector2 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA___C_METHOD_1_2FF9C3B2F1FB3AF5_OFFSET))(this, a1);
	}

	::System::Single Method_1_2FF9C3B2F1FB3AF5_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA___C_METHOD_1_2FF9C3B2F1FB3AF5_1_OFFSET))(this, a1);
	}
};
