#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"

class Class_1_1C70C3ABA311626B;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x99AFF30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x99B0FB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_09920A1440B5CF6F_OFFSET UNITYSDK_OFFSET(0x99B1870)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_3367CD3EDEE526CA_OFFSET UNITYSDK_OFFSET(0x99B1160)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x99B0B20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x99B05A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_FF8C68A81226CC80_OFFSET UNITYSDK_OFFSET(0x99B16C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x99B1530)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x99B1390)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_SETQUERYENTITYBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x99B0110)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x99B0160)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x99B1A50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x99B1A60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x99B1B20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x99B1B10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x99B1A70)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEntityBehaviour_TypeDefinitionIndex = 62565;

	class FiveDimEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_s_ShowDebugFollowCameraBounds()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x9AA0);
		}
		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x9AA1);
		}
		static ::System::Boolean* StaticGet_s_ShowBriefBillboard()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x9AA2);
		}
		static ::System::Boolean* StaticGet_s_ShowDebugSurface()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x9AA3);
		}
		// static const ::System::Single Field_6_8; // 0x0
		::Class_2_9DD8A46984F1AFFD* Field_6_0; // 0x38
		::Class_2_F47F7A3F5E97970D* Field_6_1; // 0x40
		::Class_1_1C70C3ABA311626B* Field_6_2; // 0x48
		::System::Func_2<::Entitas::IEntity*, ::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*>* Field_6_3; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetQueryEntityBehaviour(::System::Func_2<::Entitas::IEntity*, ::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::Entitas::IEntity*, ::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_SETQUERYENTITYBEHAVIOUR_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_DF3C54A5ADEABAF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_DF3C54A5ADEABAF1_OFFSET))(this);
		}

		::System::Void Method_6_D109CE569415FA03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_D109CE569415FA03_OFFSET))(this);
		}

		::System::Void Method_6_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Boolean Method_6_3367CD3EDEE526CA(::System::UInt32& a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_3367CD3EDEE526CA_OFFSET))(this, a1, a2);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_FF8C68A81226CC80(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_FF8C68A81226CC80_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_09920A1440B5CF6F(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_09920A1440B5CF6F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Init(::Entitas::IContext* P0, ::Entitas::IEntity* P1, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_onEntityReleased(::Entitas::IEntity* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_ONENTITYRELEASED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
