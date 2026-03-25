#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_582251EF6392A222;
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D19B260269D43396__CTOR_OFFSET UNITYSDK_OFFSET(0x10B44DF0)

inline static constexpr unsigned int Class_1_D19B260269D43396_TypeDefinitionIndex = 58368;

class Class_1_D19B260269D43396 : public ::System::Object
{
public:
	::System::Collections::Generic::ICollection_1<::Class_1_582251EF6392A222*>* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19B260269D43396__CTOR_OFFSET))(this);
	}
};
