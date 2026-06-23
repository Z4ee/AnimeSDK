#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_F0A8349636E83FAC.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARACTIVEREGISTRATION_OFFSET UNITYSDK_OFFSET(0x144C4F50)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARBATTLEPHOTOTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x144C4FE0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x144C4D40)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x144C4DB0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x144C50A0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x144C5510)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x144C5350)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x144C56D0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x144C5730)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x144C57C0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBattlePhotoSubsystem_TypeDefinitionIndex = 75169;

	class BigSceneBattlePhotoSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneBattlePhotoSubsystem*>
	{
	public:
		::System::UInt32 _activeIdentifier; // 0x10
		::Struct_2_F0A8349636E83FAC _activeHandle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::Struct_2_F0A8349636E83FAC Register(::System::UInt32 identifier, ::System::Collections::Generic::List_1<::System::Int32>* targetGroupID)
		{
			return ((::Struct_2_F0A8349636E83FAC(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_REGISTER_OFFSET))(this, identifier, targetGroupID);
		}

		::System::Void Unregister(::Struct_2_F0A8349636E83FAC handle)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F0A8349636E83FAC))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_OFFSET))(this, handle);
		}

		::System::Void Unregister_1(::System::UInt32 identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_1_OFFSET))(this, identifier);
		}

		::System::Void ClearActiveRegistration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARACTIVEREGISTRATION_OFFSET))(this);
		}

		static ::System::Void ClearBattlePhotoTargetGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARBATTLEPHOTOTARGETGROUP_OFFSET))();
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
