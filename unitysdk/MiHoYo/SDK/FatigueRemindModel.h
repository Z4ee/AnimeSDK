#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_FATIGUEREMINDMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE739C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int FatigueRemindModel_TypeDefinitionIndex = 7827;

	class FatigueRemindModel : public ::System::Object
	{
	public:
		::System::String* nickname; // 0x10
		::System::Int32 reset_point; // 0x18
		::Il2CppArray<::System::Int32>* durations; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FATIGUEREMINDMODEL__CTOR_OFFSET))(this);
		}
	};
}
