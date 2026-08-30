#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityGuessTheSilhouetteData; }

#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC535320)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS23_0___CONVERTGUESSDATALISTTODAYINDEXDICT_B__0_OFFSET UNITYSDK_OFFSET(0xC535E90)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS23_0___CONVERTGUESSDATALISTTODAYINDEXDICT_B__1_OFFSET UNITYSDK_OFFSET(0xC535F30)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityGuessTheSilhouetteModule___c__DisplayClass23_0_TypeDefinitionIndex = 61615;

	class ActivityGuessTheSilhouetteModule___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityGuessTheSilhouetteData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ConvertGuessDataListToDayIndexDict_b__0(::RPG::Client::ActivityGuessTheSilhouetteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS23_0___CONVERTGUESSDATALISTTODAYINDEXDICT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __ConvertGuessDataListToDayIndexDict_b__1(::RPG::Client::ActivityGuessTheSilhouetteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS23_0___CONVERTGUESSDATALISTTODAYINDEXDICT_B__1_OFFSET))(this, a1);
		}
	};
}
