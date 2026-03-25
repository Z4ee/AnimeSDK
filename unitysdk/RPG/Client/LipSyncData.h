#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhonemeMarker.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIPSYNCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x85B2D30)

namespace RPG::Client
{
	inline static constexpr unsigned int LipSyncData_TypeDefinitionIndex = 37946;

	class LipSyncData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PhonemeMarker>* phonemeMarkers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIPSYNCDATA__CTOR_OFFSET))(this);
		}
	};
}
