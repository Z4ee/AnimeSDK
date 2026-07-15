#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeBossIntroStageViewModel; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18787EC0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187881B0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18788140)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18788230)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x187881A0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18788150)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18787EB0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x187878E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossIntroStageViewModel__CreateAll_d__10_TypeDefinitionIndex = 60294;

	class ChallengeBossIntroStageViewModel__CreateAll_d__10 : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeBossIntroStageViewModel* __2__current; // 0x10
		::RPG::Client::ChallengeBossData* __3__challengeData; // 0x18
		::RPG::Client::ChallengeBossData* challengeData; // 0x20
		::System::Boolean _isTierce_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::UInt32 _stageCount_5__3; // 0x30
		::System::Int32 _i_5__4; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::ChallengeBossIntroStageViewModel* System_Collections_Generic_IEnumerator_RPG_Client_ChallengeBossIntroStageViewModel__get_Current()
		{
			return ((::RPG::Client::ChallengeBossIntroStageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::ChallengeBossIntroStageViewModel*>* System_Collections_Generic_IEnumerable_RPG_Client_ChallengeBossIntroStageViewModel__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::ChallengeBossIntroStageViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATEALL_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
