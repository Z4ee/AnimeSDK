#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ReferencePool_AutoReleaseReferenceObjectDatas.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_GET_OFFSET UNITYSDK_OFFSET(0x1D2F6D60)
#define RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F6EB0)
#define RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F6EA0)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_AutoReleaseReferenceObjectCollectorRegistry_TypeDefinitionIndex = 5628;

	class ReferencePool_AutoReleaseReferenceObjectCollectorRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::RPG::ReferencePool_AutoReleaseReferenceObjectDatas>** StaticGet_AutoReleaseRefrenceDataDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::RPG::ReferencePool_AutoReleaseReferenceObjectDatas>**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_AutoReleaseReferenceObjectCollectorRegistry_TypeDefinitionIndex)->GetStaticField(0x3E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY__CCTOR_OFFSET))();
		}

		static ::RPG::ReferencePool_AutoReleaseReferenceObjectDatas Get(::System::RuntimeTypeHandle a1)
		{
			return ((::RPG::ReferencePool_AutoReleaseReferenceObjectDatas(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_GET_OFFSET))(a1);
		}
	};
}
