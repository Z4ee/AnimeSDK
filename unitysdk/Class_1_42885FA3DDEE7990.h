#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesItemData; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42885FA3DDEE7990_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x18460BE0)
#define CLASS_1_42885FA3DDEE7990_METHOD_1_493D68DE26811C53_OFFSET UNITYSDK_OFFSET(0x18460A20)
#define CLASS_1_42885FA3DDEE7990_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x18460BF0)
#define CLASS_1_42885FA3DDEE7990__CTOR_OFFSET UNITYSDK_OFFSET(0x18460C00)

inline static constexpr unsigned int Class_1_42885FA3DDEE7990_TypeDefinitionIndex = 76327;

class Class_1_42885FA3DDEE7990 : public ::System::Object
{
public:
	::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>* _Items_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42885FA3DDEE7990__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_493D68DE26811C53(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_42885FA3DDEE7990_METHOD_1_493D68DE26811C53_OFFSET))(this, a1);
	}

	::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>* get_Items()
	{
		return ((::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42885FA3DDEE7990_GET_ITEMS_OFFSET))(this);
	}

	::System::Void set_Items(::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_42885FA3DDEE7990_SET_ITEMS_OFFSET))(this, a1);
	}
};
