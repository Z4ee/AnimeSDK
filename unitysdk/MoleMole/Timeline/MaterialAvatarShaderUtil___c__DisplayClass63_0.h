#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C287450)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS63_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_1_OFFSET UNITYSDK_OFFSET(0x1C2875B0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS63_0__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_0_OFFSET UNITYSDK_OFFSET(0x1C287460)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialAvatarShaderUtil___c__DisplayClass63_0_TypeDefinitionIndex = 30619;

	class MaterialAvatarShaderUtil___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* material; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_shader_pass; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_keywords_enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _MaterialChanged_g__AddShaderEnableAndRecorderInit_0(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS63_0__MATERIALCHANGED_G__ADDSHADERENABLEANDRECORDERINIT_0_OFFSET))(this, key, value);
		}

		::System::Void _MaterialChanged_g__AddKeywordsEnableAndRecorderInit_1(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL___C__DISPLAYCLASS63_0__MATERIALCHANGED_G__ADDKEYWORDSENABLEANDRECORDERINIT_1_OFFSET))(this, key, value);
		}
	};
}
