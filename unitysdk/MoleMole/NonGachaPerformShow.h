#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_034A90EB371EBBA7;

#define MOLEMOLE_NONGACHAPERFORMSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x10E4A600)
#define MOLEMOLE_NONGACHAPERFORMSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x10E4A650)
#define MOLEMOLE_NONGACHAPERFORMSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x10E4A550)
#define MOLEMOLE_NONGACHAPERFORMSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x10E4A5B0)
#define MOLEMOLE_NONGACHAPERFORMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x10E4A560)

namespace MoleMole
{
	inline static constexpr unsigned int NonGachaPerformShow_TypeDefinitionIndex = 61915;

	class NonGachaPerformShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_034A90EB371EBBA7* _context; // 0x28

		::System::Void _ctor(::Class_1_034A90EB371EBBA7* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_034A90EB371EBBA7*))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW_DOPROCESS_OFFSET))(this);
		}
	};
}
