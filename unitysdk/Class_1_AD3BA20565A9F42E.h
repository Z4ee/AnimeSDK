#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AD3BA20565A9F42E_METHOD_1_3489EEAF0837F674_OFFSET UNITYSDK_OFFSET(0x13AB3E60)
#define CLASS_1_AD3BA20565A9F42E_METHOD_1_4C6A9BAF3D99BA03_OFFSET UNITYSDK_OFFSET(0x13AB3DE0)

inline static constexpr unsigned int Class_1_AD3BA20565A9F42E_TypeDefinitionIndex = 67610;

class Class_1_AD3BA20565A9F42E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_4C6A9BAF3D99BA03(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_1_AD3BA20565A9F42E_METHOD_1_4C6A9BAF3D99BA03_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3489EEAF0837F674(::RPG::Client::UIFloatingTextType a1, ::RPG::Client::UIFloatingTextType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_1_AD3BA20565A9F42E_METHOD_1_3489EEAF0837F674_OFFSET))(a1, a2);
	}
};
