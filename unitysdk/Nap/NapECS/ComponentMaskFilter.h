#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/ComponentMaskFilter_ComplexMask.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_COMPONENTMASKFILTER_ALL_OFFSET UNITYSDK_OFFSET(0x1C833E80)
#define NAP_NAPECS_COMPONENTMASKFILTER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C832820)
#define NAP_NAPECS_COMPONENTMASKFILTER_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1C8325B0)
#define NAP_NAPECS_COMPONENTMASKFILTER_GET_CACHEMASK_OFFSET UNITYSDK_OFFSET(0x1C832510)
#define NAP_NAPECS_COMPONENTMASKFILTER_ISPASS_OFFSET UNITYSDK_OFFSET(0x1C8329E0)
#define NAP_NAPECS_COMPONENTMASKFILTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C833B30)
#define NAP_NAPECS_COMPONENTMASKFILTER_MARKCACHEDIRTY_OFFSET UNITYSDK_OFFSET(0x1C832650)
#define NAP_NAPECS_COMPONENTMASKFILTER_RESETCACHE_OFFSET UNITYSDK_OFFSET(0x1C8326E0)
#define NAP_NAPECS_COMPONENTMASKFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C834350)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentMaskFilter_TypeDefinitionIndex = 38045;

	class ComponentMaskFilter : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsWorld* _cachedWorld; // 0x10
		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* _cachedComponentMask; // 0x18
		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* _buffer; // 0x20
		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMaskFilter_ComplexMask>* _complexMasks; // 0x28
		::Nap::NapECS::ComponentMask _noneMask; // 0x30
		::Nap::NapECS::ComponentMask _allMask; // 0x70
		::System::Nullable_1<::System::UInt32> _cachedVersion; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* get_CacheMask()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_GET_CACHEMASK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* get_Buffer()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_GET_BUFFER_OFFSET))(this);
		}

		::System::Void MarkCacheDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_MARKCACHEDIRTY_OFFSET))(this);
		}

		::System::Void ResetCache(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_RESETCACHE_OFFSET))(this, world);
		}

		::System::Collections::Generic::List_1_Enumerator<::Nap::NapECS::ComponentMask> GetEnumerator(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Collections::Generic::List_1_Enumerator<::Nap::NapECS::ComponentMask>(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_GETENUMERATOR_OFFSET))(this, world);
		}

		::System::Boolean IsPass(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_ISPASS_OFFSET))(this, mask);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_ISVALID_OFFSET))(this);
		}

		::Nap::NapECS::ComponentMaskFilter* All(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::Nap::NapECS::ComponentMaskFilter*(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASKFILTER_ALL_OFFSET))(this, mask);
		}
	};
}
