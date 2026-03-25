#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_ScreenCrack_MatTexItem; }

#define RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_2F381734DBBAB430_OFFSET UNITYSDK_OFFSET(0x957E460)
#define RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_4ADE96F0541BC427_OFFSET UNITYSDK_OFFSET(0x957E690)
#define RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x957E630)
#define RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_99D848AEA005759A_OFFSET UNITYSDK_OFFSET(0x957E7C0)
#define RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x957DF70)
#define RPG_CLIENT_EFFECT_SCREENCRACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x957E3D0)
#define RPG_CLIENT_EFFECT_SCREENCRACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x957E1F0)
#define RPG_CLIENT_EFFECT_SCREENCRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x957DF10)
#define RPG_CLIENT_EFFECT_SCREENCRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x957E9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ScreenCrack_TypeDefinitionIndex = 57777;

	class Effect_ScreenCrack : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::Effect_ScreenCrack_MatTexItem*>* MatTexMapping; // 0x18
		::System::Boolean IsFrameCapture; // 0x20
		::UnityEngine::Vector3 Field_5_2; // 0x24
		::System::Boolean Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Boolean Method_5_4ADE96F0541BC427(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_4ADE96F0541BC427_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_95FC878EB184D294()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_95FC878EB184D294_OFFSET))(this);
		}

		::System::Void Method_5_99D848AEA005759A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_99D848AEA005759A_OFFSET))(this);
		}

		::System::Void Method_5_2F381734DBBAB430()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_METHOD_5_2F381734DBBAB430_OFFSET))(this);
		}
	};
}
