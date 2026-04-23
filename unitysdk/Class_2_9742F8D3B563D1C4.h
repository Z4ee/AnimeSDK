#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_9742F8D3B563D1C4_METHOD_2_9E77C2541BDB01C0_OFFSET UNITYSDK_OFFSET(0x11A39FD0)
#define CLASS_2_9742F8D3B563D1C4_METHOD_2_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0x11A39F30)
#define CLASS_2_9742F8D3B563D1C4_METHOD_2_DCC41B44CC663989_OFFSET UNITYSDK_OFFSET(0x11A39FC0)
#define CLASS_2_9742F8D3B563D1C4__CTOR_OFFSET UNITYSDK_OFFSET(0x11A39F00)

inline static constexpr unsigned int Class_2_9742F8D3B563D1C4_TypeDefinitionIndex = 60519;

class Class_2_9742F8D3B563D1C4 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4_METHOD_2_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemRarity Method_2_DCC41B44CC663989()
	{
		return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4_METHOD_2_DCC41B44CC663989_OFFSET))(this);
	}

	::System::Boolean Method_2_9E77C2541BDB01C0(::System::UInt32 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9742F8D3B563D1C4_METHOD_2_9E77C2541BDB01C0_OFFSET))(this, P0);
	}
};
