#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_WaitAnimState; }

#define CLASS_3_B8B33FA44351552F_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1191AC20)
#define CLASS_3_B8B33FA44351552F_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1191AF30)
#define CLASS_3_B8B33FA44351552F_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1191B010)
#define CLASS_3_B8B33FA44351552F_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1191B070)
#define CLASS_3_B8B33FA44351552F_METHOD_3_B128C90853E23A16_OFFSET UNITYSDK_OFFSET(0x1191AD70)
#define CLASS_3_B8B33FA44351552F__CTOR_OFFSET UNITYSDK_OFFSET(0x1191AFF0)

inline static constexpr unsigned int Class_3_B8B33FA44351552F_TypeDefinitionIndex = 56091;

class Class_3_B8B33FA44351552F : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_WaitAnimState*>
{
public:
	::System::Boolean Field_3_1; // 0x28
	::System::Int32 Field_3_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8B33FA44351552F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8B33FA44351552F_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B8B33FA44351552F_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B128C90853E23A16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8B33FA44351552F_METHOD_3_B128C90853E23A16_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8B33FA44351552F_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B8B33FA44351552F_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
