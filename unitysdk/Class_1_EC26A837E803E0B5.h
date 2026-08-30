#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirContainerType.h"
#include "unitysdk/System/Object.h"

class Class_1_1C4138E8422654D8;

#define CLASS_1_EC26A837E803E0B5_METHOD_1_54FBD1F259D5F620_OFFSET UNITYSDK_OFFSET(0x17FB5C20)
#define CLASS_1_EC26A837E803E0B5_METHOD_1_77DAC87B67BAB50D_OFFSET UNITYSDK_OFFSET(0x17FB6020)
#define CLASS_1_EC26A837E803E0B5_METHOD_1_B9CE550C730C73A5_OFFSET UNITYSDK_OFFSET(0x17FB5B50)
#define CLASS_1_EC26A837E803E0B5__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB6250)

inline static constexpr unsigned int Class_1_EC26A837E803E0B5_TypeDefinitionIndex = 78858;

class Class_1_EC26A837E803E0B5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC26A837E803E0B5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B9CE550C730C73A5(::Class_1_1C4138E8422654D8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + CLASS_1_EC26A837E803E0B5_METHOD_1_B9CE550C730C73A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_54FBD1F259D5F620(::Class_1_1C4138E8422654D8* a1, ::RPG::Client::PixAir::PixAirContainerType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C4138E8422654D8*, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + CLASS_1_EC26A837E803E0B5_METHOD_1_54FBD1F259D5F620_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_77DAC87B67BAB50D(::Class_1_1C4138E8422654D8* a1, ::RPG::Client::PixAir::PixAirContainerType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C4138E8422654D8*, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + CLASS_1_EC26A837E803E0B5_METHOD_1_77DAC87B67BAB50D_OFFSET))(this, a1, a2);
	}
};
