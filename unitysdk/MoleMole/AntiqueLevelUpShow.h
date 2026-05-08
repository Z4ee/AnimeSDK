#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class Class_2_E33C3D8379182471;

#define MOLEMOLE_ANTIQUELEVELUPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x174273C0)
#define MOLEMOLE_ANTIQUELEVELUPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x174273A0)
#define MOLEMOLE_ANTIQUELEVELUPSHOW___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17427650)

namespace MoleMole
{
	inline static constexpr unsigned int AntiqueLevelUpShow_TypeDefinitionIndex = 50013;

	class AntiqueLevelUpShow : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::Class_2_E33C3D8379182471* _context; // 0x30

		::System::Void _ctor(::Class_2_E33C3D8379182471* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E33C3D8379182471*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIQUELEVELUPSHOW__CTOR_OFFSET))(this, context);
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
