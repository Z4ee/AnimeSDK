#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1EA4DC50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_TIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0x1EA4DC30)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_INITIALIZEEDITORTIME_OFFSET UNITYSDK_OFFSET(0x1EA4DC80)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTIME_UPDATEEDITORTIME_OFFSET UNITYSDK_OFFSET(0x1EA4DCB0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTTime_TypeDefinitionIndex = 28940;

	class DTTime : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__EditorDeltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DTTime_TypeDefinitionIndex)->GetStaticField(0x78B0);
		}
		static ::System::Single* StaticGet__EditorLastTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DTTime_TypeDefinitionIndex)->GetStaticField(0x78B4);
		}

		static ::System::Double get_TimeSinceStartup()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_TIMESINCESTARTUP_OFFSET))();
		}

		static ::System::Single get_deltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_GET_DELTATIME_OFFSET))();
		}

		static ::System::Void InitializeEditorTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_INITIALIZEEDITORTIME_OFFSET))();
		}

		static ::System::Void UpdateEditorTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTIME_UPDATEEDITORTIME_OFFSET))();
		}
	};
}
