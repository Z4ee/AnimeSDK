#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ImageForSmoothMask; }
namespace MoleMole { class ImageSmoothMask_Class_1_D5BDCDD69CF32034; }
namespace MoleMole { class MonoMaskSlider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_IMAGESMOOTHMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x13024640)
#define MOLEMOLE_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET UNITYSDK_OFFSET(0x13024F90)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x13026AF0)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_1D670D366F907230_OFFSET UNITYSDK_OFFSET(0x13025B60)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_2DA7CE0F9FC6E25D_OFFSET UNITYSDK_OFFSET(0x13026A30)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x13024690)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_6D8E8D1FC2488E6B_OFFSET UNITYSDK_OFFSET(0x130245F0)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_9565113CC7999630_OFFSET UNITYSDK_OFFSET(0x13026390)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x130265C0)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x13026B50)
#define MOLEMOLE_IMAGESMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13024BF0)
#define MOLEMOLE_IMAGESMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13024580)
#define MOLEMOLE_IMAGESMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x13026330)

namespace MoleMole
{
	inline static constexpr unsigned int ImageSmoothMask_TypeDefinitionIndex = 85865;

	class ImageSmoothMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _matPath; // 0x0
		::Foundation::AssetRequestHandle Field_5_1; // 0x18
		::UnityEngine::UI::Image* maskImage; // 0x38
		::MoleMole::ImageForSmoothMask* Field_5_3; // 0x40
		::UnityEngine::Material* Field_5_4; // 0x48
		::MoleMole::MonoMaskSlider* maskSlider; // 0x50
		::System::Single coverRatio; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GenerateUIQuads(::System::Collections::Generic::List_1<::System::Object*>*& a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* Method_5_9565113CC7999630(::UnityEngine::Sprite* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_9565113CC7999630_OFFSET))(a1);
		}

		::System::Void Method_5_99053D1AE5A59190()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_99053D1AE5A59190_OFFSET))(this);
		}

		::System::Void Method_5_2DA7CE0F9FC6E25D(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_2DA7CE0F9FC6E25D_OFFSET))(this, a1);
		}

		::System::Void Method_5_19B91D58E02869BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_19B91D58E02869BC_OFFSET))(this);
		}

		::System::Void Method_5_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_999B8B439422C7E7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_6D8E8D1FC2488E6B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_6D8E8D1FC2488E6B_OFFSET))(this);
		}

		::System::Void Method_5_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_6916CB2AB9451DD7_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::MoleMole::ImageSmoothMask_Class_1_D5BDCDD69CF32034*>* Method_5_1D670D366F907230(::UnityEngine::UI::Image* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ImageSmoothMask_Class_1_D5BDCDD69CF32034*>*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_1D670D366F907230_OFFSET))(a1, a2);
		}
	};
}
