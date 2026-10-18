#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CLASS_2_3E462938FB409660_METHOD_2_16BC65CAB50AF055_OFFSET UNITYSDK_OFFSET(0xDCCC870)
#define CLASS_2_3E462938FB409660_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0xDCCCE30)
#define CLASS_2_3E462938FB409660_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0xDCCC470)
#define CLASS_2_3E462938FB409660_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xDCCCF50)
#define CLASS_2_3E462938FB409660_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xDCCC340)
#define CLASS_2_3E462938FB409660__CTOR_OFFSET UNITYSDK_OFFSET(0xDCCC2E0)

inline static constexpr unsigned int Class_2_3E462938FB409660_TypeDefinitionIndex = 54733;

class Class_2_3E462938FB409660 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BGCurveProjectileData* FPGPHIEOMFL; // 0x48
	::RPG::GameCore::MonoProjectileBGCurve* HBHMBJKBCMN; // 0x50
	::System::Single NKOAMJFKKLH; // 0x58
	::System::Boolean HOAGFGHBLJD; // 0x5C
	::UnityEngine::Vector3 MMMJAGICBDK; // 0x60
	::UnityEngine::Vector3 CLIOGBBJILH; // 0x6C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_3E462938FB409660__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E462938FB409660_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E462938FB409660_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_2_16BC65CAB50AF055(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E462938FB409660_METHOD_2_16BC65CAB50AF055_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E462938FB409660_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E462938FB409660_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}
};
