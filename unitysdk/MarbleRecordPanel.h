#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MARBLERECORDPANEL_REFRESHSEALPOS_OFFSET UNITYSDK_OFFSET(0x88B5270)
#define MARBLERECORDPANEL_SETSEALHP_OFFSET UNITYSDK_OFFSET(0x88B4AE0)
#define MARBLERECORDPANEL_SETSEALVISIBLE_OFFSET UNITYSDK_OFFSET(0x88B4EE0)
#define MARBLERECORDPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x88B5330)

inline static constexpr unsigned int MarbleRecordPanel_TypeDefinitionIndex = 38050;

class MarbleRecordPanel : public ::UnityEngine::MonoBehaviour
{
public:
	::System::UInt32 SealIndex; // 0x18
	::System::Int32 Hp; // 0x1C
	::System::Boolean IsVisible; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL__CTOR_OFFSET))(this);
	}

	::System::Void SetSealHp()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL_SETSEALHP_OFFSET))(this);
	}

	::System::Void SetSealVisible()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL_SETSEALVISIBLE_OFFSET))(this);
	}

	::System::Void RefreshSealPos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLERECORDPANEL_REFRESHSEALPOS_OFFSET))(this);
	}
};
