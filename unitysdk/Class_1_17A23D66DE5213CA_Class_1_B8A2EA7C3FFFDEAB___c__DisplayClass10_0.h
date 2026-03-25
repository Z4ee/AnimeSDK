#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_17A23D66DE5213CA_CLASS_1_B8A2EA7C3FFFDEAB___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE2610)

inline static constexpr unsigned int Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB___c__DisplayClass10_0_TypeDefinitionIndex = 39864;

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::Action* onAllLoadingfinish; // 0x10
	::System::Int32 totalCount; // 0x18
	::System::Int32 loadedCount; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A23D66DE5213CA_CLASS_1_B8A2EA7C3FFFDEAB___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}
};
