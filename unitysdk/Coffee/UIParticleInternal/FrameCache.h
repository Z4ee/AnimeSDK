#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIParticleInternal { class FrameCache_IFrameCache; }
namespace Coffee::UIParticleInternal { template <typename T> class FrameCache_FrameCacheContainer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COFFEE_UIPARTICLEINTERNAL_FRAMECACHE_CLEARALLCACHE_OFFSET UNITYSDK_OFFSET(0x1EE81F90)
#define COFFEE_UIPARTICLEINTERNAL_FRAMECACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE81D90)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FrameCache_TypeDefinitionIndex = 43938;

	class FrameCache : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Coffee::UIParticleInternal::FrameCache_IFrameCache*>** StaticGet_s_Caches()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Coffee::UIParticleInternal::FrameCache_IFrameCache*>**)Il2CppClass::FromTypeDefinitionIndex(FrameCache_TypeDefinitionIndex)->GetStaticField(0x1340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FRAMECACHE__CCTOR_OFFSET))();
		}

		static ::System::Void ClearAllCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FRAMECACHE_CLEARALLCACHE_OFFSET))();
		}
	};
}
