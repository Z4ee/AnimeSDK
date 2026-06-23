#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17436C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotTrailWidgetControllerContext_TypeDefinitionIndex = 76923;

	class UIActivityHotpotTrailWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* WorldTargetPositions; // 0x28
		::System::Boolean HighOrLow; // 0x30
		::UnityEngine::Vector3 WorldSourcePosition; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
