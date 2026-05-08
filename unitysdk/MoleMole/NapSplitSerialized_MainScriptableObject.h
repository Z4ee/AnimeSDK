#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class NapSplitSerialized_BranchScriptableObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT_ADDNEWBRANCH_OFFSET UNITYSDK_OFFSET(0x15B45F30)
#define MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT_ISDEBUG_OFFSET UNITYSDK_OFFSET(0x15B46110)
#define MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT_REFRESHSPLIT_OFFSET UNITYSDK_OFFSET(0x15B46160)
#define MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B46390)

namespace MoleMole
{
	inline static constexpr unsigned int NapSplitSerialized_MainScriptableObject_TypeDefinitionIndex = 74133;

	class NapSplitSerialized_MainScriptableObject : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::NapSplitSerialized_BranchScriptableObject*>* branches; // 0x58
		::System::Boolean _isSplit; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void AddNewBranch(::MoleMole::NapSplitSerialized_BranchScriptableObject* branch)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_BranchScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT_ADDNEWBRANCH_OFFSET))(this, branch);
		}

		::System::Boolean IsDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT_ISDEBUG_OFFSET))(this);
		}

		::System::Void RefreshSplit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_MAINSCRIPTABLEOBJECT_REFRESHSPLIT_OFFSET))(this);
		}
	};
}
