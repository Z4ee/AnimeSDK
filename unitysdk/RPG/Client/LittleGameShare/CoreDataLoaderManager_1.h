#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int CoreDataLoaderManager_1_TypeDefinitionIndex = 35300;

	template <typename T>
	class CoreDataLoaderManager_1 : public ::System::Object
	{
	public:
		::System::UInt32 _LatestVersion; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, T>* _DataMap; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _ToDelete; // 0x0
		::System::Func_2<::System::UInt32, T>* _Factory; // 0x0
		static ::System::Object** StaticGet__Lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CoreDataLoaderManager_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
