#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_68;
class Class_0_16E4307DCC419505_76;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_F0F5FC8CD22F7E83;
namespace RPG::Client { template <typename T> class DelayList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AbsDownloadData_1_TypeDefinitionIndex = 55565;

	template <typename TIndex>
	class AbsDownloadData_1 : public ::System::Object
	{
	public:
		::Class_1_F0F5FC8CD22F7E83* _LocalBlockVersion; // 0x0
		::Class_1_F0F5FC8CD22F7E83* _ServerBlockVersionWithCache; // 0x0
		::Class_1_51C874EE455D4F2F* _BaseAbsolutePath; // 0x0
		::Class_1_F0F5FC8CD22F7E83* _LocalBundleVersion; // 0x0
		::Class_1_F0F5FC8CD22F7E83* _ServerBundleVersionWithCache; // 0x0
		::System::String* _LocalRootPath; // 0x0
		::RPG::Client::DelayList_1<::Class_0_16E4307DCC419505_68*>* _BlockItems_k__BackingField; // 0x0
		::System::Boolean _NeedDownloadBlocks_k__BackingField; // 0x0
		::System::Collections::Generic::HashSet_1<::System::String*>* BadList; // 0x0
		::System::Collections::Generic::HashSet_1<::RPG::Client::ByteHash16>* InPatchBlockList; // 0x0
		TIndex _ServerBlockIndex; // 0x0
		TIndex _StreamBlockIndex; // 0x0
		TIndex _PersistBlockIndex; // 0x0
	};
}
