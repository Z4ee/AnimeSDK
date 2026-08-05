#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY_BUILDKEYTABLE_OFFSET UNITYSDK_OFFSET(0x1BA636F0)
#define PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY_BUILDTYPETABLE_OFFSET UNITYSDK_OFFSET(0x1BAC5110)
#define PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1BA63650)
#define PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA63640)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int V2_BinaryHashRegistry_TypeDefinitionIndex = 61223;

	class V2_BinaryHashRegistry : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Void Register()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY_REGISTER_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* BuildKeyTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY_BUILDKEYTABLE_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* BuildTypeTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2_BINARYHASHREGISTRY_BUILDTYPETABLE_OFFSET))();
		}
	};
}
