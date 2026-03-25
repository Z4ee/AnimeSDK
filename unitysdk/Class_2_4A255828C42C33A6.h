#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class HalfBoomerangProjectileData; }

#define CLASS_2_4A255828C42C33A6_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB28DC60)
#define CLASS_2_4A255828C42C33A6_METHOD_2_0DC8EA1C874AC4F4_OFFSET UNITYSDK_OFFSET(0xB28D610)
#define CLASS_2_4A255828C42C33A6_METHOD_2_808A56A256840289_OFFSET UNITYSDK_OFFSET(0xB28D4C0)
#define CLASS_2_4A255828C42C33A6_METHOD_2_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xB28D2D0)
#define CLASS_2_4A255828C42C33A6_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xB28DA20)
#define CLASS_2_4A255828C42C33A6_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xB28DBC0)
#define CLASS_2_4A255828C42C33A6__CTOR_OFFSET UNITYSDK_OFFSET(0xB28D240)

inline static constexpr unsigned int Class_2_4A255828C42C33A6_TypeDefinitionIndex = 43807;

class Class_2_4A255828C42C33A6 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::HalfBoomerangProjectileData* Field_2_0; // 0x48
	::UnityEngine::Vector3 Field_2_1; // 0x50

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_4A255828C42C33A6__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A255828C42C33A6_METHOD_2_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::System::Void Method_2_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A255828C42C33A6_METHOD_2_808A56A256840289_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DC8EA1C874AC4F4(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A255828C42C33A6_METHOD_2_0DC8EA1C874AC4F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A255828C42C33A6_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A255828C42C33A6_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A255828C42C33A6_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
