#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_SUMMERPOPULARITYLEVELUPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15E5BF40)
#define MOLEMOLE_SUMMERPOPULARITYLEVELUPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15E5BF90)
#define MOLEMOLE_SUMMERPOPULARITYLEVELUPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5BF50)

namespace MoleMole
{
	inline static constexpr unsigned int SummerPopularityLevelUpShow_TypeDefinitionIndex = 50948;

	class SummerPopularityLevelUpShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::UInt32 NewPopularity; // 0x28
		::System::UInt32 LastPopularity; // 0x2C

		::System::Void _ctor(::System::UInt32 lastPopularity, ::System::UInt32 newPopularity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERPOPULARITYLEVELUPSHOW__CTOR_OFFSET))(this, lastPopularity, newPopularity);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERPOPULARITYLEVELUPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERPOPULARITYLEVELUPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
