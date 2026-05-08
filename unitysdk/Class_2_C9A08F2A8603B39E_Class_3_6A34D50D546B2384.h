#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D6C023318E9B27E7.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384_METHOD_3_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x18373DB0)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384_METHOD_3_E69D91DA0148D8ED_OFFSET UNITYSDK_OFFSET(0x18373DC0)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18373D70)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384__CTOR_OFFSET UNITYSDK_OFFSET(0x18373CD0)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384_TypeDefinitionIndex = 51638;

class Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384 : public ::Class_2_D6C023318E9B27E7
{
public:
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_3_0; // 0xC0
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_3_1; // 0xC8
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_3_2; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_3_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384_METHOD_3_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_3_E69D91DA0148D8ED(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_6A34D50D546B2384*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_6A34D50D546B2384_METHOD_3_E69D91DA0148D8ED_OFFSET))(this, a1, a2);
	}
};
