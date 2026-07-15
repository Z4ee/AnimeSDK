#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define CLASS_3_6A3BE16535135C85_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1BD4C680)
#define CLASS_3_6A3BE16535135C85__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD4C610)
#define CLASS_3_6A3BE16535135C85__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4C5A0)

inline static constexpr unsigned int Class_3_6A3BE16535135C85_TypeDefinitionIndex = 24127;

class Class_3_6A3BE16535135C85 : public ::Sirenix::OdinInspector::PropertyGroupAttribute
{
public:
	::System::String* Field_3_0; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6A3BE16535135C85__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6A3BE16535135C85__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + CLASS_3_6A3BE16535135C85_COMBINEVALUESWITH_OFFSET))(this, a1);
	}
};
