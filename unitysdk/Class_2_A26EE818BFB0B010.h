#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace System { class String; }

#define CLASS_2_A26EE818BFB0B010__CTOR_OFFSET UNITYSDK_OFFSET(0x180F25E0)

inline static constexpr unsigned int Class_2_A26EE818BFB0B010_TypeDefinitionIndex = 40728;

class Class_2_A26EE818BFB0B010 : public ::Sofa::Core::ObservableObject
{
public:
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A26EE818BFB0B010__CTOR_OFFSET))(this, a1);
	}
};
