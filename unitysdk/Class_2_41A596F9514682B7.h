#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CLASS_2_41A596F9514682B7_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x18463640)
#define CLASS_2_41A596F9514682B7_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x18462E90)
#define CLASS_2_41A596F9514682B7_METHOD_2_6FE71DB871BA90FA_OFFSET UNITYSDK_OFFSET(0x18463290)
#define CLASS_2_41A596F9514682B7_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x18463760)
#define CLASS_2_41A596F9514682B7_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x18462D60)
#define CLASS_2_41A596F9514682B7__CTOR_OFFSET UNITYSDK_OFFSET(0x18462D00)

inline static constexpr unsigned int Class_2_41A596F9514682B7_TypeDefinitionIndex = 52256;

class Class_2_41A596F9514682B7 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::MonoProjectileBGCurve* Field_2_0; // 0x48
	::RPG::GameCore::BGCurveProjectileData* Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_2; // 0x58
	::System::Boolean Field_2_3; // 0x64
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
};
