#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }

#define CLASS_1_01DFB1C3DD7B8195_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1898B110)
#define CLASS_1_01DFB1C3DD7B8195__CTOR_OFFSET UNITYSDK_OFFSET(0x1898B160)

inline static constexpr unsigned int Class_1_01DFB1C3DD7B8195_TypeDefinitionIndex = 34709;

class Class_1_01DFB1C3DD7B8195 : public ::System::Object
{
public:
	::Entitas::IEntity* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01DFB1C3DD7B8195__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01DFB1C3DD7B8195_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
