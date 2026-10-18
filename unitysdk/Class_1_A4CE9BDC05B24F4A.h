#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A4CE9BDC05B24F4A_METHOD_1_3344E8EC201AA42A_OFFSET UNITYSDK_OFFSET(0xB4161F0)
#define CLASS_1_A4CE9BDC05B24F4A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB416340)
#define CLASS_1_A4CE9BDC05B24F4A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4162F0)
#define CLASS_1_A4CE9BDC05B24F4A__CTOR_OFFSET UNITYSDK_OFFSET(0xB416390)

inline static constexpr unsigned int Class_1_A4CE9BDC05B24F4A_TypeDefinitionIndex = 54421;

class Class_1_A4CE9BDC05B24F4A : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint AHAEIFEOELB; // 0x10
	::System::Int32 DPLMENILLLL; // 0x18
	::RPG::GameCore::FixPoint HKOJCEMPDGE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE9BDC05B24F4A__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_3344E8EC201AA42A(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A4CE9BDC05B24F4A_METHOD_1_3344E8EC201AA42A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE9BDC05B24F4A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE9BDC05B24F4A_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
