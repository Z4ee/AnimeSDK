#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CLASS_2_41A596F9514682B7_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x1A858920)
#define CLASS_2_41A596F9514682B7_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x1A858170)
#define CLASS_2_41A596F9514682B7_METHOD_2_6FE71DB871BA90FA_OFFSET UNITYSDK_OFFSET(0x1A858570)
#define CLASS_2_41A596F9514682B7_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1A858A40)
#define CLASS_2_41A596F9514682B7_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x1A858040)
#define CLASS_2_41A596F9514682B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A857FE0)

inline static constexpr unsigned int Class_2_41A596F9514682B7_TypeDefinitionIndex = 54943;

class Class_2_41A596F9514682B7 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::MonoProjectileBGCurve* HBHMBJKBCMN; // 0x48
	::RPG::GameCore::BGCurveProjectileData* FPGPHIEOMFL; // 0x50
	::UnityEngine::Vector3 CLIOGBBJILH; // 0x58
	::System::Single NKOAMJFKKLH; // 0x64
	::UnityEngine::Vector3 MMMJAGICBDK; // 0x68
	::System::Boolean HOAGFGHBLJD; // 0x74

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
