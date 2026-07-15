#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class FoundationAndBallBind; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class Transform; }

#define CLASS_1_123685F65905742D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1873E260)
#define CLASS_1_123685F65905742D_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x1873F000)
#define CLASS_1_123685F65905742D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1873EA80)
#define CLASS_1_123685F65905742D_METHOD_1_1FCD2D53490C980D_OFFSET UNITYSDK_OFFSET(0x1873EB20)
#define CLASS_1_123685F65905742D_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x1873F0B0)
#define CLASS_1_123685F65905742D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1873E1C0)
#define CLASS_1_123685F65905742D_METHOD_1_614288621F812149_OFFSET UNITYSDK_OFFSET(0x1873EAE0)
#define CLASS_1_123685F65905742D_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x1873E150)
#define CLASS_1_123685F65905742D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x1873E970)
#define CLASS_1_123685F65905742D_METHOD_1_A913C7AA4DDC5C98_OFFSET UNITYSDK_OFFSET(0x1873E400)
#define CLASS_1_123685F65905742D_METHOD_1_B4BA74BF4C6ACC46_OFFSET UNITYSDK_OFFSET(0x1873DDB0)
#define CLASS_1_123685F65905742D_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x1873E730)
#define CLASS_1_123685F65905742D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1873EA30)
#define CLASS_1_123685F65905742D_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x1873EBD0)
#define CLASS_1_123685F65905742D__CTOR_OFFSET UNITYSDK_OFFSET(0x1873F140)

inline static constexpr unsigned int Class_1_123685F65905742D_TypeDefinitionIndex = 54913;

class Class_1_123685F65905742D : public ::System::Object
{
public:
	::RPG::GameCore::PropComponent* Field_1_0; // 0x10
	::RPG::GameCore::FoundationAndBallBind* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::RPG::GameCore::PropComponent* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x44
	::System::Single Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x4C
	::System::Single Field_1_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B4BA74BF4C6ACC46(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FoundationAndBallBind* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FoundationAndBallBind*))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_B4BA74BF4C6ACC46_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A913C7AA4DDC5C98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_A913C7AA4DDC5C98_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_614288621F812149_OFFSET))(this);
	}

	::System::Void Method_1_1FCD2D53490C980D(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_1FCD2D53490C980D_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_123685F65905742D_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}
};
