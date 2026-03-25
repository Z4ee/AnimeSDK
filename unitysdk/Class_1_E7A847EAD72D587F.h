#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_D2F71E01735EE2C6;

#define CLASS_1_E7A847EAD72D587F_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x114017B0)
#define CLASS_1_E7A847EAD72D587F__CTOR_OFFSET UNITYSDK_OFFSET(0x114018F0)

inline static constexpr unsigned int Class_1_E7A847EAD72D587F_TypeDefinitionIndex = 44920;

class Class_1_E7A847EAD72D587F : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7A847EAD72D587F__CTOR_OFFSET))(this);
	}

	::Class_1_D2F71E01735EE2C6* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_D2F71E01735EE2C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7A847EAD72D587F_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}
};
