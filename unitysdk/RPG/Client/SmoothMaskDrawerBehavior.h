#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class SmoothMaskDrawer; }
namespace UnityEngine { class MaterialAnimationBinding; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE0AD4F0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE0ACFA0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE0ACEA0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xE0AD020)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE0AD440)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE0AD3C0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE0AD4A0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_CEBFF096B4C9D46B_1_OFFSET UNITYSDK_OFFSET(0xE0AD790)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xE0AD070)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_DC2911BC8B5CED9A_OFFSET UNITYSDK_OFFSET(0xE0AD630)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE0ADAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SmoothMaskDrawerBehavior_TypeDefinitionIndex = 71020;

	class SmoothMaskDrawerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::RPG::Client::SmoothMaskDrawer** StaticGet_OnlySmoothMaskDrawer()
		{
			return (::RPG::Client::SmoothMaskDrawer**)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskDrawerBehavior_TypeDefinitionIndex)->GetStaticField(0x278D0);
		}
		::UnityEngine::Vector2Int _Resolution; // 0x38
		::UnityEngine::MaterialAnimationBinding* _MaterialAnimationBinding; // 0x40
		::UnityEngine::UI::SmoothMask* _SmoothMask; // 0x48
		::UnityEngine::RenderTexture* _SmoothMaskTexture; // 0x50
		::System::Int32 _SrcBlendShaderProperty; // 0x58
		::System::Int32 _DstBlendShaderProperty; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_3_30A2382C3FCC5386()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_CEBFF096B4C9D46B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_CEBFF096B4C9D46B_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_3_DC2911BC8B5CED9A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_DC2911BC8B5CED9A_OFFSET))(this);
		}

		::System::Void Method_3_CEBFF096B4C9D46B_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_METHOD_3_CEBFF096B4C9D46B_1_OFFSET))(this);
		}

		::RPG::Client::SmoothMaskDrawer* get__Owner()
		{
			return ((::RPG::Client::SmoothMaskDrawer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
