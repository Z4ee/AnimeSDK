#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_0A92C1436010F884;

#define CLASS_1_5B1D050D81192A0F_METHOD_1_1287382D7C0A45B8_OFFSET UNITYSDK_OFFSET(0xB4A1980)
#define CLASS_1_5B1D050D81192A0F__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A1970)

inline static constexpr unsigned int Class_1_5B1D050D81192A0F_TypeDefinitionIndex = 58899;

class Class_1_5B1D050D81192A0F : public ::System::Object
{
public:
	::Class_1_0A92C1436010F884* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_0A92C1436010F884* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A92C1436010F884*))((::PBYTE)hIl2Cpp + CLASS_1_5B1D050D81192A0F__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_1_1287382D7C0A45B8(::RPG::GameCore::FateLevelParamType a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + CLASS_1_5B1D050D81192A0F_METHOD_1_1287382D7C0A45B8_OFFSET))(this, a1);
	}
};
