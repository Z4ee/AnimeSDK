#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_CCEC00145FD0827B_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1D9CC2A0)
#define CLASS_3_CCEC00145FD0827B_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1D9CC250)
#define CLASS_3_CCEC00145FD0827B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC290)

inline static constexpr unsigned int Class_3_CCEC00145FD0827B_TypeDefinitionIndex = 23247;

class Class_3_CCEC00145FD0827B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::Client::TextID PJHMJKEIGOA; // 0x18
	::System::Boolean GNDCCBNILML; // 0x28
	::System::UInt32 AALPICLABCO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCEC00145FD0827B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CCEC00145FD0827B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CCEC00145FD0827B*&))((::PBYTE)hIl2Cpp + CLASS_3_CCEC00145FD0827B_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CCEC00145FD0827B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CCEC00145FD0827B*))((::PBYTE)hIl2Cpp + CLASS_3_CCEC00145FD0827B_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
