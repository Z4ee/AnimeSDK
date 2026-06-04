#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECIPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC6C2A30)

namespace RPG::Client
{
	inline static constexpr unsigned int RecipeConfig_TypeDefinitionIndex = 67956;

	class RecipeConfig : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::System::String* Name; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* Tag; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* UpgradeRequire; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Recipe; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* Price; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* ExtraCustomer; // 0x40
		::System::Collections::Generic::List_1<::System::Single>* CookTime; // 0x48
		::System::Boolean Selected; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECIPECONFIG__CTOR_OFFSET))(this);
		}
	};
}
