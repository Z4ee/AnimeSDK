#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PropSelectionEffectConfig; }
namespace RPG::Client { class PropSelectionEffect_Class_1_F34E36657A6030BD; }
namespace RPG::Client { class PropSelectionStateConfig; }
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x16149A10)
#define RPG_CLIENT_PROPSELECTIONEFFECT_ENDWORK_OFFSET UNITYSDK_OFFSET(0x1614A410)
#define RPG_CLIENT_PROPSELECTIONEFFECT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1614B210)
#define RPG_CLIENT_PROPSELECTIONEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16149E70)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_2F02286930EE8C35_OFFSET UNITYSDK_OFFSET(0x1614AAC0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_95336F246B29BAF0_OFFSET UNITYSDK_OFFSET(0x1614A310)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_9849CBBA07F50D0D_OFFSET UNITYSDK_OFFSET(0x1614B100)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1614A260)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1614AA10)
#define RPG_CLIENT_PROPSELECTIONEFFECT_SETHOVERCOLOR_OFFSET UNITYSDK_OFFSET(0x1614B270)
#define RPG_CLIENT_PROPSELECTIONEFFECT_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1614A7F0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_STARTWORK_1_OFFSET UNITYSDK_OFFSET(0x1614A380)
#define RPG_CLIENT_PROPSELECTIONEFFECT_STARTWORK_OFFSET UNITYSDK_OFFSET(0x1614A120)
#define RPG_CLIENT_PROPSELECTIONEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1614B480)
#define RPG_CLIENT_PROPSELECTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1614B410)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_TypeDefinitionIndex = 57553;

	class PropSelectionEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_5_0()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PropSelectionEffect_TypeDefinitionIndex)->GetStaticField(0x10140);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropSelectionEffect_TypeDefinitionIndex)->GetStaticField(0x56F0);
		}
		::RPG::Client::PropSelectionEffectConfig* EffectConfig; // 0x18
		::RPG::GameCore::GameEntity* Field_5_3; // 0x20
		::System::Boolean Field_5_4; // 0x28
		::System::Boolean Field_5_5; // 0x29
		::RPG::Client::PropSelectionState Field_5_6; // 0x2C
		::System::Boolean Field_5_7; // 0x30
		::System::Boolean Field_5_8; // 0x31
		::System::Boolean Field_5_9; // 0x32
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_10; // 0x38
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_5_11; // 0x40
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_5_12; // 0x48
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_5_13; // 0x50
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_14; // 0x58
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_15; // 0x60
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_16; // 0x68
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_17; // 0x70
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_18; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void StartWork(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_STARTWORK_OFFSET))(this, a1);
		}

		::System::Void StartWork_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_STARTWORK_1_OFFSET))(this, a1);
		}

		::System::Void EndWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_ENDWORK_OFFSET))(this);
		}

		::System::Void Method_5_F37CDBD6D46274D2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_F37CDBD6D46274D2_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void SetState(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_SETSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Method_5_95336F246B29BAF0(::RPG::Client::PropSelectionState a1)
		{
			return ((::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD*(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_95336F246B29BAF0_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_5_9849CBBA07F50D0D(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_9849CBBA07F50D0D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_2F02286930EE8C35(::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a1, ::RPG::Client::PropSelectionStateConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*, ::RPG::Client::PropSelectionStateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_2F02286930EE8C35_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PropSelectionState get_CurrentState()
		{
			return ((::RPG::Client::PropSelectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void SetHoverColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_SETHOVERCOLOR_OFFSET))(this, a1);
		}
	};
}
