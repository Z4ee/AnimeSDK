#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System { class String; }
namespace System::CodeDom { class CodeTypeParameter; }

#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x19A40FA0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x19A40F60)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x19A40F20)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19A40EE0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19A40FE0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19A41020)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19A40E60)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19A41060)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x19A410A0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19A410E0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19A40EA0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A40DE0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19A40E20)
#define SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A40DA0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeParameterCollection_TypeDefinitionIndex = 4062;

	class CodeTypeParameterCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeParameterCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeParameterCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeTypeParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeParameter*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeParameter* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeTypeParameter*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeTypeParameter* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeParameter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeTypeParameter* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeParameter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void Add_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADD_1_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeTypeParameterCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeParameterCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeTypeParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeParameter*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeTypeParameter* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeTypeParameter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeTypeParameter*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeParameter*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeTypeParameter* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeParameter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeTypeParameter* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeParameter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeTypeParameter* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeParameter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETERCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
