#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_44D9B1A97BC4F823;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MultiLightEffectMaterialBlock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_8C3BC87CC267BAC7_OFFSET UNITYSDK_OFFSET(0x166465F0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16645A80)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_BD50D311A56B5E90_OFFSET UNITYSDK_OFFSET(0x16646740)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_C8110F9A5AB27813_OFFSET UNITYSDK_OFFSET(0x166461C0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x16645B40)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_D4F7042B54090FE4_OFFSET UNITYSDK_OFFSET(0x16646970)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_STOP_OFFSET UNITYSDK_OFFSET(0x16645680)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_TRYINIT_OFFSET UNITYSDK_OFFSET(0x16644E80)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x16645840)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16646E10)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x16646AD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLCCompass_TypeDefinitionIndex = 78482;

	class RogueDLCCompass : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_MIDDLE_ROTATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F220);
		}
		static ::System::String** StaticGet_OUTER_ROTATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F228);
		}
		static ::System::String** StaticGet_INNER_SELECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F230);
		}
		static ::System::String** StaticGet_COUNTDOWN_END()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F238);
		}
		static ::System::String** StaticGet_RTPC_OUTER()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F240);
		}
		static ::System::String** StaticGet_INNER_STOP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F248);
		}
		static ::System::String** StaticGet_COUNTDOWN_START()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F250);
		}
		static ::System::String** StaticGet_MIDDLE_SELECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F258);
		}
		static ::System::String** StaticGet_TWO_OVERLAP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F260);
		}
		static ::System::String** StaticGet_RTPC_MIDDLE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F268);
		}
		static ::System::String** StaticGet_COMPASS_FINISH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F270);
		}
		static ::System::String** StaticGet_INNER_ROTATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F278);
		}
		static ::System::String** StaticGet_FINISH_WEAK_EFFECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F280);
		}
		static ::System::String** StaticGet_THREE_OVERLAP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F288);
		}
		static ::System::String** StaticGet_OUTER_STOP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F290);
		}
		static ::System::String** StaticGet_OUTER_SELECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F298);
		}
		static ::System::String** StaticGet_MIDDLE_STOP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F2A0);
		}
		static ::System::String** StaticGet_COMPASS_FINISH_LV3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F2A8);
		}
		static ::System::String** StaticGet_FINISH_STRONG_EFFECT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F2B0);
		}
		static ::System::String** StaticGet_RTPC_INNER()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCCompass_TypeDefinitionIndex)->GetStaticField(0x3F2B8);
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
		::Class_1_44D9B1A97BC4F823* CBLAFHGGLHE; // 0x50
		::Class_1_44D9B1A97BC4F823* NIICNGILHGO; // 0x58
		::Class_1_44D9B1A97BC4F823* LOIABNPGPLC; // 0x60
		::RPG::Client::MultiLightEffectMaterialBlock* HPNMGOLAMAH; // 0x68
		::System::Collections::Generic::List_1<::Class_1_44D9B1A97BC4F823*>* NJGNPOIFHLA; // 0x70
		::System::Int32 NCDEGDCPCHN; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* ENCHFAKMAGA; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* CACINMJCLCC; // 0x88
		::System::Boolean HDJOGGDMCIO; // 0x90
		::System::Int32 PAEKGHFACCJ; // 0x94
		::System::Boolean InChangingColor; // 0x98
		::System::Single JEGDGFDAMKL; // 0x9C
		::System::Int32 DDBLFAKICFL; // 0xA0
		::System::Single PDDDOLHLFDC; // 0xA4
		::System::Single CIKOAICCDCO; // 0xA8
		::System::Single MEIIELDCPCO; // 0xAC
		::System::Single BFILFBPDLEF; // 0xB0
		::System::Single PIAJMODAKGK; // 0xB4
		::System::Single FJMMAGJDJDC; // 0xB8

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

		::System::Void Method_5_CC99BBFAC9417CA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_CC99BBFAC9417CA7_OFFSET))(this);
		}

		::System::Void Method_5_C8110F9A5AB27813()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_C8110F9A5AB27813_OFFSET))(this);
		}

		::System::Void Method_5_8C3BC87CC267BAC7(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_METHOD_5_8C3BC87CC267BAC7_OFFSET))(this, a1);
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
