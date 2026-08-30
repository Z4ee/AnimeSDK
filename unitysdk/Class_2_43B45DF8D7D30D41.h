#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6338FD15AFE99D89;
namespace RPG::Client { class MonoTravelShipChannel; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_43B45DF8D7D30D41_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1521C510)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1521B5F0)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_50EF5F572848F602_OFFSET UNITYSDK_OFFSET(0x1521C2F0)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x1521C570)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_7E0A56D29CD75405_OFFSET UNITYSDK_OFFSET(0x1521B710)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_874D0D1FC475AE6C_OFFSET UNITYSDK_OFFSET(0x1521C580)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1521B680)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_C933D885D3BB784D_OFFSET UNITYSDK_OFFSET(0x1521AF80)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_D0A7851D945653F7_OFFSET UNITYSDK_OFFSET(0x1521B4A0)
#define CLASS_2_43B45DF8D7D30D41_METHOD_2_F17869742D72FE26_OFFSET UNITYSDK_OFFSET(0x1521BB90)
#define CLASS_2_43B45DF8D7D30D41__CTOR_OFFSET UNITYSDK_OFFSET(0x1521AF00)

inline static constexpr unsigned int Class_2_43B45DF8D7D30D41_TypeDefinitionIndex = 68763;

class Class_2_43B45DF8D7D30D41 : public ::Class_1_6854A6346A56B2FF
{
public:
	::RPG::Client::MonoTravelShipChannel* JGFOEDIHPPN; // 0x48
	::System::Single HBDJCFFDGDD; // 0x50
	::UnityEngine::Vector3 FANDINJMNOA; // 0x54

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C933D885D3BB784D(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_C933D885D3BB784D_OFFSET))(this, a1);
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

	::System::Boolean Method_2_F17869742D72FE26(::RPG::Client::MonoTravelShipChannel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*))((::PBYTE)hIl2Cpp + CLASS_2_43B45DF8D7D30D41_METHOD_2_F17869742D72FE26_OFFSET))(this, a1);
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
};
