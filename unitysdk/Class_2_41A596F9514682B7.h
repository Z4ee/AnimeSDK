#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CLASS_2_41A596F9514682B7_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0xC729480)
#define CLASS_2_41A596F9514682B7_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0xC728CD0)
#define CLASS_2_41A596F9514682B7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC7296C0)
#define CLASS_2_41A596F9514682B7_METHOD_2_6FE71DB871BA90FA_OFFSET UNITYSDK_OFFSET(0xC7290D0)
#define CLASS_2_41A596F9514682B7_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xC7295A0)
#define CLASS_2_41A596F9514682B7_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0xC729690)
#define CLASS_2_41A596F9514682B7_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xC728BA0)
#define CLASS_2_41A596F9514682B7__CTOR_OFFSET UNITYSDK_OFFSET(0xC728B40)

inline static constexpr unsigned int Class_2_41A596F9514682B7_TypeDefinitionIndex = 51165;

class Class_2_41A596F9514682B7 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BGCurveProjectileData* Field_2_0; // 0x48
	::RPG::GameCore::MonoProjectileBGCurve* Field_2_1; // 0x50
	::System::Boolean Field_2_2; // 0x58
	::UnityEngine::Vector3 Field_2_3; // 0x5C
	::UnityEngine::Vector3 Field_2_4; // 0x68
	::System::Single Field_2_5; // 0x74

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_2_6FE71DB871BA90FA(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7_METHOD_2_6FE71DB871BA90FA_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A596F9514682B7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
