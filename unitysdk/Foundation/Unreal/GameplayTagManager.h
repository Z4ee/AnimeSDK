#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagNode.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagNodeIndex.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/GameplayTagManager_StringViewSlice.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_ADDTAG_OFFSET UNITYSDK_OFFSET(0x13234A00)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_CHECKVALIDGAMEPLAYTAGSIMPLESTRINGVIEW_OFFSET UNITYSDK_OFFSET(0x13234300)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_CONSTRUCTGAMEPLAYTAGTREE_OFFSET UNITYSDK_OFFSET(0x13233A50)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_CREATEIFNULL_OFFSET UNITYSDK_OFFSET(0x132344C0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_FINDORADDCHILD_OFFSET UNITYSDK_OFFSET(0x132347A0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GETNODETREE_OFFSET UNITYSDK_OFFSET(0x132339D0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GETSINGLETAGCONTAINER_1_OFFSET UNITYSDK_OFFSET(0x132336A0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GETSINGLETAGCONTAINER_OFFSET UNITYSDK_OFFSET(0x13233530)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x13232C40)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13232D10)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_PARSEINTOARRAY_OFFSET UNITYSDK_OFFSET(0x13234540)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_REQUESTGAMEPLAYTAGPARENTS_OFFSET UNITYSDK_OFFSET(0x13233800)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_REQUESTGAMEPLAYTAG_OFFSET UNITYSDK_OFFSET(0x132334A0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13232CA0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x132333E0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagManager_TypeDefinitionIndex = 8980;

	class GameplayTagManager : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::GameplayTagManager** StaticGet__instance()
		{
			return (::Foundation::Unreal::GameplayTagManager**)Il2CppClass::FromTypeDefinitionIndex(GameplayTagManager_TypeDefinitionIndex)->GetStaticField(0x7690);
		}
		static ::Foundation::AssetPath* StaticGet_SettingPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(GameplayTagManager_TypeDefinitionIndex)->GetStaticField(0x7698);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::Unreal::FGameplayTagNodeIndex>* _gameplayTagLookUpTable; // 0x10
		::Il2CppArray<::Foundation::Unreal::FGameplayTagNode>* _nodeTrees; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER__CTOR_OFFSET))(this);
		}

		static ::Foundation::Unreal::GameplayTagManager* Get()
		{
			return ((::Foundation::Unreal::GameplayTagManager*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GET_OFFSET))();
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_INITIALIZE_OFFSET))();
		}

		::Foundation::Unreal::FGameplayTag RequestGameplayTag(::Foundation::Unreal::FName tagName, ::System::Boolean errorIfNotFound)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_REQUESTGAMEPLAYTAG_OFFSET))(this, tagName, errorIfNotFound);
		}

		::Foundation::Unreal::FGameplayTagContainer& GetSingleTagContainer(::Foundation::Unreal::FGameplayTag gameplayTag, ::System::Boolean& isValid)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GETSINGLETAGCONTAINER_OFFSET))(this, gameplayTag, isValid);
		}

		::Foundation::Unreal::FGameplayTagContainer& GetSingleTagContainer_1(::Foundation::Unreal::FGameplayTag gameplayTag)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GETSINGLETAGCONTAINER_1_OFFSET))(this, gameplayTag);
		}

		::Foundation::Unreal::FGameplayTagContainer RequestGameplayTagParents(::Foundation::Unreal::FGameplayTag gameplayTag)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_REQUESTGAMEPLAYTAGPARENTS_OFFSET))(this, gameplayTag);
		}

		::System::ReadOnlySpan_1<::Foundation::Unreal::FGameplayTagNode> GetNodeTree()
		{
			return ((::System::ReadOnlySpan_1<::Foundation::Unreal::FGameplayTagNode>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_GETNODETREE_OFFSET))(this);
		}

		::System::Void ConstructGameplayTagTree(::System::Collections::Generic::IEnumerable_1<::System::String*>* gameplayTagRawStrings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_CONSTRUCTGAMEPLAYTAGTREE_OFFSET))(this, gameplayTagRawStrings);
		}

		static ::System::Boolean CheckValidGameplayTagSimpleStringView(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_CHECKVALIDGAMEPLAYTAGSIMPLESTRINGVIEW_OFFSET))(stringView);
		}

		static ::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>* CreateIfNull(::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>* buffer)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>*(*)(::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_CREATEIFNULL_OFFSET))(buffer);
		}

		static ::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>* ParseIntoArray(::System::ReadOnlySpan_1<::System::Char> fullTag, ::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>* result)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>*(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_PARSEINTOARRAY_OFFSET))(fullTag, result);
		}

		static ::Foundation::Unreal::FGameplayTagNodeIndex FindOrAddChild(::Foundation::Unreal::FGameplayTagNodeIndex parentIndex, ::Foundation::Unreal::FName shortName, ::Foundation::Unreal::FName fullName, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNode>* nodeTree, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::Unreal::FGameplayTagNodeIndex>* gameplayTagLookUpMap)
		{
			return ((::Foundation::Unreal::FGameplayTagNodeIndex(*)(::Foundation::Unreal::FGameplayTagNodeIndex, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNode>*, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::Unreal::FGameplayTagNodeIndex>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_FINDORADDCHILD_OFFSET))(parentIndex, shortName, fullName, nodeTree, gameplayTagLookUpMap);
		}

		static ::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>* AddTag(::System::String* fullTag, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNode>* nodesTree, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::Unreal::FGameplayTagNodeIndex>* gameplayTagLookUpMap, ::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>* buffer)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>*(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNode>*, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::Unreal::FGameplayTagNodeIndex>*, ::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagManager_StringViewSlice>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_ADDTAG_OFFSET))(fullTag, nodesTree, gameplayTagLookUpMap, buffer);
		}
	};
}
