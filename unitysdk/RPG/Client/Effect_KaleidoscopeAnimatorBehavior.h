#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_KaleidoscopeAnimatorMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xCD40C80)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD40C00)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xCD3E1A0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xCD3E150)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCD3E0E0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_63A8438E4C8CEB3A_OFFSET UNITYSDK_OFFSET(0xCD40DA0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_7D2C7213E6B374D8_OFFSET UNITYSDK_OFFSET(0xCD3E780)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCD3E660)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xCD3E6A0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xCD3E6E0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCD3E620)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD3E720)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD414B0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCD414A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_KaleidoscopeAnimatorBehavior_TypeDefinitionIndex = 70492;

	class Effect_KaleidoscopeAnimatorBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__InstanceColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_KaleidoscopeAnimatorBehavior_TypeDefinitionIndex)->GetStaticField(0xC420);
		}
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* _Matrices; // 0x38
		::Il2CppArray<::UnityEngine::Vector4>* _Colors; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x48
		::System::Int32 _HeightAmount; // 0x50
		::System::Int32 _CircleAmount; // 0x54
		::System::Int32 _ThicknessAmount; // 0x58
		::System::Int32 _TotalAmount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_7D2C7213E6B374D8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_7D2C7213E6B374D8_OFFSET))(this, a1);
		}

		::System::Void Method_3_071850D2764E9D4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_071850D2764E9D4C_OFFSET))(this);
		}

		::System::Void Method_3_63A8438E4C8CEB3A(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_METHOD_3_63A8438E4C8CEB3A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Single get_TotalTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET_TOTALTIME_OFFSET))(this);
		}

		::RPG::Client::Effect_KaleidoscopeAnimatorMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_KaleidoscopeAnimatorMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
