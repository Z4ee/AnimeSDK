#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }

#define CLASS_1_31D11999B939D43D__CTOR_OFFSET UNITYSDK_OFFSET(0x1647D560)

inline static constexpr unsigned int Class_1_31D11999B939D43D_TypeDefinitionIndex = 76825;

class Class_1_31D11999B939D43D : public ::System::Object
{
public:
	::System::Version* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31D11999B939D43D__CTOR_OFFSET))(this);
	}
};
