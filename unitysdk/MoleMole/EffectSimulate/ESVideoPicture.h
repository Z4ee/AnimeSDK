#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_GET__DURATION_OFFSET UNITYSDK_OFFSET(0x13828270)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_1AF4C58015AB75FD_OFFSET UNITYSDK_OFFSET(0x138277B0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x138289C0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_218124418542E081_OFFSET UNITYSDK_OFFSET(0x138284A0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13828FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x13828B50)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x13828FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_47001D5FF2C23FED_OFFSET UNITYSDK_OFFSET(0x13829060)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_58861B758FE41043_OFFSET UNITYSDK_OFFSET(0x13827760)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13828B10)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_CC11D045CAA14F48_OFFSET UNITYSDK_OFFSET(0x13828140)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x138283C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESVideoPicture_TypeDefinitionIndex = 73592;

	class ESVideoPicture : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* LEAP_FRAME_GROUP_NAME; // 0x0
		::UnityEngine::AnimationCurve* playCurve; // 0x58
		::System::Int32 fps; // 0x60
		::System::Int32 beforeLeapFrame; // 0x64
		::System::Int32 afterLeapFrame; // 0x68
		::System::String* materialProperty; // 0x70
		::UnityEngine::Object* fileFolder; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Texture*>* textures; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_58861B758FE41043(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_58861B758FE41043_OFFSET))(this, a1);
		}

		::System::Void Method_3_1AF4C58015AB75FD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_1AF4C58015AB75FD_OFFSET))(this, a1);
		}

		::System::Single get__duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_GET__DURATION_OFFSET))(this);
		}

		::System::Single Method_3_CC11D045CAA14F48()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_CC11D045CAA14F48_OFFSET))(this);
		}

		::System::Void Method_3_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Single Method_3_1EDDD623459E1A71()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_1EDDD623459E1A71_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_3_47001D5FF2C23FED()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_METHOD_3_47001D5FF2C23FED_OFFSET))(this);
		}
	};
}
