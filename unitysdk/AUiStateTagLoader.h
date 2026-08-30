#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AUiStateTagBase.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AUISTATETAGLOADER_GET_STATETAGLIST_OFFSET UNITYSDK_OFFSET(0x1765D580)
#define AUISTATETAGLOADER_ISFALSE_OFFSET UNITYSDK_OFFSET(0x1765C810)
#define AUISTATETAGLOADER_ISTRUE_OFFSET UNITYSDK_OFFSET(0x1765D030)
#define AUISTATETAGLOADER_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1765CF60)
#define AUISTATETAGLOADER_SET_STATETAGLIST_OFFSET UNITYSDK_OFFSET(0x1765D5C0)
#define AUISTATETAGLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1765D610)

inline static constexpr unsigned int AUiStateTagLoader_TypeDefinitionIndex = 48038;

class AUiStateTagLoader : public ::AUiStateTagBase
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* StateList; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* rmlist; // 0x20
	::RPG::Client::PrefabLoadMeta* AKAHFFNCELI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGLOADER__CTOR_OFFSET))(this);
	}

	::System::Void IsFalse()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGLOADER_ISFALSE_OFFSET))(this);
	}

	::System::Void IsTrue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGLOADER_ISTRUE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Boolean>* get_StateTagList()
	{
		return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGLOADER_GET_STATETAGLIST_OFFSET))(this);
	}

	::System::Void set_StateTagList(::System::Collections::Generic::List_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AUISTATETAGLOADER_SET_STATETAGLIST_OFFSET))(this, a1);
	}

	::System::Void Method_6_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGLOADER_METHOD_6_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
