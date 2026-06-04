#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeInstance.h"

class Class_1_3AD2528CD53B1639_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESTORYINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0xB57A950)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB57A880)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB55A2A0)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xB57A500)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE___IFIXBASEPROXY_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0xB57AAD0)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE___IFIXBASEPROXY__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB57AA90)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE___IFIXBASEPROXY__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xB57AA40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryInstance_TypeDefinitionIndex = 59094;

	class ChallengeStoryInstance : public ::RPG::Client::ChallengeInstance
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* BuffList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void _SyncExtraInfo(::Class_1_3AD2528CD53B1639_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SyncExtraInfo(::Class_1_3AD2528CD53B1639_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE___IFIXBASEPROXY__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE___IFIXBASEPROXY__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE___IFIXBASEPROXY_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}
	};
}
