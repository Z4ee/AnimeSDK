#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/StringAnimationCurve.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17030AF0)
#define MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17030F60)
#define MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x17031440)
#define MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x170316A0)
#define MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x170316B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimationCurveLibrary_TypeDefinitionIndex = 58967;

	class AnimationCurveLibrary : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean isMainLibrary; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* StandardCurveLibrary; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::StringAnimationCurve>* StandardCurveDatas; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* BaseCurveLibrary; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Config::StringAnimationCurve>* BaseCurveDatas; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* CustomCurveLibrary; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::Config::StringAnimationCurve>* CustomCurveDatas; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCURVELIBRARY___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
