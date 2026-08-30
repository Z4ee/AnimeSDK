#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6B6A4C789452DEC6.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_F9868A24C60208C0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18385A70)
#define CLASS_2_F9868A24C60208C0_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x183858F0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18385980)
#define CLASS_2_F9868A24C60208C0_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x183861F0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_5A07052D114516CB_OFFSET UNITYSDK_OFFSET(0x18385F20)
#define CLASS_2_F9868A24C60208C0_METHOD_2_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x183858B0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_8CDE48544BC4070F_OFFSET UNITYSDK_OFFSET(0x18385B60)
#define CLASS_2_F9868A24C60208C0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18385EB0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_B07554F28042D3EB_OFFSET UNITYSDK_OFFSET(0x18386290)
#define CLASS_2_F9868A24C60208C0_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x18385D30)
#define CLASS_2_F9868A24C60208C0__CTOR_OFFSET UNITYSDK_OFFSET(0x18385890)

inline static constexpr unsigned int Class_2_F9868A24C60208C0_TypeDefinitionIndex = 70126;

class Class_2_F9868A24C60208C0 : public ::Class_1_6B6A4C789452DEC6
{
public:
	::RPG::CustomRP::PPFilterStack* BBDMNLLJNCN; // 0x20
	::Struct_2_0B84ADD7815498A2 BHDKFJPCOHD; // 0x28
	::RPG::GameCore::GameEntity* LBGOHOGMEOJ; // 0x38
	::System::String* CDMFNHJGGKF; // 0x40
	::System::Single EKEPNGNLJHE; // 0x48
	::System::Single NOLLFPILIHO; // 0x4C
	::System::Single CCAOGMEFNLB; // 0x50
	::System::Boolean MEPIPCANMLO; // 0x54
	::System::Boolean FNOOFALACHF; // 0x55
	::System::Boolean ABIKIPMLGEL; // 0x56
	::System::Single DNLGMCGKHJL; // 0x58
	::System::Single JGNDPDFEBBO; // 0x5C
	::System::Single IIPKCANDFBK; // 0x60
	::System::Single MPDCHMNJKAC; // 0x64
	::System::Single OPMMHEEFLBF; // 0x68

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Boolean Method_2_8CDE48544BC4070F(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_8CDE48544BC4070F_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5A07052D114516CB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_5A07052D114516CB_OFFSET))(this, a1);
	}

	::System::Single Method_2_B07554F28042D3EB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_B07554F28042D3EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
