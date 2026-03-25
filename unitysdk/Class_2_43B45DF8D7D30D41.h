#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C187E3BA406EEF9F;
namespace RPG::Client { class MonoTravelShipChannel; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_43B45DF8D7D30D41_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x87E5D30)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_3CFECBA040929432_OFFSET UNITYSDK_OFFSET(0x87E4720)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x87E4E00)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_50EF5F572848F602_OFFSET UNITYSDK_OFFSET(0x87E5B10)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x87E5D90)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_6FCE38E634DA050F_OFFSET UNITYSDK_OFFSET(0x87E53C0)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_72F4966F7A4AB8A7_OFFSET UNITYSDK_OFFSET(0x87E5F40)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x87E5ED0)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_7E0A56D29CD75405_OFFSET UNITYSDK_OFFSET(0x87E4F20)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_874D0D1FC475AE6C_OFFSET UNITYSDK_OFFSET(0x87E5DA0)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_972F9F2CC17A4649_1_OFFSET UNITYSDK_OFFSET(0x87E5E50)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_972F9F2CC17A4649_OFFSET UNITYSDK_OFFSET(0x87E5DB0)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x87E4E90)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_D0A7851D945653F7_OFFSET UNITYSDK_OFFSET(0x87E4CB0)
#define CLASS_2_43B45DF8D7D30D41__CTOR_OFFSET UNITYSDK_OFFSET(0x87E46A0)

inline static constexpr unsigned int Class_2_43B45DF8D7D30D41_TypeDefinitionIndex = 56195;

class Class_2_43B45DF8D7D30D41 : public ::Class_1_6854A6346A56B2FF
{
public:
	::RPG::Client::MonoTravelShipChannel* Field_2_0; // 0x48
	::UnityEngine::Vector3 Field_2_1; // 0x50
	::System::Single Field_2_2; // 0x5C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_C187E3BA406EEF9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C187E3BA406EEF9F*))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CFECBA040929432(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_3CFECBA040929432_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0A7851D945653F7(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_D0A7851D945653F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E0A56D29CD75405(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_7E0A56D29CD75405_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6FCE38E634DA050F(::RPG::Client::MonoTravelShipChannel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_6FCE38E634DA050F_OFFSET))(this, a1);
	}

	::System::Void Method_2_50EF5F572848F602(::RPG::Client::MonoTravelShipChannel* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_50EF5F572848F602_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::RPG::Client::ETravelShipState Method_2_6574D03FCADFBE2D()
	{
		return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_6574D03FCADFBE2D_OFFSET))(this);
	}

	::RPG::Client::MonoTravelShipChannel* Method_2_874D0D1FC475AE6C()
	{
		return ((::RPG::Client::MonoTravelShipChannel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_874D0D1FC475AE6C_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_972F9F2CC17A4649(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_972F9F2CC17A4649_OFFSET))(this, P0);
	}

	::System::Void Method_2_972F9F2CC17A4649_1(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_972F9F2CC17A4649_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_72F4966F7A4AB8A7(::RPG::GameCore::CharacterInputData* P0, ::System::Single P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_72F4966F7A4AB8A7_OFFSET))(this, P0, P1);
	}
};
