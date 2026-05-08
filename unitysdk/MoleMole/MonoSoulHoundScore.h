#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_A9A857AD270B9CE1;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOSOULHOUNDSCORE_METHOD_5_448C960F8C07057B_OFFSET UNITYSDK_OFFSET(0x10BD5590)
#define MOLEMOLE_MONOSOULHOUNDSCORE_PAUSE_OFFSET UNITYSDK_OFFSET(0x10BD5770)
#define MOLEMOLE_MONOSOULHOUNDSCORE_SHOWSCORENUMBER_OFFSET UNITYSDK_OFFSET(0x10BD51E0)
#define MOLEMOLE_MONOSOULHOUNDSCORE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10BD5920)
#define MOLEMOLE_MONOSOULHOUNDSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD59C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSoulHoundScore_TypeDefinitionIndex = 60479;

	class MonoSoulHoundScore : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_4; // 0x0
		// static const ::System::String* Field_5_5; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* scoreImgList; // 0x18
		::UnityEngine::RectTransform* selfTran; // 0x20
		::UnityEngine::Animation* anim; // 0x28
		::System::String* numberIconFloderPath; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_6; // 0x38
		::System::Single Field_5_7; // 0x40
		::System::Action* Field_5_8; // 0x48
		::System::Single Field_5_9; // 0x50
		::System::Boolean Field_5_10; // 0x54
		::System::Boolean Field_5_11; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE__CTOR_OFFSET))(this);
		}

		::System::Void ShowScoreNumber(::System::Int32 a1, ::Class_2_A9A857AD270B9CE1* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_A9A857AD270B9CE1*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_SHOWSCORENUMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_PAUSE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_UPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Method_5_448C960F8C07057B(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_METHOD_5_448C960F8C07057B_OFFSET))(this, a1);
		}
	};
}
