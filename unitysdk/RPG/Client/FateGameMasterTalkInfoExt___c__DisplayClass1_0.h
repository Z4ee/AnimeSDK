#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18B5B0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__DISPLAYCLASS1_0__GETRANDOMITEMSONOVERVIEWPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x1C18B620)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfoExt___c__DisplayClass1_0_TypeDefinitionIndex = 64169;

	class FateGameMasterTalkInfoExt___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Random* rd; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRandomItemsOnOverviewPage_b__1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__DISPLAYCLASS1_0__GETRANDOMITEMSONOVERVIEWPAGE_B__1_OFFSET))(this, a1);
		}
	};
}
