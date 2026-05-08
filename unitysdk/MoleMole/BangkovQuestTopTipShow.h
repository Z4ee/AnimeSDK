#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class Class_2_112BCAD317CC03C6;

#define MOLEMOLE_BANGKOVQUESTTOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x122D6350)
#define MOLEMOLE_BANGKOVQUESTTOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x122D6330)
#define MOLEMOLE_BANGKOVQUESTTOPTIPSHOW___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x122D6510)

namespace MoleMole
{
	inline static constexpr unsigned int BangkovQuestTopTipShow_TypeDefinitionIndex = 56330;

	class BangkovQuestTopTipShow : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::Class_2_112BCAD317CC03C6* _context; // 0x30

		::System::Void _ctor(::Class_2_112BCAD317CC03C6* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_112BCAD317CC03C6*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVQUESTTOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVQUESTTOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVQUESTTOPTIPSHOW___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
