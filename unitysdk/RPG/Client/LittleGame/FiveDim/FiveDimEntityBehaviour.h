#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"

class Class_1_A4633252561E9217;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0xD4DB710)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xD4DC570)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_2D1F4D53DA59F649_OFFSET UNITYSDK_OFFSET(0xD4DCC20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_4EC4B6C876972CA7_OFFSET UNITYSDK_OFFSET(0xD4DC720)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_5C4B7FC969B96152_OFFSET UNITYSDK_OFFSET(0xD4DCE20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xD4DC150)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xD4DBBE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4DCA60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xD4DC8B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_SETQUERYENTITYBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0xD4DB910)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD4DB960)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD4DD060)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEntityBehaviour_TypeDefinitionIndex = 76393;

	class FiveDimEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_s_ShowBriefBillboard()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x14320);
		}
		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x14321);
		}
		static ::System::Boolean* StaticGet_s_ShowDebugSurface()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x14322);
		}
		static ::System::Boolean* StaticGet_s_ShowDebugFollowCameraBounds()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FiveDimEntityBehaviour_TypeDefinitionIndex)->GetStaticField(0x14323);
		}
		// static const ::System::Single DFOHPAMBNFF; // 0x0
		::Class_2_B9E8C2EEAA5C96EC* KAKEIDJDNHJ; // 0x38
		::Class_2_F47F7A3F5E97970D* EEFMDEHLLFI; // 0x40
		::Class_1_A4633252561E9217* DODNHKCLIGO; // 0x48
		::System::Func_2<::Entitas::IEntity*, ::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*>* BIDDMADPNJB; // 0x50

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

		::System::Void Method_6_5F08B426ADF31FF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_5F08B426ADF31FF5_OFFSET))(this);
		}

		::System::Void Method_6_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Boolean Method_6_4EC4B6C876972CA7(::System::UInt32& a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_4EC4B6C876972CA7_OFFSET))(this, a1, a2);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_2D1F4D53DA59F649(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_2D1F4D53DA59F649_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_5C4B7FC969B96152(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_METHOD_6_5C4B7FC969B96152_OFFSET))(this, a1, a2, a3);
		}
	};
}
