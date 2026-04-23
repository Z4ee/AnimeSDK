#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_9CABF4BBD67F56EC_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xD9EA400)
#define CLASS_2_9CABF4BBD67F56EC_METHOD_2_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xD9EA3B0)
#define CLASS_2_9CABF4BBD67F56EC_METHOD_2_9E77C2541BDB01C0_OFFSET UNITYSDK_OFFSET(0xD9EA410)
#define CLASS_2_9CABF4BBD67F56EC__CTOR_OFFSET UNITYSDK_OFFSET(0xD9EA370)

inline static constexpr unsigned int Class_2_9CABF4BBD67F56EC_TypeDefinitionIndex = 60518;

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

	::System::Boolean Method_2_9E77C2541BDB01C0(::System::UInt32 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9CABF4BBD67F56EC_METHOD_2_9E77C2541BDB01C0_OFFSET))(this, P0);
	}
};
