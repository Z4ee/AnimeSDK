#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_51EED7CD291B614D;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_AWAKE_OFFSET UNITYSDK_OFFSET(0xB260660)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LISTENCOLLIDERITEMSTR_OFFSET UNITYSDK_OFFSET(0xB2607B0)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LISTENCOLLIDERITEM_OFFSET UNITYSDK_OFFSET(0xB2606A0)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LOADEDCOLLIDERITEMSTR_OFFSET UNITYSDK_OFFSET(0xB260930)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LOADEDCOLLIDERITEM_OFFSET UNITYSDK_OFFSET(0xB260700)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5__CTOR_OFFSET UNITYSDK_OFFSET(0xB260B10)

inline static constexpr unsigned int Class_1_51EED7CD291B614D_Class_5_B87218F611CE28F5_TypeDefinitionIndex = 60555;

class Class_1_51EED7CD291B614D_Class_5_B87218F611CE28F5 : public ::UnityEngine::MonoBehaviour
{
public:
	::Class_1_51EED7CD291B614D* OwnerHandler; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_AWAKE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_ListenColliderItem()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LISTENCOLLIDERITEM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_LoadedColliderItem()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LOADEDCOLLIDERITEM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_ListenColliderItemStr()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LISTENCOLLIDERITEMSTR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_LoadedColliderItemStr()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B87218F611CE28F5_GET_LOADEDCOLLIDERITEMSTR_OFFSET))(this);
	}
};
