#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9EDD26082BAAABDE_METHOD_1_D9509DCEA9F29B99_OFFSET UNITYSDK_OFFSET(0x1A45F110)

inline static constexpr unsigned int Class_1_9EDD26082BAAABDE_TypeDefinitionIndex = 64416;

class Class_1_9EDD26082BAAABDE : public ::System::Object
{
public:
	static ::System::UInt32 Method_1_D9509DCEA9F29B99(::RPG::Client::LockSource a1)
	{
		return ((::System::UInt32(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + CLASS_1_9EDD26082BAAABDE_METHOD_1_D9509DCEA9F29B99_OFFSET))(a1);
	}
};
