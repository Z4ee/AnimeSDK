#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18ED21E0)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB_GET_KEY_OFFSET UNITYSDK_OFFSET(0x18ED21D0)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB_RELEASEMASKRT_OFFSET UNITYSDK_OFFSET(0x18ED2120)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ED2CF0)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED21C0)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB__ENSUREMASKRT_OFFSET UNITYSDK_OFFSET(0x18ED2B40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ColorGradingMaskManager_MaskCb_TypeDefinitionIndex = 35442;

	class ColorGradingMaskManager_MaskCb : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__outputValID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskManager_MaskCb_TypeDefinitionIndex)->GetStaticField(0x12E30);
		}
		// static const ::System::Boolean _halfRes; // 0x0
		::UnityEngine::RenderTexture* _maskRT; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB__CCTOR_OFFSET))();
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _EnsureMaskRT(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB__ENSUREMASKRT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseMaskRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_MASKCB_RELEASEMASKRT_OFFSET))(this);
		}
	};
}
