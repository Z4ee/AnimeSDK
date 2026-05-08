#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_52645FD19F442171___C_METHOD_1_FCCF97AE03CD6F8F_OFFSET UNITYSDK_OFFSET(0x162ADEE0)
#define CLASS_2_52645FD19F442171___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162ADE90)
#define CLASS_2_52645FD19F442171___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162ADED0)

inline static constexpr unsigned int Class_2_52645FD19F442171___c_TypeDefinitionIndex = 54804;

class Class_2_52645FD19F442171___c : public ::System::Object
{
public:
	static ::Class_2_52645FD19F442171___c** StaticGet___9()
	{
		return (::Class_2_52645FD19F442171___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_52645FD19F442171___c_TypeDefinitionIndex)->GetStaticField(0x46270);
	}
	static ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_52645FD19F442171___c_TypeDefinitionIndex)->GetStaticField(0x46278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_52645FD19F442171___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52645FD19F442171___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FCCF97AE03CD6F8F(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_52645FD19F442171___C_METHOD_1_FCCF97AE03CD6F8F_OFFSET))(this, a1);
	}
};
