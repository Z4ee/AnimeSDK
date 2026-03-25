#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34601470C357B61B;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_1B839C6E2E9774D0_1_OFFSET UNITYSDK_OFFSET(0x9DDDC80)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_1B839C6E2E9774D0_OFFSET UNITYSDK_OFFSET(0x9DDDAB0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_818C8938061AC0D4_OFFSET UNITYSDK_OFFSET(0x9DE8610)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9DE85D0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_D76778020DDB2FEC_OFFSET UNITYSDK_OFFSET(0x9DDD670)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9DDE850)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE8870)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_SpectrumEffectElementVisualBase_TypeDefinitionIndex = 58029;

	class MusicVisualization_SpectrumEffectElementVisualBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ChildGOList0; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ChildGOList1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E9A575D18A0748D9(::Class_1_34601470C357B61B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_1_D76778020DDB2FEC(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_D76778020DDB2FEC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_1B839C6E2E9774D0(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_1B839C6E2E9774D0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1B839C6E2E9774D0_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_1B839C6E2E9774D0_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_818C8938061AC0D4(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_METHOD_1_818C8938061AC0D4_OFFSET))(this, a1, a2);
		}
	};
}
