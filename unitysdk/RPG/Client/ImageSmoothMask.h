#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ImageForSmoothMask; }
namespace RPG::Client { class ImageSmoothMask_Class_1_D5BDCDD69CF32034; }
namespace RPG::Client { class MonoMaskSlider; }
namespace RPG::Client { class MonoMaskSliderDash; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_IMAGESMOOTHMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x179667C0)
#define RPG_CLIENT_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET UNITYSDK_OFFSET(0x17964F50)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_1CCA678374876A08_OFFSET UNITYSDK_OFFSET(0x179668B0)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_1D71E7B379E7CC08_OFFSET UNITYSDK_OFFSET(0x17966AF0)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17966530)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x17965FF0)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x179666F0)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_A3233D9B1105D899_OFFSET UNITYSDK_OFFSET(0x179666A0)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_B3F39261B5412C77_OFFSET UNITYSDK_OFFSET(0x17966940)
#define RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x17965F80)
#define RPG_CLIENT_IMAGESMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17966820)
#define RPG_CLIENT_IMAGESMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x17967900)

namespace RPG::Client
{
	inline static constexpr unsigned int ImageSmoothMask_TypeDefinitionIndex = 69270;

	class ImageSmoothMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* maskShader; // 0x18
		::UnityEngine::UI::Image* maskImage; // 0x20
		::RPG::Client::ImageForSmoothMask* Field_5_2; // 0x28
		::UnityEngine::Material* Field_5_3; // 0x30
		::System::Int32 Field_5_4; // 0x38
		::RPG::Client::MonoMaskSlider* maskSlider; // 0x40
		::System::Boolean isMaskSliderDash; // 0x48
		::RPG::Client::MonoMaskSliderDash* maskSliderDash; // 0x50
		::System::Single coverRatio; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_CB7604B59F367726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_CB7604B59F367726_OFFSET))(this);
		}

		::System::Void Method_5_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_6916CB2AB9451DD7_OFFSET))(this);
		}

		::System::Void Method_5_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_999B8B439422C7E7_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_A3233D9B1105D899()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_A3233D9B1105D899_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_1CCA678374876A08(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_1CCA678374876A08_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* Method_5_B3F39261B5412C77(::UnityEngine::Sprite* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_B3F39261B5412C77_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::UIVertex>*>* GenerateUIQuads()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::UIVertex>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ImageSmoothMask_Class_1_D5BDCDD69CF32034*>* Method_5_1D71E7B379E7CC08(::UnityEngine::UI::Image* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ImageSmoothMask_Class_1_D5BDCDD69CF32034*>*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGESMOOTHMASK_METHOD_5_1D71E7B379E7CC08_OFFSET))(a1, a2);
		}
	};
}
