#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F98DC10)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINITSKIPKEYSET_1_OFFSET UNITYSDK_OFFSET(0x1F98DD60)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_2_OFFSET UNITYSDK_OFFSET(0x1F98DE70)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_0_OFFSET UNITYSDK_OFFSET(0x1F98DC20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialAvatarShaderUtil___c__DisplayClass66_0_TypeDefinitionIndex = 32795;

	class MaterialAvatarShaderUtil___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_shader_pass; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_keywords_enable; // 0x18
		::UnityEngine::Material* material; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _MaterialChanged_g__AddShaderEnableAndRecorderInit_0(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_0_OFFSET))(this, key, value);
		}

		::System::Void _MaterialChanged_g__AddKeywordsEnableAndRecorderInitSkipKeySet_1(::System::String* key, ::System::Boolean value, ::System::Boolean skipSetKeywords)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINITSKIPKEYSET_1_OFFSET))(this, key, value, skipSetKeywords);
		}

		::System::Void _MaterialChanged_g__AddKeywordsEnableAndRecorderInit_2(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS66_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_2_OFFSET))(this, key, value);
		}
	};
}
