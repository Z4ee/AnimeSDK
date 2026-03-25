#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::CustomRP { class LensFlareElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LENSFLAREPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x99745C0)

namespace RPG::Client
{
	inline static constexpr unsigned int LensFlareProfile_TypeDefinitionIndex = 57428;

	class LensFlareProfile : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single DephtBias; // 0x18
		::System::Single SampleRedius; // 0x1C
		::System::Single ColorThreshold; // 0x20
		::System::Collections::Generic::List_1<::RPG::CustomRP::LensFlareElement*>* LensFlareElements; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LENSFLAREPROFILE__CTOR_OFFSET))(this);
		}
	};
}
