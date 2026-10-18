#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }

#define CLASS_1_BE1D7DF638E8115B__CTOR_OFFSET UNITYSDK_OFFSET(0x12CED280)

inline static constexpr unsigned int Class_1_BE1D7DF638E8115B_TypeDefinitionIndex = 69274;

class Class_1_BE1D7DF638E8115B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::CapsuleCollider*>* HMJOCCAFKKA; // 0x10
	::System::String* LIKKLCIHCHB; // 0x18
	::UnityEngine::CapsuleCollider* CJFNAEHMOBN; // 0x20
	::System::Int32 BAPIGLNCJLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE1D7DF638E8115B__CTOR_OFFSET))(this);
	}
};
