#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_927AEEA01B635CB6_1;
namespace RPG::Client::MVVM::Model { class LimaoNewsUserData; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9A7F970)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_GET_LIMAOID_OFFSET UNITYSDK_OFFSET(0x9A7FD90)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_GET_NPCID_OFFSET UNITYSDK_OFFSET(0x9A7FA00)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x9A7FB60)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_SET_LIMAOID_OFFSET UNITYSDK_OFFSET(0x9A7FDA0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7F9F0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA__GETLIMAOROW_OFFSET UNITYSDK_OFFSET(0x9A7FB00)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA__GETUSERDATA_OFFSET UNITYSDK_OFFSET(0x9A7FB70)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsLimaoData_TypeDefinitionIndex = 61057;

	class LimaoNewsLimaoData : public ::System::Object
	{
	public:
		::RPG::Client::MVVM::Model::LimaoNewsUserData* _UserData; // 0x10
		::System::UInt32 _LimaoId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsLimaoData* Create(::System::UInt32 LimaoId)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsLimaoData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_CREATE_OFFSET))(LimaoId);
		}

		::System::UInt32 get_NpcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_GET_NPCID_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsUserData* get_UserData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_GET_USERDATA_OFFSET))(this);
		}

		::Class_1_927AEEA01B635CB6_1* _GetLimaoRow()
		{
			return ((::Class_1_927AEEA01B635CB6_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA__GETLIMAOROW_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsUserData* _GetUserData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA__GETUSERDATA_OFFSET))(this);
		}

		::System::UInt32 get_LimaoId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_GET_LIMAOID_OFFSET))(this);
		}

		::System::Void set_LimaoId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLIMAODATA_SET_LIMAOID_OFFSET))(this, value);
		}
	};
}
