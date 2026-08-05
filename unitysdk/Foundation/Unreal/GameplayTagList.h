#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"

namespace Foundation::Unreal { class GameplayTagNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_GAMEPLAYTAGLIST_COLLECT_OFFSET UNITYSDK_OFFSET(0x16914060)
#define FOUNDATION_UNREAL_GAMEPLAYTAGLIST_GETFORMATTOSERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x169143B0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGLIST_VALIDATE_OFFSET UNITYSDK_OFFSET(0x16913B70)
#define FOUNDATION_UNREAL_GAMEPLAYTAGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x169143C0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagList_TypeDefinitionIndex = 12174;

	class GameplayTagList : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::String* TagToAdd; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Unreal::GameplayTagNode*>* GameplayTags; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGLIST__CTOR_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGLIST_VALIDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Collect(::System::Collections::Generic::List_1<::System::String*>* buffer)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGLIST_COLLECT_OFFSET))(this, buffer);
		}

		::Sirenix::Serialization::DataFormat GetFormatToSerializeAs(::System::Boolean isPlayer)
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGLIST_GETFORMATTOSERIALIZEAS_OFFSET))(this, isPlayer);
		}
	};
}
