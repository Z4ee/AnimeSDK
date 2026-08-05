#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class Class_2_544292CE70D394DF;

#define MOLEMOLE_ANTIQUELEVELUPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x150D9240)
#define MOLEMOLE_ANTIQUELEVELUPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x150D9220)
#define MOLEMOLE_ANTIQUELEVELUPSHOW___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x150D94D0)

namespace MoleMole
{
	inline static constexpr unsigned int AntiqueLevelUpShow_TypeDefinitionIndex = 74003;

	class AntiqueLevelUpShow : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::Class_2_544292CE70D394DF* _context; // 0x30

		::System::Void _ctor(::Class_2_544292CE70D394DF* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_544292CE70D394DF*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIQUELEVELUPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIQUELEVELUPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIQUELEVELUPSHOW___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
