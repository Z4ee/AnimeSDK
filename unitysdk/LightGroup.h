#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class LightSetting; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIGHTGROUP_GETLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x11BF68E0)
#define LIGHTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x11BF69C0)

inline static constexpr unsigned int LightGroup_TypeDefinitionIndex = 64039;

class LightGroup : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LightSetting*>* settings; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTGROUP__CTOR_OFFSET))(this);
	}

	::MoleMole::LightSetting* GetLightSetting(::System::Int32 id)
	{
		return ((::MoleMole::LightSetting*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIGHTGROUP_GETLIGHTSETTING_OFFSET))(this, id);
	}
};
