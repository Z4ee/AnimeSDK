#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_51EED7CD291B614D;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_AWAKE_OFFSET UNITYSDK_OFFSET(0x17F58CA0)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LISTENCOLLIDERITEMSTR_OFFSET UNITYSDK_OFFSET(0x17F58EA0)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LISTENCOLLIDERITEM_OFFSET UNITYSDK_OFFSET(0x17F58CE0)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LOADEDCOLLIDERITEMSTR_OFFSET UNITYSDK_OFFSET(0x17F590C0)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LOADEDCOLLIDERITEM_OFFSET UNITYSDK_OFFSET(0x17F58D40)
#define CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B__CTOR_OFFSET UNITYSDK_OFFSET(0x17F59360)

inline static constexpr unsigned int Class_1_51EED7CD291B614D_Class_5_B445E66C9DF7026B_TypeDefinitionIndex = 73761;

class Class_1_51EED7CD291B614D_Class_5_B445E66C9DF7026B : public ::UnityEngine::MonoBehaviour
{
public:
	::Class_1_51EED7CD291B614D* OwnerHandler; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_AWAKE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_ListenColliderItem()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LISTENCOLLIDERITEM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_LoadedColliderItem()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LOADEDCOLLIDERITEM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_ListenColliderItemStr()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LISTENCOLLIDERITEMSTR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_LoadedColliderItemStr()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EED7CD291B614D_CLASS_5_B445E66C9DF7026B_GET_LOADEDCOLLIDERITEMSTR_OFFSET))(this);
	}
};
