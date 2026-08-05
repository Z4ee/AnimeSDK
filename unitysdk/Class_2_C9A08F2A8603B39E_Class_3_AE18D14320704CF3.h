#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D6C023318E9B27E7.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3_METHOD_3_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1489DD60)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3_METHOD_3_A2C5F89750BF61F2_OFFSET UNITYSDK_OFFSET(0x1489DD70)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1489DBE0)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1489DB20)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3_TypeDefinitionIndex = 74885;

class Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3 : public ::Class_2_D6C023318E9B27E7
{
public:
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_3_7; // 0xD0
	::System::Func_1<::System::Boolean>* Field_3_5; // 0xD8
	::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3*>* Field_3_4; // 0xE0
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_3_0; // 0xE8
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_3_6; // 0xF0

	::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_AE18D14320704CF3*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_3_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3_METHOD_3_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_3_A2C5F89750BF61F2(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_AE18D14320704CF3_METHOD_3_A2C5F89750BF61F2_OFFSET))(this, a1);
	}
};
