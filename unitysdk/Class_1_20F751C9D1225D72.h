#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_20F751C9D1225D72__CTOR_OFFSET UNITYSDK_OFFSET(0x1287BB00)

inline static constexpr unsigned int Class_1_20F751C9D1225D72_TypeDefinitionIndex = 82693;

class Class_1_20F751C9D1225D72 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::UnityEngine::Events::UnityAction* Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20F751C9D1225D72__CTOR_OFFSET))(this);
	}
};
