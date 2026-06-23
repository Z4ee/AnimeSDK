#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CloudGame::MailBox { class Mailbox; }
namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CONNECT_OFFSET UNITYSDK_OFFSET(0x1BA69480)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GAMECONTROLRECEIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA68F60)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1BA69070)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_GYRO_OFFSET UNITYSDK_OFFSET(0x1BA69150)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEQUATERNION_OFFSET UNITYSDK_OFFSET(0x1BA69360)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BA69270)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SEND_OFFSET UNITYSDK_OFFSET(0x1BA69880)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SETIMUENABLED_OFFSET UNITYSDK_OFFSET(0x1BA69740)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1BA690E0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_GYRO_OFFSET UNITYSDK_OFFSET(0x1BA691D0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA69A90)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA69A80)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int GameControl_TypeDefinitionIndex = 19303;

	class GameControl : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox** StaticGet_mailbox()
		{
			return (::CloudGame::MailBox::Mailbox**)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0xA3F0);
		}
		static ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler** StaticGet_receiveCallback()
		{
			return (::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler**)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0xA3F8);
		}
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_OnReceiveData()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0xA400);
		}
		static ::UnityEngine::Vector3* StaticGet__acceleration_k__BackingField()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0x45F0);
		}
		static ::CloudGame::MailBox::GameControl::Gyroscope* StaticGet__gyro_k__BackingField()
		{
			return (::CloudGame::MailBox::GameControl::Gyroscope*)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0x45FC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_acceleration()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_ACCELERATION_OFFSET))();
		}

		static ::System::Void set_acceleration(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_ACCELERATION_OFFSET))(value);
		}

		static ::CloudGame::MailBox::GameControl::Gyroscope get_gyro()
		{
			return ((::CloudGame::MailBox::GameControl::Gyroscope(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_GYRO_OFFSET))();
		}

		static ::System::Void set_gyro(::CloudGame::MailBox::GameControl::Gyroscope value)
		{
			return ((::System::Void(*)(::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_GYRO_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 parseVector3(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEVECTOR3_OFFSET))(data, startIndex);
		}

		static ::UnityEngine::Quaternion parseQuaternion(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::UnityEngine::Quaternion(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEQUATERNION_OFFSET))(data, startIndex);
		}

		static ::System::Boolean Connect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CONNECT_OFFSET))();
		}

		static ::System::Void GameControlReceiveCallback(::System::IntPtr pData, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GAMECONTROLRECEIVECALLBACK_OFFSET))(pData, size);
		}

		static ::System::Void SetImuEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SETIMUENABLED_OFFSET))(enabled);
		}

		static ::System::Int64 Send(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SEND_OFFSET))(data);
		}
	};
}
