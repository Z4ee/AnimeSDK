#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class NapSplitSerialized_MainScriptableObject; }
namespace System { class String; }

#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONCONVERTTOSPLIT_OFFSET UNITYSDK_OFFSET(0x15BA76B0)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONMERGESPLIT_OFFSET UNITYSDK_OFFSET(0x15BA7660)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONRUNTIMEPREPARE_OFFSET UNITYSDK_OFFSET(0x15BA7790)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA7820)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__LOGERR_OFFSET UNITYSDK_OFFSET(0x15BA7740)

namespace MoleMole
{
	inline static constexpr unsigned int NapSplitSerialized_BranchScriptableObject_TypeDefinitionIndex = 39996;

	class NapSplitSerialized_BranchScriptableObject : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnMergeSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* main)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONMERGESPLIT_OFFSET))(this, main);
		}

		::System::Void OnConvertToSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* main)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONCONVERTTOSPLIT_OFFSET))(this, main);
		}

		::System::Void OnRuntimePrepare(::MoleMole::NapSplitSerialized_MainScriptableObject* main)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONRUNTIMEPREPARE_OFFSET))(this, main);
		}

		::System::Void _LogErr(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__LOGERR_OFFSET))(this, msg);
		}
	};
}
