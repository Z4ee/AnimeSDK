#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeCommentStatement; }

#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1DAAE0F0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1DAAE0B0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1DAAE070)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DAAE130)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DAAE170)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAADFF0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1DAAE1B0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1DAAE1F0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DAAE230)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAAE030)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAADF70)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DAADFB0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAADF30)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeCommentStatementCollection_TypeDefinitionIndex = 4036;

	class CodeCommentStatementCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeCommentStatementCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCommentStatementCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeCommentStatement*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeCommentStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeCommentStatement* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeCommentStatement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeCommentStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeCommentStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeCommentStatement* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeCommentStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeCommentStatementCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCommentStatementCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeCommentStatement*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeCommentStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeCommentStatement* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeCommentStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeCommentStatement*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeCommentStatement*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeCommentStatement* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeCommentStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeCommentStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeCommentStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeCommentStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCommentStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENTCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
