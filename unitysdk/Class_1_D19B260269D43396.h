#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_80AF8BF5A186D7B9;
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D19B260269D43396__CTOR_OFFSET UNITYSDK_OFFSET(0x15913EC0)

inline static constexpr unsigned int Class_1_D19B260269D43396_TypeDefinitionIndex = 71200;

class Class_1_D19B260269D43396 : public ::System::Object
{
public:
	::UnityEngine::Transform* EMMHBDOOBMK; // 0x10
	::System::Collections::Generic::ICollection_1<::Class_1_80AF8BF5A186D7B9*>* GEJAHMEBEGO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19B260269D43396__CTOR_OFFSET))(this);
	}
};
