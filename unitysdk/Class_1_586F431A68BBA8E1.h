#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirContainerType.h"
#include "unitysdk/System/Object.h"

class Class_1_1C4138E8422654D8;

#define CLASS_1_586F431A68BBA8E1_METHOD_1_52CD2FEA87BE6EC3_OFFSET UNITYSDK_OFFSET(0x13A46DE0)
#define CLASS_1_586F431A68BBA8E1_METHOD_1_559DA792B357B5EC_OFFSET UNITYSDK_OFFSET(0x13A47110)
#define CLASS_1_586F431A68BBA8E1_METHOD_1_A89B6F144F99B233_OFFSET UNITYSDK_OFFSET(0x13A46D50)
#define CLASS_1_586F431A68BBA8E1__CTOR_OFFSET UNITYSDK_OFFSET(0x13A471F0)

inline static constexpr unsigned int Class_1_586F431A68BBA8E1_TypeDefinitionIndex = 73662;

class Class_1_586F431A68BBA8E1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_586F431A68BBA8E1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A89B6F144F99B233(::Class_1_1C4138E8422654D8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + CLASS_1_586F431A68BBA8E1_METHOD_1_A89B6F144F99B233_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_52CD2FEA87BE6EC3(::Class_1_1C4138E8422654D8* a1, ::RPG::Client::PixAir::PixAirContainerType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C4138E8422654D8*, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + CLASS_1_586F431A68BBA8E1_METHOD_1_52CD2FEA87BE6EC3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_559DA792B357B5EC(::Class_1_1C4138E8422654D8* a1, ::RPG::Client::PixAir::PixAirContainerType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C4138E8422654D8*, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + CLASS_1_586F431A68BBA8E1_METHOD_1_559DA792B357B5EC_OFFSET))(this, a1, a2);
	}
};
