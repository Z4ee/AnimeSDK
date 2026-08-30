#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1350;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER_GETSUBKEYS_OFFSET UNITYSDK_OFFSET(0xD00E520)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD00E4D0)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinDeckEditRedDotFilter_TypeDefinitionIndex = 79414;

	class FateRinDeckEditRedDotFilter : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1350* _RedDotService; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_1350* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1350*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER__CTOR_OFFSET))(this, a1);
		}

		::System::Void GetSubKeys(::System::Collections::Generic::List_1<::System::UInt32>*& a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER_GETSUBKEYS_OFFSET))(this, a1, a2, a3);
		}
	};
}
