#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONONODESWITCHBYGAMEPAD_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C66540)
#define RPG_CLIENT_MONONODESWITCHBYGAMEPAD_METHOD_5_1752943C8EA15AFA_OFFSET UNITYSDK_OFFSET(0x18C66670)
#define RPG_CLIENT_MONONODESWITCHBYGAMEPAD_METHOD_5_4AF2A5D5BDF9E39E_OFFSET UNITYSDK_OFFSET(0x18C66840)
#define RPG_CLIENT_MONONODESWITCHBYGAMEPAD_METHOD_5_F16FCAE680E5B284_OFFSET UNITYSDK_OFFSET(0x18C667A0)
#define RPG_CLIENT_MONONODESWITCHBYGAMEPAD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C666E0)
#define RPG_CLIENT_MONONODESWITCHBYGAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18C66A20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNodeSwitchByGamepad_TypeDefinitionIndex = 69512;

	class MonoNodeSwitchByGamepad : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _ShowNodes; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _HideNodes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGAMEPAD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGAMEPAD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGAMEPAD_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_F16FCAE680E5B284(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGAMEPAD_METHOD_5_F16FCAE680E5B284_OFFSET))(this, a1);
		}

		::System::Void Method_5_1752943C8EA15AFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGAMEPAD_METHOD_5_1752943C8EA15AFA_OFFSET))(this);
		}

		::System::Void Method_5_4AF2A5D5BDF9E39E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGAMEPAD_METHOD_5_4AF2A5D5BDF9E39E_OFFSET))(this, a1);
		}
	};
}
