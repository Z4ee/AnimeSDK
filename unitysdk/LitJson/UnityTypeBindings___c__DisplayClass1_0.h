#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace LitJson { class JsonWriter; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6660F0)
#define LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__REGISTER_B__10_OFFSET UNITYSDK_OFFSET(0x1F6661D0)
#define LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__REGISTER_B__3_OFFSET UNITYSDK_OFFSET(0x1F666100)
#define LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__REGISTER_B__5_OFFSET UNITYSDK_OFFSET(0x1F666160)

namespace LitJson
{
	inline static constexpr unsigned int UnityTypeBindings___c__DisplayClass1_0_TypeDefinitionIndex = 8333;

	class UnityTypeBindings___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::Vector2, ::LitJson::JsonWriter*>* writeVector2; // 0x10
		::System::Action_2<::UnityEngine::Vector3, ::LitJson::JsonWriter*>* writeVector3; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _Register_b__3(::UnityEngine::Vector2 v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__REGISTER_B__3_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__5(::UnityEngine::Vector3 v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__REGISTER_B__5_OFFSET))(this, v, w);
		}

		::System::Void _Register_b__10(::UnityEngine::Bounds v, ::LitJson::JsonWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_UNITYTYPEBINDINGS___C__DISPLAYCLASS1_0__REGISTER_B__10_OFFSET))(this, v, w);
		}
	};
}
