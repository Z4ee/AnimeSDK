#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EmoBlendShapesConfig_BlendShapesConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A4B940)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4B980)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__GET__GETBLENDNAMES_B__5_0_OFFSET UNITYSDK_OFFSET(0x19A4B990)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionBlendShapeBehaviour___c_TypeDefinitionIndex = 46964;

	class EmoDiscussionBlendShapeBehaviour___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::EmoBlendShapesConfig_BlendShapesConfig*, ::System::String*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::EmoBlendShapesConfig_BlendShapesConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EmoDiscussionBlendShapeBehaviour___c_TypeDefinitionIndex)->GetStaticField(0x6B4E0);
		}
		static ::RPGTools::Timeline::Emotion::EmoDiscussionBlendShapeBehaviour___c** StaticGet___9()
		{
			return (::RPGTools::Timeline::Emotion::EmoDiscussionBlendShapeBehaviour___c**)Il2CppClass::FromTypeDefinitionIndex(EmoDiscussionBlendShapeBehaviour___c_TypeDefinitionIndex)->GetStaticField(0x6B4E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__CTOR_OFFSET))(this);
		}

		::System::String* _get__GetBlendNames_b__5_0(::RPG::Client::EmoBlendShapesConfig_BlendShapesConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::EmoBlendShapesConfig_BlendShapesConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPEBEHAVIOUR___C__GET__GETBLENDNAMES_B__5_0_OFFSET))(this, a1);
		}
	};
}
