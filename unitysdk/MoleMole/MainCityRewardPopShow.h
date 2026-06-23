#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAINCITYREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1162CB00)
#define MOLEMOLE_MAINCITYREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1162C9C0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityRewardPopShow_TypeDefinitionIndex = 58000;

	class MainCityRewardPopShow : public ::MoleMole::LogicMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYREWARDPOPSHOW__CTOR_OFFSET))(this, items);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
