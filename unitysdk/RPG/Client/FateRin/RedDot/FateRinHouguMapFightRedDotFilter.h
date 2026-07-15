#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1269;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER_GETNEWFIGHTSUBKEYS_OFFSET UNITYSDK_OFFSET(0x1A3942F0)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3942A0)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinHouguMapFightRedDotFilter_TypeDefinitionIndex = 75782;

	class FateRinHouguMapFightRedDotFilter : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1269* _RedDotService; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_1269* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1269*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewFightSubKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINHOUGUMAPFIGHTREDDOTFILTER_GETNEWFIGHTSUBKEYS_OFFSET))(this);
		}
	};
}
