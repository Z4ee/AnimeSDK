#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C67E04B50EC007FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E766910)

inline static constexpr unsigned int Class_1_C67E04B50EC007FC_TypeDefinitionIndex = 42448;

class Class_1_C67E04B50EC007FC : public ::System::Object
{
public:
	static ::System::Action_1<::R3::Result>** StaticGet_JPKKNEJFEBJ()
	{
		return (::System::Action_1<::R3::Result>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C67E04B50EC007FC_TypeDefinitionIndex)->GetStaticField(0x60480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C67E04B50EC007FC__CCTOR_OFFSET))();
	}
};
