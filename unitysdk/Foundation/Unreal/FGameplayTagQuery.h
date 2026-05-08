#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagQueryExpression.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_BUILDQUERY_OFFSET UNITYSDK_OFFSET(0x1B797900)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_BUILD_OFFSET UNITYSDK_OFFSET(0x1B7972E0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTAGFROMINDEX_OFFSET UNITYSDK_OFFSET(0x1B7979F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x1B797990)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_MATCHES_OFFSET UNITYSDK_OFFSET(0x1B7972B0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B797AA0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B797A80)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagQuery_TypeDefinitionIndex = 8853;

	class FGameplayTagQuery : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FGameplayTagQuery** StaticGet_Empty()
		{
			return (::Foundation::Unreal::FGameplayTagQuery**)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagQuery_TypeDefinitionIndex)->GetStaticField(0x7ED0);
		}
		::Il2CppArray<::Foundation::Unreal::FGameplayTag>* TagDictionary; // 0x10
		::Il2CppArray<::System::Byte>* QueryTokenStream; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CCTOR_OFFSET))();
		}

		::System::Boolean Matches(::Foundation::Unreal::FGameplayTagContainer& tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_MATCHES_OFFSET))(this, tags);
		}

		::System::Void Build(::Foundation::Unreal::FGameplayTagQueryExpression& queryExpression)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_BUILD_OFFSET))(this, queryExpression);
		}

		static ::Foundation::Unreal::FGameplayTagQuery* BuildQuery(::Foundation::Unreal::FGameplayTagQueryExpression& queryExpression)
		{
			return ((::Foundation::Unreal::FGameplayTagQuery*(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_BUILDQUERY_OFFSET))(queryExpression);
		}

		::System::Boolean GetToken(::System::Int32 index, ::System::Byte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTOKEN_OFFSET))(this, index, value);
		}

		::Foundation::Unreal::FGameplayTag GetTagFromIndex(::System::Int32 index)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTAGFROMINDEX_OFFSET))(this, index);
		}
	};
}
