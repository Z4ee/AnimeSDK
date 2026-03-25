#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class ParabolaProjectileData; }

#define CLASS_2_05A93A9808BBB02F_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x8D9AE40)
#define CLASS_2_05A93A9808BBB02F_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8D9ACE0)
#define CLASS_2_05A93A9808BBB02F_METHOD_2_474CE5D7414B7EA9_OFFSET UNITYSDK_OFFSET(0x8D9A940)
#define CLASS_2_05A93A9808BBB02F_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x8D9AB00)
#define CLASS_2_05A93A9808BBB02F_METHOD_2_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x8D9A310)
#define CLASS_2_05A93A9808BBB02F_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x8D9AE10)
#define CLASS_2_05A93A9808BBB02F_METHOD_2_FE1A1A30B3CE9C46_OFFSET UNITYSDK_OFFSET(0x8D9ABF0)
#define CLASS_2_05A93A9808BBB02F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D9A290)

inline static constexpr unsigned int Class_2_05A93A9808BBB02F_TypeDefinitionIndex = 43811;

class Class_2_05A93A9808BBB02F : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::ParabolaProjectileData* Field_2_0; // 0x48
	::UnityEngine::Vector3 Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_2; // 0x5C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F_METHOD_2_4F4018519B20BBDD_OFFSET))(this);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE1A1A30B3CE9C46(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F_METHOD_2_FE1A1A30B3CE9C46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_474CE5D7414B7EA9(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F_METHOD_2_474CE5D7414B7EA9_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A93A9808BBB02F_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
