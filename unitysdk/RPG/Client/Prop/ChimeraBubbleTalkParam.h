#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x189DBCE0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x189DBCA0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0x189DBCC0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_VOICEEVTSTR_OFFSET UNITYSDK_OFFSET(0x189DBD00)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x189DBCF0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x189DBCB0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0x189DBCD0)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_VOICEEVTSTR_OFFSET UNITYSDK_OFFSET(0x189DBD10)
#define RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x189DBD20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBubbleTalkParam_TypeDefinitionIndex = 77933;

	class ChimeraBubbleTalkParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* AttachPoint; // 0x10
		::System::String* _VoiceEvtStr_k__BackingField; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 _ChimeraID_k__BackingField; // 0x28
		::RPG::GameCore::ChimeraTalkPopDirection _Direction_k__BackingField; // 0x2C
		::RPG::Client::TextID Content; // 0x30
		::System::Boolean _IsChimera_k__BackingField; // 0x40
		::System::Single ShowTime; // 0x44

		::System::Void _ctor(::UnityEngine::Transform* a1, ::RPG::GameCore::ChimeraTalkContent* a2, ::System::Single a3, ::RPG::GameCore::ChimeraTalkPopDirection a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::ChimeraTalkContent*, ::System::Single, ::RPG::GameCore::ChimeraTalkPopDirection, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::ChimeraTalkPopDirection get_Direction()
		{
			return ((::RPG::GameCore::ChimeraTalkPopDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::RPG::GameCore::ChimeraTalkPopDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTalkPopDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_DIRECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChimera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_ISCHIMERA_OFFSET))(this);
		}

		::System::Void set_IsChimera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_ISCHIMERA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_CHIMERAID_OFFSET))(this);
		}

		::System::Void set_ChimeraID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_CHIMERAID_OFFSET))(this, a1);
		}

		::System::String* get_VoiceEvtStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_GET_VOICEEVTSTR_OFFSET))(this);
		}

		::System::Void set_VoiceEvtStr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABUBBLETALKPARAM_SET_VOICEEVTSTR_OFFSET))(this, a1);
		}
	};
}
