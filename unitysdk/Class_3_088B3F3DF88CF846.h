#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Flip; }

#define CLASS_3_088B3F3DF88CF846_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x125281A0)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x12528200)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x12527F90)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x12527E40)
#define CLASS_3_088B3F3DF88CF846__CTOR_OFFSET UNITYSDK_OFFSET(0x12528180)

inline static constexpr unsigned int Class_3_088B3F3DF88CF846_TypeDefinitionIndex = 63337;

class Class_3_088B3F3DF88CF846 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Flip*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
