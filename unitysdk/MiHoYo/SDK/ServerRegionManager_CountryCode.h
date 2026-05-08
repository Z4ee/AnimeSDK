#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIHOYO_SDK_SERVERREGIONMANAGER_COUNTRYCODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1871F0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_COUNTRYCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1871E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerRegionManager_CountryCode_TypeDefinitionIndex = 18832;

	class ServerRegionManager_CountryCode : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_EU()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_CountryCode_TypeDefinitionIndex)->GetStaticField(0xA2A0);
		}
		// static const ::System::String* AT; // 0x0
		// static const ::System::String* BE; // 0x0
		// static const ::System::String* BG; // 0x0
		// static const ::System::String* HR; // 0x0
		// static const ::System::String* CY; // 0x0
		// static const ::System::String* CZ; // 0x0
		// static const ::System::String* DK; // 0x0
		// static const ::System::String* EE; // 0x0
		// static const ::System::String* FI; // 0x0
		// static const ::System::String* FR; // 0x0
		// static const ::System::String* DE; // 0x0
		// static const ::System::String* GR; // 0x0
		// static const ::System::String* HU; // 0x0
		// static const ::System::String* IS; // 0x0
		// static const ::System::String* IE; // 0x0
		// static const ::System::String* IT; // 0x0
		// static const ::System::String* LV; // 0x0
		// static const ::System::String* LI; // 0x0
		// static const ::System::String* LT; // 0x0
		// static const ::System::String* LU; // 0x0
		// static const ::System::String* MT; // 0x0
		// static const ::System::String* NL; // 0x0
		// static const ::System::String* NO; // 0x0
		// static const ::System::String* PL; // 0x0
		// static const ::System::String* PT; // 0x0
		// static const ::System::String* RO; // 0x0
		// static const ::System::String* SK; // 0x0
		// static const ::System::String* SI; // 0x0
		// static const ::System::String* ES; // 0x0
		// static const ::System::String* SE; // 0x0
		// static const ::System::String* CH; // 0x0
		// static const ::System::String* UK; // 0x0
		// static const ::System::String* GB; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_COUNTRYCODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_COUNTRYCODE__CCTOR_OFFSET))();
		}
	};
}
