#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraWorkDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERAWORKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC1B000)
#define RPG_CLIENT_CHIMERAWORKINFO_GETWORKDATA_OFFSET UNITYSDK_OFFSET(0xCC1AD70)
#define RPG_CLIENT_CHIMERAWORKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCC1AAB0)
#define RPG_CLIENT_CHIMERAWORKINFO_RESETWORKCURRENTHP_OFFSET UNITYSDK_OFFSET(0xCC1AE20)
#define RPG_CLIENT_CHIMERAWORKINFO_SYNCWORKHP_OFFSET UNITYSDK_OFFSET(0xCC1AD10)
#define RPG_CLIENT_CHIMERAWORKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCC1B050)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkInfo_TypeDefinitionIndex = 63565;

	class ChimeraWorkInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraWorkDataItem*>* _WorkDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_INIT_OFFSET))(this);
		}

		::System::Void SyncWorkHp(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_SYNCWORKHP_OFFSET))(this, a1, a2);
		}

		::System::Void ResetWorkCurrentHp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_RESETWORKCURRENTHP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkDataItem* GetWorkData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraWorkDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_GETWORKDATA_OFFSET))(this, a1);
		}
	};
}
