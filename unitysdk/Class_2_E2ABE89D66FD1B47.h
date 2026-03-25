#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BoomerangProjectileData; }

#define CLASS_2_E2ABE89D66FD1B47_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x8CCB430)
#define CLASS_2_E2ABE89D66FD1B47_METHOD_2_0DC8EA1C874AC4F4_OFFSET UNITYSDK_OFFSET(0x8CCABB0)
#define CLASS_2_E2ABE89D66FD1B47_METHOD_2_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0x8CCAA10)
#define CLASS_2_E2ABE89D66FD1B47_METHOD_2_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x8CCA820)
#define CLASS_2_E2ABE89D66FD1B47_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x8CCB1F0)
#define CLASS_2_E2ABE89D66FD1B47_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x8CCB390)
#define CLASS_2_E2ABE89D66FD1B47__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCA790)

inline static constexpr unsigned int Class_2_E2ABE89D66FD1B47_TypeDefinitionIndex = 43804;

class Class_2_E2ABE89D66FD1B47 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BoomerangProjectileData* Field_2_0; // 0x48
	::UnityEngine::Vector3 Field_2_1; // 0x50

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_E2ABE89D66FD1B47__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2ABE89D66FD1B47_METHOD_2_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::System::Void Method_2_414A270E91E4BF2D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E2ABE89D66FD1B47_METHOD_2_414A270E91E4BF2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DC8EA1C874AC4F4(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E2ABE89D66FD1B47_METHOD_2_0DC8EA1C874AC4F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2ABE89D66FD1B47_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2ABE89D66FD1B47_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2ABE89D66FD1B47_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
