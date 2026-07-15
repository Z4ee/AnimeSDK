#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class LinearWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_5AD61C7CF3A287C1_GET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x179C6FD0)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_1A24AA3B4EA4A88E_OFFSET UNITYSDK_OFFSET(0x179C6940)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x179C66F0)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_6617E33D0A2EDC18_OFFSET UNITYSDK_OFFSET(0x179C6810)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x179C62C0)
#define CLASS_2_5AD61C7CF3A287C1_SET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x179C6FE0)
#define CLASS_2_5AD61C7CF3A287C1__CTOR_OFFSET UNITYSDK_OFFSET(0x179C6260)

inline static constexpr unsigned int Class_2_5AD61C7CF3A287C1_TypeDefinitionIndex = 52266;

class Class_2_5AD61C7CF3A287C1 : public ::Class_1_1835888C1E19F013
{
public:
	::UnityEngine::Collider* Field_2_0; // 0x48
	::RPG::GameCore::LinearWithDetectProjectileData* Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_2; // 0x58
	::System::Single Field_2_3; // 0x64
	::System::Boolean _FirstFrameOcclusion_k__BackingField; // 0x68
	::System::Boolean Field_2_5; // 0x69
	::System::Single Field_2_6; // 0x6C
	::System::Single Field_2_7; // 0x70
	::System::Single Field_2_8; // 0x74

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_6617E33D0A2EDC18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_6617E33D0A2EDC18_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A24AA3B4EA4A88E(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_1A24AA3B4EA4A88E_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_FirstFrameOcclusion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_GET_FIRSTFRAMEOCCLUSION_OFFSET))(this);
	}

	::System::Void set_FirstFrameOcclusion(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_SET_FIRSTFRAMEOCCLUSION_OFFSET))(this, a1);
	}
};
