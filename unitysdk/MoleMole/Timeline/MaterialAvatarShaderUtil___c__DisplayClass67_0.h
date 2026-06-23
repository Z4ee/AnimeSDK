#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A6900)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS67_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_1_OFFSET UNITYSDK_OFFSET(0x1E5A6A60)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS67_0__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_0_OFFSET UNITYSDK_OFFSET(0x1E5A6910)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialAvatarShaderUtil___c__DisplayClass67_0_TypeDefinitionIndex = 32165;

	class MaterialAvatarShaderUtil___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_keywords_enable; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_shader_pass; // 0x18
		::UnityEngine::Material* material; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _MaterialChanged_g__AddShaderEnableAndRecorderInit_0(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS67_0__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_0_OFFSET))(this, key, value);
		}

		::System::Void _MaterialChanged_g__AddKeywordsEnableAndRecorderInit_1(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS67_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_1_OFFSET))(this, key, value);
		}
	};
}
