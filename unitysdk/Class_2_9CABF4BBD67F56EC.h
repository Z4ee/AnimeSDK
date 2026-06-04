#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_9CABF4BBD67F56EC_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x141DDA80)
#define CLASS_2_9CABF4BBD67F56EC_METHOD_2_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x141DDA30)
#define CLASS_2_9CABF4BBD67F56EC_METHOD_2_EC24AC00C231F088_OFFSET UNITYSDK_OFFSET(0x141DDA90)
#define CLASS_2_9CABF4BBD67F56EC__CTOR_OFFSET UNITYSDK_OFFSET(0x141DDA00)

inline static constexpr unsigned int Class_2_9CABF4BBD67F56EC_TypeDefinitionIndex = 61452;

class Class_2_9CABF4BBD67F56EC : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_9CABF4BBD67F56EC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9CABF4BBD67F56EC_METHOD_2_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CABF4BBD67F56EC_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_2_EC24AC00C231F088(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9CABF4BBD67F56EC_METHOD_2_EC24AC00C231F088_OFFSET))(this, a1);
	}
};
