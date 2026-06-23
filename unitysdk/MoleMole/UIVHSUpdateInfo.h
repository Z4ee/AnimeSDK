#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_UIVHSUPDATEINFO_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x122C8930)
#define MOLEMOLE_UIVHSUPDATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x122C88F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSUpdateInfo_TypeDefinitionIndex = 78138;

	class UIVHSUpdateInfo : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 newStoreLevel; // 0x28

		::System::Void _ctor(::System::Int32 newStoreLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSUPDATEINFO__CTOR_OFFSET))(this, newStoreLevel);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSUPDATEINFO_ONPROCESS_OFFSET))(this);
		}
	};
}
