#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEOUTPUTOBJ_SETLASERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1483DB80)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEOUTPUTOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1483DF30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleOutputObj_TypeDefinitionIndex = 74711;

	class LaserTurnablePuzzleOutputObj : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* LaserObj; // 0x18
		::System::Int32 InitDegree; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEOUTPUTOBJ__CTOR_OFFSET))(this);
		}

		::System::Void SetLaserVisible(::System::Boolean a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEOUTPUTOBJ_SETLASERVISIBLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
