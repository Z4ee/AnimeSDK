#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Class_1_7A094D546B72ACCF_AssetLoader_2_TypeDefinitionIndex = 66058;

template <typename T, typename V>
class Class_1_7A094D546B72ACCF_AssetLoader_2 : public ::System::Object
{
public:
	::System::Action_2<T, V>* _OnLoaded; // 0x0
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>** StaticGet__Operations()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A094D546B72ACCF_AssetLoader_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, T>** StaticGet__Assets()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A094D546B72ACCF_AssetLoader_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
