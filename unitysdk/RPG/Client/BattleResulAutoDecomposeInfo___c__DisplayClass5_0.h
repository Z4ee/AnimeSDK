#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E75A6F37EAB58DE;

#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB40F700)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0__MERGE_B__0_OFFSET UNITYSDK_OFFSET(0xB40FD90)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResulAutoDecomposeInfo___c__DisplayClass5_0_TypeDefinitionIndex = 58836;

	class BattleResulAutoDecomposeInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_9E75A6F37EAB58DE* battleResultItem; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Merge_b__0(::Class_1_9E75A6F37EAB58DE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9E75A6F37EAB58DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0__MERGE_B__0_OFFSET))(this, a1);
		}
	};
}
