#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CloudGame::MailBox { class Mailbox; }
namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CONNECT_OFFSET UNITYSDK_OFFSET(0x1A187DC0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GAMECONTROLRECEIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A1878A0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A1879B0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_GYRO_OFFSET UNITYSDK_OFFSET(0x1A187A90)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEQUATERNION_OFFSET UNITYSDK_OFFSET(0x1A187CA0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEVECTOR3_OFFSET UNITYSDK_OFFSET(0x1A187BB0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SEND_OFFSET UNITYSDK_OFFSET(0x1A1884E0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SETIMUENABLED_OFFSET UNITYSDK_OFFSET(0x1A1882C0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A187A20)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_GYRO_OFFSET UNITYSDK_OFFSET(0x1A187B10)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1886F0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1886E0)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int GameControl_TypeDefinitionIndex = 7493;

	class GameControl : public ::System::Object
	{
	public:
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet_OnReceiveData()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0x1540);
		}
		static ::CloudGame::MailBox::Mailbox** StaticGet_mailbox()
		{
			return (::CloudGame::MailBox::Mailbox**)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0x1548);
		}
		static ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler** StaticGet_receiveCallback()
		{
			return (::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler**)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0x1550);
		}
		static ::UnityEngine::Vector3* StaticGet__acceleration_k__BackingField()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0x8D0);
		}
		static ::CloudGame::MailBox::GameControl::Gyroscope* StaticGet__gyro_k__BackingField()
		{
			return (::CloudGame::MailBox::GameControl::Gyroscope*)Il2CppClass::FromTypeDefinitionIndex(GameControl_TypeDefinitionIndex)->GetStaticField(0x8DC);
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

		static ::System::Void set_acceleration(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_ACCELERATION_OFFSET))(a1);
		}

		static ::CloudGame::MailBox::GameControl::Gyroscope get_gyro()
		{
			return ((::CloudGame::MailBox::GameControl::Gyroscope(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GET_GYRO_OFFSET))();
		}

		static ::System::Void set_gyro(::CloudGame::MailBox::GameControl::Gyroscope a1)
		{
			return ((::System::Void(*)(::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SET_GYRO_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 parseVector3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEVECTOR3_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion parseQuaternion(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_PARSEQUATERNION_OFFSET))(a1, a2);
		}

		static ::System::Boolean Connect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_CONNECT_OFFSET))();
		}

		static ::System::Void GameControlReceiveCallback(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_GAMECONTROLRECEIVECALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void SetImuEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SETIMUENABLED_OFFSET))(a1);
		}

		static ::System::Int64 Send(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL_SEND_OFFSET))(a1);
		}
	};
}
