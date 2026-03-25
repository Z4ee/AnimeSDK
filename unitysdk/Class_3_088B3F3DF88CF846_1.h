#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Fire; }

#define CLASS_3_088B3F3DF88CF846_1_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8D807C0)
#define CLASS_3_088B3F3DF88CF846_1_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8D80760)
#define CLASS_3_088B3F3DF88CF846_1_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8D80820)
#define CLASS_3_088B3F3DF88CF846_1_METHOD_3_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x8D80170)
#define CLASS_3_088B3F3DF88CF846_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D80130)
#define CLASS_3_088B3F3DF88CF846_1_METHOD_3_F22E917EA16961A8_OFFSET UNITYSDK_OFFSET(0x8D80420)
#define CLASS_3_088B3F3DF88CF846_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8D80740)

inline static constexpr unsigned int Class_3_088B3F3DF88CF846_1_TypeDefinitionIndex = 56098;

class Class_3_088B3F3DF88CF846_1 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Fire*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_1_METHOD_3_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_3_F22E917EA16961A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_1_METHOD_3_F22E917EA16961A8_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_1_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_1_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_1_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
