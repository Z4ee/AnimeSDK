#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_DEBUGPLAYUIANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xCBE3C80)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_02AC375691BAA612_OFFSET UNITYSDK_OFFSET(0xCBE3BD0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xCBE3D30)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_EBAC71FBE1837205_1_OFFSET UNITYSDK_OFFSET(0xCBE3DD0)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xCBE3D80)
#define RPG_CLIENT_DEBUGPLAYUIANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE3E20)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugPlayUIAnimation_TypeDefinitionIndex = 68340;

	class DebugPlayUIAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* _Animation; // 0x18
		::System::String* _AnimName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_5_02AC375691BAA612()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_02AC375691BAA612_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}

		::System::Void Method_5_EBAC71FBE1837205()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_EBAC71FBE1837205_OFFSET))(this);
		}

		::System::Void Method_5_EBAC71FBE1837205_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPLAYUIANIMATION_METHOD_5_EBAC71FBE1837205_1_OFFSET))(this);
		}
	};
}
