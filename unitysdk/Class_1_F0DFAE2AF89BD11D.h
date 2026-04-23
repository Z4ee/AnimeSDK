#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;

#define CLASS_1_F0DFAE2AF89BD11D_METHOD_1_9051DF3D41EF1ED1_OFFSET UNITYSDK_OFFSET(0x9A89630)
#define CLASS_1_F0DFAE2AF89BD11D_METHOD_1_96A055372184F5A8_OFFSET UNITYSDK_OFFSET(0x9A89550)
#define CLASS_1_F0DFAE2AF89BD11D_METHOD_1_B8FD2F4D39CD2538_OFFSET UNITYSDK_OFFSET(0x9A894C0)
#define CLASS_1_F0DFAE2AF89BD11D__CTOR_OFFSET UNITYSDK_OFFSET(0x9A896A0)

inline static constexpr unsigned int Class_1_F0DFAE2AF89BD11D_TypeDefinitionIndex = 59928;

class Class_1_F0DFAE2AF89BD11D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0DFAE2AF89BD11D__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_663* Method_1_B8FD2F4D39CD2538(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F0DFAE2AF89BD11D_METHOD_1_B8FD2F4D39CD2538_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_663* Method_1_96A055372184F5A8(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F0DFAE2AF89BD11D_METHOD_1_96A055372184F5A8_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_663* Method_1_9051DF3D41EF1ED1(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F0DFAE2AF89BD11D_METHOD_1_9051DF3D41EF1ED1_OFFSET))(a1);
	}
};
