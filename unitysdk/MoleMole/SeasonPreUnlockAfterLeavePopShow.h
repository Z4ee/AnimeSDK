#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_2_208CC9941471731A_22;

#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x16CE4260)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_DOPREUNLOCKASYNC_OFFSET UNITYSDK_OFFSET(0x16CE4450)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16CE3D20)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16CE3D70)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE3D30)

namespace MoleMole
{
	inline static constexpr unsigned int SeasonPreUnlockAfterLeavePopShow_TypeDefinitionIndex = 59672;

	class SeasonPreUnlockAfterLeavePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _seasonID; // 0x28

		::System::Void _ctor(::System::Int32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__CTOR_OFFSET))(this, seasonID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		static ::System::Boolean CheckResource(::Class_2_208CC9941471731A_22* template_)
		{
			return ((::System::Boolean(*)(::Class_2_208CC9941471731A_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_CHECKRESOURCE_OFFSET))(template_);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid DoPreUnlockAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_DOPREUNLOCKASYNC_OFFSET))(this);
		}
	};
}
