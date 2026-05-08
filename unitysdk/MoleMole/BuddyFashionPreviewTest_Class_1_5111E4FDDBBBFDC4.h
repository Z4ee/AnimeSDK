#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CLASS_1_5111E4FDDBBBFDC4_METHOD_1_2C670D42760DEABF_OFFSET UNITYSDK_OFFSET(0x124003F0)
#define MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CLASS_1_5111E4FDDBBBFDC4__CTOR_OFFSET UNITYSDK_OFFSET(0x124003E0)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPreviewTest_Class_1_5111E4FDDBBBFDC4_TypeDefinitionIndex = 61782;

	class BuddyFashionPreviewTest_Class_1_5111E4FDDBBBFDC4 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* Field_1_2; // 0x10
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_0; // 0x18
		::System::Int32 Field_1_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CLASS_1_5111E4FDDBBBFDC4__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_2C670D42760DEABF(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPREVIEWTEST_CLASS_1_5111E4FDDBBBFDC4_METHOD_1_2C670D42760DEABF_OFFSET))(this, a1, a2);
		}
	};
}
