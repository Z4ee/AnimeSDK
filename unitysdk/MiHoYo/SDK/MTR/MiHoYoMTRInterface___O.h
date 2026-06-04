#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ParameterizedThreadStart; }

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface___O_TypeDefinitionIndex = 44049;

	class MiHoYoMTRInterface___O : public ::System::Object
	{
	public:
		static ::System::Threading::ParameterizedThreadStart** StaticGet__0___StopMTRProc()
		{
			return (::System::Threading::ParameterizedThreadStart**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface___O_TypeDefinitionIndex)->GetStaticField(0xE230);
		}
		static ::System::Threading::ParameterizedThreadStart** StaticGet__1___StopUrlUsageProc()
		{
			return (::System::Threading::ParameterizedThreadStart**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface___O_TypeDefinitionIndex)->GetStaticField(0xE238);
		}
	};
}
