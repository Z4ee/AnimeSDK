#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8300C0E13E94E2DB.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace Foundation::ViewObject { class ITraitSyncEntityCreator; }

#define CLASS_2_AD35D025B4A5BEA6_METHOD_2_0863863209A26FAB_OFFSET UNITYSDK_OFFSET(0x18211AF0)
#define CLASS_2_AD35D025B4A5BEA6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18211E70)
#define CLASS_2_AD35D025B4A5BEA6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18211F00)
#define CLASS_2_AD35D025B4A5BEA6__CTOR_OFFSET UNITYSDK_OFFSET(0x18211EF0)

inline static constexpr unsigned int Class_2_AD35D025B4A5BEA6_TypeDefinitionIndex = 42905;

class Class_2_AD35D025B4A5BEA6 : public ::Class_1_8300C0E13E94E2DB
{
public:
	::Foundation::ViewObject::ITraitSyncEntityCreator* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD35D025B4A5BEA6__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_0863863209A26FAB()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD35D025B4A5BEA6_METHOD_2_0863863209A26FAB_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD35D025B4A5BEA6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD35D025B4A5BEA6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
