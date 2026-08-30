#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }

#define CLASS_1_01DFB1C3DD7B8195_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C033880)
#define CLASS_1_01DFB1C3DD7B8195__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0338D0)

inline static constexpr unsigned int Class_1_01DFB1C3DD7B8195_TypeDefinitionIndex = 36238;

class Class_1_01DFB1C3DD7B8195 : public ::System::Object
{
public:
	::Entitas::IEntity* ANOLHDEJDJA; // 0x10
	::System::Int32 CEGOPEIKDLA; // 0x18
	::System::Int32 DDAICPFIOJF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01DFB1C3DD7B8195__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01DFB1C3DD7B8195_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
