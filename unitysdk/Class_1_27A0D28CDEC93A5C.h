#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_734;
namespace RPG::Client { class MapMappingInfoData; }

#define CLASS_1_27A0D28CDEC93A5C_METHOD_1_554DB093A8C8734B_OFFSET UNITYSDK_OFFSET(0xA959980)

inline static constexpr unsigned int Class_1_27A0D28CDEC93A5C_TypeDefinitionIndex = 58884;

class Class_1_27A0D28CDEC93A5C : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_734* Method_1_554DB093A8C8734B(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_0_16E4307DCC419505_734*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_27A0D28CDEC93A5C_METHOD_1_554DB093A8C8734B_OFFSET))(a1);
	}
};
