#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D3CC73B16B410533;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_17E437B4A89F52AB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA13EB0)
#define CLASS_1_17E437B4A89F52AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13FE0)

inline static constexpr unsigned int Class_1_17E437B4A89F52AB_TypeDefinitionIndex = 43652;

class Class_1_17E437B4A89F52AB : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_D3CC73B16B410533*>* FCMFHPHHNPI; // 0x10
	::Class_1_D3CC73B16B410533* BCEJILJPCKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17E437B4A89F52AB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17E437B4A89F52AB_CLEAR_OFFSET))(this);
	}
};
