#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class RenderMaterial; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_27ED0FA25687D9E7_METHOD_1_6BCEC50FE7F9C103_OFFSET UNITYSDK_OFFSET(0x180ACF50)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_27ED0FA25687D9E7__CTOR_OFFSET UNITYSDK_OFFSET(0x180ACF40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_Class_1_27ED0FA25687D9E7_TypeDefinitionIndex = 70257;

	class ZNetEffectPlayableAsset_Class_1_27ED0FA25687D9E7 : public ::System::Object
	{
	public:
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_27ED0FA25687D9E7__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6BCEC50FE7F9C103(::MoleMole::Config::RenderMaterial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RenderMaterial*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_27ED0FA25687D9E7_METHOD_1_6BCEC50FE7F9C103_OFFSET))(this, a1);
		}
	};
}
