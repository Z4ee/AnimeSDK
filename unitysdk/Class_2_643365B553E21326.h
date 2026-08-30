#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class LinearProjectileData; }

#define CLASS_2_643365B553E21326_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x15850F80)
#define CLASS_2_643365B553E21326_METHOD_2_5B816D65C691FFF5_OFFSET UNITYSDK_OFFSET(0x15850C10)
#define CLASS_2_643365B553E21326_METHOD_2_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0x15850660)
#define CLASS_2_643365B553E21326_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x15850E90)
#define CLASS_2_643365B553E21326_METHOD_2_86914B28476494AF_OFFSET UNITYSDK_OFFSET(0x15850840)
#define CLASS_2_643365B553E21326_METHOD_2_F9DAB08EC8926B1B_OFFSET UNITYSDK_OFFSET(0x158509E0)
#define CLASS_2_643365B553E21326__CTOR_OFFSET UNITYSDK_OFFSET(0x15850600)

inline static constexpr unsigned int Class_2_643365B553E21326_TypeDefinitionIndex = 54955;

class Class_2_643365B553E21326 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::LinearProjectileData* AGGAJFADMNK; // 0x48
	::System::Single GNBPDGBMEIF; // 0x50

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_643365B553E21326__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_643365B553E21326_METHOD_2_62165C025F5C0B19_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_86914B28476494AF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_643365B553E21326_METHOD_2_86914B28476494AF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F9DAB08EC8926B1B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_643365B553E21326_METHOD_2_F9DAB08EC8926B1B_OFFSET))(this);
	}

	::System::Void Method_2_5B816D65C691FFF5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_643365B553E21326_METHOD_2_5B816D65C691FFF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_643365B553E21326_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_643365B553E21326_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}
};
