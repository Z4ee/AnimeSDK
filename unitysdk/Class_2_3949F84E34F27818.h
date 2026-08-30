#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class RandomTraceProjectileData; }

#define CLASS_2_3949F84E34F27818_METHOD_2_5F59867914726945_OFFSET UNITYSDK_OFFSET(0x15846200)
#define CLASS_2_3949F84E34F27818_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x15846590)
#define CLASS_2_3949F84E34F27818_METHOD_2_857611A9CD5368DE_OFFSET UNITYSDK_OFFSET(0x15845FD0)
#define CLASS_2_3949F84E34F27818_METHOD_2_962E26F9B8D5D109_OFFSET UNITYSDK_OFFSET(0x15845CB0)
#define CLASS_2_3949F84E34F27818_METHOD_2_97FAD710C85F79F5_OFFSET UNITYSDK_OFFSET(0x158467E0)
#define CLASS_2_3949F84E34F27818_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x158466B0)
#define CLASS_2_3949F84E34F27818__CTOR_OFFSET UNITYSDK_OFFSET(0x15845AD0)

inline static constexpr unsigned int Class_2_3949F84E34F27818_TypeDefinitionIndex = 54969;

class Class_2_3949F84E34F27818 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::RandomTraceProjectileData* KHEPJNBAHHC; // 0x48
	::System::Single FONHIPFHPNI; // 0x50
	::System::Single BEGAMHBBBIF; // 0x54
	::System::Single FLBLLMPABOJ; // 0x58

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_962E26F9B8D5D109()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_962E26F9B8D5D109_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_5F59867914726945()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_5F59867914726945_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_2_97FAD710C85F79F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_97FAD710C85F79F5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_857611A9CD5368DE(::RPG::MVector3 a1, ::RPG::MVector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_3949F84E34F27818_METHOD_2_857611A9CD5368DE_OFFSET))(this, a1, a2);
	}
};
