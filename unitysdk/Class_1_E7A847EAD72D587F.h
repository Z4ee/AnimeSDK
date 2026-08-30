#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0CEE69967B7714A7;

#define CLASS_1_E7A847EAD72D587F_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x15DF8A30)
#define CLASS_1_E7A847EAD72D587F__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF8B90)

inline static constexpr unsigned int Class_1_E7A847EAD72D587F_TypeDefinitionIndex = 56260;

class Class_1_E7A847EAD72D587F : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint NNACKOBKFGE; // 0x10
	::System::Boolean KKKIONIDKFA; // 0x18
	::System::UInt32 FEHABNJEENK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7A847EAD72D587F__CTOR_OFFSET))(this);
	}

	::Class_1_0CEE69967B7714A7* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_0CEE69967B7714A7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7A847EAD72D587F_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}
};
