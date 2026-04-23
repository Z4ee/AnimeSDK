#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_B7079F3879CA1D0C;

#define CLASS_1_E7A847EAD72D587F_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x12AD1060)
#define CLASS_1_E7A847EAD72D587F__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD11A0)

inline static constexpr unsigned int Class_1_E7A847EAD72D587F_TypeDefinitionIndex = 51669;

class Class_1_E7A847EAD72D587F : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7A847EAD72D587F__CTOR_OFFSET))(this);
	}

	::Class_1_B7079F3879CA1D0C* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_B7079F3879CA1D0C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7A847EAD72D587F_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}
};
