#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIHOYO_SDK_SERVERREGIONMANAGER_DOMAINREGION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1842CE50)
#define MIHOYO_SDK_SERVERREGIONMANAGER_DOMAINREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1842CE40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerRegionManager_DomainRegion_TypeDefinitionIndex = 7911;

	class ServerRegionManager_DomainRegion : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ValidRegions()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_DomainRegion_TypeDefinitionIndex)->GetStaticField(0x1BDD0);
		}
		// static const ::System::String* SG; // 0x0
		// static const ::System::String* US; // 0x0
		// static const ::System::String* EU; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_DOMAINREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_DOMAINREGION__CCTOR_OFFSET))();
		}
	};
}
