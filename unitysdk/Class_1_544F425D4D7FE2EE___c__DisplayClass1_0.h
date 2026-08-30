#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyBuffGridItemData; }

#define CLASS_1_544F425D4D7FE2EE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19862960)
#define CLASS_1_544F425D4D7FE2EE___C__DISPLAYCLASS1_0__GETATTACHMENTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x19863520)

inline static constexpr unsigned int Class_1_544F425D4D7FE2EE___c__DisplayClass1_0_TypeDefinitionIndex = 62435;

class Class_1_544F425D4D7FE2EE___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::UInt32 x; // 0x10
	::System::UInt32 y; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAttachmentData_b__0(::RPG::GameCore::AlleyBuffGridItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AlleyBuffGridItemData*))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE___C__DISPLAYCLASS1_0__GETATTACHMENTDATA_B__0_OFFSET))(this, a1);
	}
};
