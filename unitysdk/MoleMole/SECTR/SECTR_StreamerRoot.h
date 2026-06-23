#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SECTR_SECTR_STREAMERROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF8820)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SECTR_StreamerRoot_TypeDefinitionIndex = 46349;

	class SECTR_StreamerRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* configName; // 0x18
		::System::String* worldName; // 0x20
		::System::Boolean manualLoadSector; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* SectorNameList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_STREAMERROOT__CTOR_OFFSET))(this);
		}
	};
}
