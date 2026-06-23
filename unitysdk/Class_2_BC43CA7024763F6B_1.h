#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_27.h"

class Class_1_D4EE696AE596E211;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_BC43CA7024763F6B_1_METHOD_2_46C7F67D77A6156F_OFFSET UNITYSDK_OFFSET(0x19EC43A0)
#define CLASS_2_BC43CA7024763F6B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC5480)

inline static constexpr unsigned int Class_2_BC43CA7024763F6B_1_TypeDefinitionIndex = 46055;

class Class_2_BC43CA7024763F6B_1 : public ::Class_1_43BD383C98B4C0C5_27
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC43CA7024763F6B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_46C7F67D77A6156F(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>*))((::PBYTE)hIl2Cpp + CLASS_2_BC43CA7024763F6B_1_METHOD_2_46C7F67D77A6156F_OFFSET))(this, a1, a2);
	}
};
