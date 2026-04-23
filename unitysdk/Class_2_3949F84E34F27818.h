#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class RandomTraceProjectileData; }

#define CLASS_2_3949F84E34F27818_METHOD_2_5F59867914726945_OFFSET UNITYSDK_OFFSET(0xD38AFD0)
#define CLASS_2_3949F84E34F27818_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xD38B370)
#define CLASS_2_3949F84E34F27818_METHOD_2_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0xD38BA60)
#define CLASS_2_3949F84E34F27818_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0xD38BA30)
#define CLASS_2_3949F84E34F27818_METHOD_2_857611A9CD5368DE_OFFSET UNITYSDK_OFFSET(0xD38ADA0)
#define CLASS_2_3949F84E34F27818_METHOD_2_97FAD710C85F79F5_OFFSET UNITYSDK_OFFSET(0xD38B610)
#define CLASS_2_3949F84E34F27818_METHOD_2_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0xD38B490)
#define CLASS_2_3949F84E34F27818_METHOD_2_DC6E236300D681AD_OFFSET UNITYSDK_OFFSET(0xD38AA80)
#define CLASS_2_3949F84E34F27818_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xD38BA90)
#define CLASS_2_3949F84E34F27818__CTOR_OFFSET UNITYSDK_OFFSET(0xD38A8E0)

inline static constexpr unsigned int Class_2_3949F84E34F27818_TypeDefinitionIndex = 50522;

class Class_2_3949F84E34F27818 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::RandomTraceProjectileData* Field_2_0; // 0x48
	::System::Single Field_2_1; // 0x50
	::System::Single Field_2_2; // 0x54
	::System::Single Field_2_3; // 0x58

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_DC6E236300D681AD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_DC6E236300D681AD_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_5F59867914726945()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_5F59867914726945_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_C4FDF5DB46830B8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_C4FDF5DB46830B8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_97FAD710C85F79F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_97FAD710C85F79F5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_857611A9CD5368DE(::RPG::MVector3 a1, ::RPG::MVector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_857611A9CD5368DE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_7DFB4B9C80198D98_1_OFFSET))(this);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}
};
