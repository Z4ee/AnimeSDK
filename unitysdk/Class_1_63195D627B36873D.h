#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreloadItemFlag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_63195D627B36873D_METHOD_1_5ECD7146AE411B31_1_OFFSET UNITYSDK_OFFSET(0x1886CCF0)
#define CLASS_1_63195D627B36873D_METHOD_1_5ECD7146AE411B31_OFFSET UNITYSDK_OFFSET(0x1886CCA0)

inline static constexpr unsigned int Class_1_63195D627B36873D_TypeDefinitionIndex = 59844;

class Class_1_63195D627B36873D : public ::System::Object
{
public:
	static ::System::Boolean Method_1_5ECD7146AE411B31(::RPG::Client::PreloadItemFlag a1, ::RPG::Client::PreloadItemFlag a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::PreloadItemFlag, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + CLASS_1_63195D627B36873D_METHOD_1_5ECD7146AE411B31_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5ECD7146AE411B31_1(::RPG::Client::PreloadItemFlag a1, ::RPG::Client::PreloadItemFlag a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::PreloadItemFlag, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + CLASS_1_63195D627B36873D_METHOD_1_5ECD7146AE411B31_1_OFFSET))(a1, a2);
	}
};
