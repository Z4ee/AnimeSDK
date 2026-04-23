#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x177EC750)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x177EC970)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x177EC7F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_RESET_OFFSET UNITYSDK_OFFSET(0x177ECA30)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x177ECAE0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x177EBB80)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_ArrayListEnumeratorSimple_TypeDefinitionIndex = 1452;

	class ArrayList_ArrayListEnumeratorSimple : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_dummyObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ArrayList_ArrayListEnumeratorSimple_TypeDefinitionIndex)->GetStaticField(0x4570);
		}
		::System::Object* currentElement; // 0x10
		::System::Collections::ArrayList* list; // 0x18
		::System::Int32 version; // 0x20
		::System::Boolean isArrayList; // 0x24
		::System::Int32 index; // 0x28

		::System::Void _ctor(::System::Collections::ArrayList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CTOR_OFFSET))(this, list);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CCTOR_OFFSET))();
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_CLONE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_RESET_OFFSET))(this);
		}
	};
}
