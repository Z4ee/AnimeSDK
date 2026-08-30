#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6FE0547AC9A9B1E1;
namespace RPG::GameCore { class FiveDimPortalConfig; }

#define CLASS_1_6D630ED33F35F07C_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C506A60)
#define CLASS_1_6D630ED33F35F07C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C506AD0)

inline static constexpr unsigned int Class_1_6D630ED33F35F07C_TypeDefinitionIndex = 41836;

class Class_1_6D630ED33F35F07C : public ::System::Object
{
public:
	::Class_1_6FE0547AC9A9B1E1* BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimPortalConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D630ED33F35F07C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D630ED33F35F07C_CLEAR_OFFSET))(this);
	}
};
