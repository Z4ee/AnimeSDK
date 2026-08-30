#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }

#define CLASS_1_78426C782D76CABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1284D9A0)

inline static constexpr unsigned int Class_1_78426C782D76CABD_TypeDefinitionIndex = 69238;

class Class_1_78426C782D76CABD : public ::System::Object
{
public:
	::UnityEngine::CapsuleCollider* CJFNAEHMOBN; // 0x10
	::System::String* LIKKLCIHCHB; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::CapsuleCollider*>* HMJOCCAFKKA; // 0x20
	::System::Int32 BAPIGLNCJLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78426C782D76CABD__CTOR_OFFSET))(this);
	}
};
