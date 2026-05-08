#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_FORBIDDENAREACOLLECTPOPDIALOGSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x154243C0)
#define MOLEMOLE_FORBIDDENAREACOLLECTPOPDIALOGSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15424410)
#define MOLEMOLE_FORBIDDENAREACOLLECTPOPDIALOGSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x154243D0)

namespace MoleMole
{
	inline static constexpr unsigned int ForbiddenAreaCollectPopDialogShow_TypeDefinitionIndex = 71527;

	class ForbiddenAreaCollectPopDialogShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 CollectionID; // 0x28

		::System::Void _ctor(::System::Int32 collectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FORBIDDENAREACOLLECTPOPDIALOGSHOW__CTOR_OFFSET))(this, collectionID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FORBIDDENAREACOLLECTPOPDIALOGSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FORBIDDENAREACOLLECTPOPDIALOGSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
