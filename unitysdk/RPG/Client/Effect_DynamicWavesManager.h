#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitCacheData.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_IntervalState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CLEARHITDATA_OFFSET UNITYSDK_OFFSET(0xB84BA30)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB84A980)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_097889028E95301C_OFFSET UNITYSDK_OFFSET(0xB84B740)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_0C83273C8E891A7D_OFFSET UNITYSDK_OFFSET(0xB84BDE0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB84A260)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0xB84A5B0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB84A830)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_6735D87E90F99030_OFFSET UNITYSDK_OFFSET(0xB84BBF0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0xB84BAB0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_78DE1569AE48596D_OFFSET UNITYSDK_OFFSET(0xB84C040)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_7AE1B3E28F328DA0_OFFSET UNITYSDK_OFFSET(0xB84BF00)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xB84A380)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_8347A1099A618012_OFFSET UNITYSDK_OFFSET(0xB84C2B0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xB84AA10)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xB84AAD0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_DF9C4DFC36CBDE06_OFFSET UNITYSDK_OFFSET(0xB84B1E0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_F24481701D40D533_OFFSET UNITYSDK_OFFSET(0xB84ACB0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB84A7E0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB84A330)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_SETHITPOINT_OFFSET UNITYSDK_OFFSET(0xB84B470)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_START_OFFSET UNITYSDK_OFFSET(0xB84A210)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB84C340)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_DynamicWavesManager_TypeDefinitionIndex = 65873;

	class Effect_DynamicWavesManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::Single Field_5_1; // 0x0
		::Il2CppArray<::UnityEngine::Material*>* MatList; // 0x18
		::UnityEngine::Texture* DynamicWaveMask; // 0x20
		::System::Single DynamicMaskUVAlphaGradientOffset; // 0x28
		::System::Single DynamicMaskUVTimeScale; // 0x2C
		::System::Single DynamicMaskUVNoiseIntensity; // 0x30
		::System::Single DynamicMaskClampValue; // 0x34
		::System::Single DynamicMaskClampRange; // 0x38
		::System::Single NearIntervalDis; // 0x3C
		::System::Single OverlayIntervalDis; // 0x40
		::System::Single OverlayIntervalPassTime; // 0x44
		::System::Single OverlayIntervalOffsetPassTime; // 0x48
		::UnityEngine::AnimationCurve* TimeScaleCurve; // 0x50
		::System::Single MaxTimeScale; // 0x58
		::System::Single TimeUVScale; // 0x5C
		::System::Single RandomRad; // 0x60
		::System::Single UpdateDis; // 0x64
		::System::Single TimeInterval; // 0x68
		::System::Single RandomTimeInterval; // 0x6C
		::UnityEngine::Color EffectMultiplyColor; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* PointBounds; // 0x80
		::System::Boolean _MatKeywordState; // 0x88
		::Il2CppArray<::UnityEngine::Vector4>* _DynamicWaveBaseData; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitCacheData>* _TargetHitDataCache; // 0x98
		::System::Single Field_5_25; // 0xA0
		::UnityEngine::Vector2 Field_5_26; // 0xA4
		::UnityEngine::Vector2 Field_5_27; // 0xAC
		::UnityEngine::Vector4 Field_5_28; // 0xB4
		::System::Single Field_5_29; // 0xC4
		::Il2CppArray<::System::Boolean>* Field_5_30; // 0xC8
		::Il2CppArray<::System::Boolean>* Field_5_31; // 0xD0
		::Il2CppArray<::UnityEngine::Vector2>* Field_5_32; // 0xD8
		::UnityEngine::Matrix4x4 Field_5_33; // 0xE0
		::UnityEngine::Matrix4x4 Field_5_34; // 0x120
		::System::Int32 Field_5_35; // 0x160
		::System::Int32 Field_5_36; // 0x164
		::System::Boolean Field_5_37; // 0x168
		::System::Boolean Field_5_38; // 0x169

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetHitPoint(::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_SETHITPOINT_OFFSET))(this, a1);
		}

		::System::Void ClearHitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CLEARHITDATA_OFFSET))(this);
		}

		::System::Void Method_5_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void Method_5_3A599F23178B2776()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_3A599F23178B2776_OFFSET))(this);
		}

		::System::Void Method_5_6E520D7D4D494BBE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_6E520D7D4D494BBE_OFFSET))(this, a1);
		}

		::System::Void Method_5_F24481701D40D533(::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitCacheData>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitCacheData>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_F24481701D40D533_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_6735D87E90F99030(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_6735D87E90F99030_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_5_7AE1B3E28F328DA0(::UnityEngine::Vector4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_7AE1B3E28F328DA0_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_78DE1569AE48596D(::UnityEngine::Vector4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_78DE1569AE48596D_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_8A76897D6A693475()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_8A76897D6A693475_OFFSET))(this);
		}

		::System::Void Method_5_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Void Method_5_DF9C4DFC36CBDE06(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_DF9C4DFC36CBDE06_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_DynamicWavesManager_IntervalState Method_5_0C83273C8E891A7D(::System::Boolean a1)
		{
			return ((::RPG::Client::Effect_DynamicWavesManager_IntervalState(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_0C83273C8E891A7D_OFFSET))(this, a1);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Boolean Method_5_097889028E95301C(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_097889028E95301C_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_8347A1099A618012(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_METHOD_5_8347A1099A618012_OFFSET))(this, a1, a2);
		}
	};
}
