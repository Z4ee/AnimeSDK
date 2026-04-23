#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_9742F8D3B563D1C4_2_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1003BA40)
#define CLASS_2_9742F8D3B563D1C4_2_METHOD_2_9E77C2541BDB01C0_OFFSET UNITYSDK_OFFSET(0x1003BA50)
#define CLASS_2_9742F8D3B563D1C4_2_METHOD_2_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0x1003B9B0)
#define CLASS_2_9742F8D3B563D1C4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1003B980)

inline static constexpr unsigned int Class_2_9742F8D3B563D1C4_2_TypeDefinitionIndex = 60521;

class Class_2_9742F8D3B563D1C4_2 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4_2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4_2_METHOD_2_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4_2_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_2_9E77C2541BDB01C0(::System::UInt32 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4_2_METHOD_2_9E77C2541BDB01C0_OFFSET))(this, P0);
	}
};
