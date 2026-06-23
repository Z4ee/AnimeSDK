#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0BE72D3922328EB3__CTOR_OFFSET UNITYSDK_OFFSET(0xF5B9840)

inline static constexpr unsigned int Class_1_0BE72D3922328EB3_TypeDefinitionIndex = 87104;

class Class_1_0BE72D3922328EB3 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BE72D3922328EB3__CTOR_OFFSET))(this);
	}
};
