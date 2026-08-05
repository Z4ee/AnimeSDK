#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1739D030)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS8_0__PLAYBYINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1739D040)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS8_0__PLAYBYINDEX_B__1_OFFSET UNITYSDK_OFFSET(0x1739D050)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager___c__DisplayClass8_0_TypeDefinitionIndex = 70083;

	class MultipleVideoPlayerManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* onFinished; // 0x10
		::System::Action* onVideoEnd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayByIndex_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS8_0__PLAYBYINDEX_B__0_OFFSET))(this);
		}

		::System::Void _PlayByIndex_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS8_0__PLAYBYINDEX_B__1_OFFSET))(this);
		}
	};
}
