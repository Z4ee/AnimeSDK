#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_947F5BB3E2AFC4CE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1793E080)
#define CLASS_1_947F5BB3E2AFC4CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1793E070)

inline static constexpr unsigned int Class_1_947F5BB3E2AFC4CE_TypeDefinitionIndex = 48955;

class Class_1_947F5BB3E2AFC4CE : public ::System::Object
{
public:
	::UnityEngine::Timeline::TrackAsset* CIBMFKKGFGN; // 0x10
	::System::String* KNAPCKONKFE; // 0x18
	::UnityEngine::GameObject* BNOMDLCNPMN; // 0x20
	::UnityEngine::GameObject* CGMNHAEFLEP; // 0x28
	::System::String* NLCHJCDAKCB; // 0x30

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_947F5BB3E2AFC4CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_947F5BB3E2AFC4CE__CTOR_1_OFFSET))(this, a1, a2);
	}
};
