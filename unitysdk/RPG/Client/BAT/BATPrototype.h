#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdPrototype.h"

namespace RPG::Client::BAT { class BATPrototype_RendererPackage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BAT_BATPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x9164100)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATPrototype_TypeDefinitionIndex = 60384;

	class BATPrototype : public ::RPG::Client::CrowdAnimator::CrowdPrototype
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BAT::BATPrototype_RendererPackage*>* RendererPackages; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATPROTOTYPE__CTOR_OFFSET))(this);
		}
	};
}
