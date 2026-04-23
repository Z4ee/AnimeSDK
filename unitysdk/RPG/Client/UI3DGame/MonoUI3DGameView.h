#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_85;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_2_F3C4BC00835CFDCA;
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xB3AF310)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xB3AF3B0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB3AF9B0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3AF970)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3AF610)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_PLAYUI3DANIMATION_OFFSET UNITYSDK_OFFSET(0xB3AF700)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xB3AF570)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xB3AF510)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xB3AF290)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xB3AF670)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xB3AF200)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AF1F0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xB3AFB60)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xB3AFC30)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xB3AFAB0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xB3AF9F0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonoUI3DGameView_TypeDefinitionIndex = 69729;

	class MonoUI3DGameView : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::Class_1_867B6CE75953535A* Field_6_0; // 0x18
		::Class_2_F3C4BC00835CFDCA* Field_6_1; // 0x20
		::Class_2_9850514C0F89B91A* Field_6_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetNodeActive(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETNODEACTIVE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayUI3DAnimation(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_PLAYUI3DANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, P0);
		}
	};
}
