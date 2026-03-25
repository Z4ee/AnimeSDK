#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_C37EA230867B3151;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MultiLightEffectMaterialBlock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0xA134D50)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xA1353F0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_A40693E5C9D7EEF5_OFFSET UNITYSDK_OFFSET(0xA135780)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA134C90)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_BD50D311A56B5E90_OFFSET UNITYSDK_OFFSET(0xA1358E0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_D4F7042B54090FE4_OFFSET UNITYSDK_OFFSET(0xA135B10)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_STOP_OFFSET UNITYSDK_OFFSET(0xA1348F0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_TRYINIT_OFFSET UNITYSDK_OFFSET(0xA134340)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0xA134A50)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA135E20)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS__CTOR_OFFSET UNITYSDK_OFFSET(0xA135C70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLCCompass_TypeDefinitionIndex = 64403;

	class RogueDLCCompass : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_FINISH_STRONG_EFFECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5610);
		}
		static ::System::String** StaticGet_RTPC_MIDDLE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5618);
		}
		static ::System::String** StaticGet_INNER_STOP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5620);
		}
		static ::System::String** StaticGet_THREE_OVERLAP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5628);
		}
		static ::System::String** StaticGet_MIDDLE_SELECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5630);
		}
		static ::System::String** StaticGet_FINISH_WEAK_EFFECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5638);
		}
		static ::System::String** StaticGet_RTPC_INNER()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5640);
		}
		static ::System::String** StaticGet_MIDDLE_ROTATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5648);
		}
		static ::System::String** StaticGet_COUNTDOWN_START()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5650);
		}
		static ::System::String** StaticGet_TWO_OVERLAP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5658);
		}
		static ::System::String** StaticGet_MIDDLE_STOP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5660);
		}
		static ::System::String** StaticGet_COMPASS_FINISH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5668);
		}
		static ::System::String** StaticGet_COUNTDOWN_END()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		static ::System::String** StaticGet_OUTER_SELECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5678);
		}
		static ::System::String** StaticGet_RTPC_OUTER()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5680);
		}
		static ::System::String** StaticGet_COMPASS_FINISH_LV3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5688);
		}
		static ::System::String** StaticGet_OUTER_ROTATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5690);
		}
		static ::System::String** StaticGet_OUTER_STOP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x5698);
		}
		static ::System::String** StaticGet_INNER_ROTATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x56A0);
		}
		static ::System::String** StaticGet_INNER_SELECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x56A8);
		}
		::System::Collections::Generic::List_1<::System::Single>* SpeedScale; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* BufferingScale; // 0x20
		::System::Single StopTime; // 0x28
		::System::Int32 speedIndexOuter; // 0x2C
		::System::Int32 directionOuter; // 0x30
		::System::Int32 angleIndexOuter; // 0x34
		::System::Int32 speedIndexMiddle; // 0x38
		::System::Int32 directionMiddle; // 0x3C
		::System::Int32 angleIndexMiddle; // 0x40
		::System::Int32 speedIndexInner; // 0x44
		::System::Int32 directionInner; // 0x48
		::System::Int32 angleIndexInner; // 0x4C
		::Class_1_C37EA230867B3151* Field_5_12; // 0x50
		::Class_1_C37EA230867B3151* Field_5_13; // 0x58
		::Class_1_C37EA230867B3151* Field_5_14; // 0x60
		::RPG::Client::MultiLightEffectMaterialBlock* Field_5_15; // 0x68
		::System::Collections::Generic::List_1<::Class_1_C37EA230867B3151*>* Field_5_16; // 0x70
		::System::Int32 Field_5_17; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* Field_5_18; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_19; // 0x88
		::System::Boolean Field_5_20; // 0x90
		::System::Int32 Field_5_21; // 0x94
		::System::Boolean InChangingColor; // 0x98
		::System::Single Field_5_23; // 0x9C
		::System::Int32 Field_5_24; // 0xA0
		::System::Single Field_5_25; // 0xA4
		::System::Single Field_5_26; // 0xA8
		::System::Single Field_5_27; // 0xAC
		::System::Single Field_5_28; // 0xB0
		::System::Single Field_5_29; // 0xB4
		::System::Single Field_5_30; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS__CCTOR_OFFSET))();
		}

		::System::Boolean TryInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_TRYINIT_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_1659BCB6D1A9FC34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_1659BCB6D1A9FC34_OFFSET))(this);
		}

		::System::Void Method_5_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void Method_5_A40693E5C9D7EEF5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_A40693E5C9D7EEF5_OFFSET))(this, a1);
		}

		::System::Void Method_5_BD50D311A56B5E90(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_BD50D311A56B5E90_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_D4F7042B54090FE4(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_D4F7042B54090FE4_OFFSET))(this, a1, a2);
		}
	};
}
