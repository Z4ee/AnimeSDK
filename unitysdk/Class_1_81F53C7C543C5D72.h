#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7DF92D9E0DFFA094;

#define CLASS_1_81F53C7C543C5D72_METHOD_1_353DB796BC999861_OFFSET UNITYSDK_OFFSET(0x13AB1470)
#define CLASS_1_81F53C7C543C5D72__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB1460)

inline static constexpr unsigned int Class_1_81F53C7C543C5D72_TypeDefinitionIndex = 59829;

class Class_1_81F53C7C543C5D72 : public ::System::Object
{
public:
	::Class_1_7DF92D9E0DFFA094* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_7DF92D9E0DFFA094* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7DF92D9E0DFFA094*))((::PBYTE)hIl2Cpp + CLASS_1_81F53C7C543C5D72__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_1_353DB796BC999861(::RPG::GameCore::FateLevelParamType a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + CLASS_1_81F53C7C543C5D72_METHOD_1_353DB796BC999861_OFFSET))(this, a1);
	}
};
