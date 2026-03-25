#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PropSelectionEffectConfig; }
namespace RPG::Client { class PropSelectionEffect_Class_1_F34E36657A6030BD; }
namespace RPG::Client { class PropSelectionStateConfig; }
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA232090)
#define RPG_CLIENT_PROPSELECTIONEFFECT_ENDWORK_OFFSET UNITYSDK_OFFSET(0xA232830)
#define RPG_CLIENT_PROPSELECTIONEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA2324F0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_2F02286930EE8C35_OFFSET UNITYSDK_OFFSET(0xA232CA0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_95336F246B29BAF0_OFFSET UNITYSDK_OFFSET(0xA2327C0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_9849CBBA07F50D0D_OFFSET UNITYSDK_OFFSET(0xA233340)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA232710)
#define RPG_CLIENT_PROPSELECTIONEFFECT_METHOD_5_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA232C00)
#define RPG_CLIENT_PROPSELECTIONEFFECT_SETSTATE_OFFSET UNITYSDK_OFFSET(0xA232AE0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_STARTWORK_OFFSET UNITYSDK_OFFSET(0xA2325E0)
#define RPG_CLIENT_PROPSELECTIONEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2334C0)
#define RPG_CLIENT_PROPSELECTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA233450)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_TypeDefinitionIndex = 48799;

	class PropSelectionEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_5_12()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PropSelectionEffect_TypeDefinitionIndex)->GetStaticField(0xD120);
		}
		::RPG::Client::PropSelectionEffectConfig* EffectConfig; // 0x18
		::RPG::GameCore::GameEntity* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x29
		::RPG::Client::PropSelectionState Field_5_4; // 0x2C
		::System::Boolean Field_5_5; // 0x30
		::System::Boolean Field_5_6; // 0x31
		::System::Boolean Field_5_7; // 0x32
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_8; // 0x38
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_5_9; // 0x40
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_5_10; // 0x48
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_5_11; // 0x50
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_13; // 0x58
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_14; // 0x60
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_15; // 0x68
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_16; // 0x70
		::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD* Field_5_17; // 0x78

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
	};
}
