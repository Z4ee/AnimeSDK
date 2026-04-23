#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_ScatterFire; }

#define CLASS_3_9868F2E5CF411D32_METHOD_3_50896BDA13FD77D3_OFFSET UNITYSDK_OFFSET(0x9721B10)
#define CLASS_3_9868F2E5CF411D32_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9721ED0)
#define CLASS_3_9868F2E5CF411D32_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9721E70)
#define CLASS_3_9868F2E5CF411D32_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x9721F30)
#define CLASS_3_9868F2E5CF411D32_METHOD_3_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x9721840)
#define CLASS_3_9868F2E5CF411D32_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9721800)
#define CLASS_3_9868F2E5CF411D32__CTOR_OFFSET UNITYSDK_OFFSET(0x9721E50)

inline static constexpr unsigned int Class_3_9868F2E5CF411D32_TypeDefinitionIndex = 63342;

class Class_3_9868F2E5CF411D32 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_ScatterFire*>
{
public:
	::System::Single Field_3_2; // 0x28
	::System::Int32 Field_3_0; // 0x2C
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_3_50896BDA13FD77D3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_50896BDA13FD77D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
