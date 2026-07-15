#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ALLEYGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECBA30)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyGrid_TypeDefinitionIndex = 59520;

	class AlleyGrid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* configPath; // 0x18
		::UnityEngine::Vector2Int gridSize; // 0x20
		::System::Single unitSize; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Color>* normalOutlineColors; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGRID__CTOR_OFFSET))(this);
		}
	};
}
