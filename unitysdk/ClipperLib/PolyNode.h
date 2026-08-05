#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/EndType.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/JoinType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLIPPERLIB_POLYNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1E3CDCF0)
#define CLIPPERLIB_POLYNODE_GETNEXTSIBLINGUP_OFFSET UNITYSDK_OFFSET(0x1E3D7FE0)
#define CLIPPERLIB_POLYNODE_GETNEXT_OFFSET UNITYSDK_OFFSET(0x1E3D7EB0)
#define CLIPPERLIB_POLYNODE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1E3D3300)
#define CLIPPERLIB_POLYNODE_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x1E3D80C0)
#define CLIPPERLIB_POLYNODE_GET_CONTOUR_OFFSET UNITYSDK_OFFSET(0x1E3D7EA0)
#define CLIPPERLIB_POLYNODE_GET_ISHOLE_OFFSET UNITYSDK_OFFSET(0x1E3D80E0)
#define CLIPPERLIB_POLYNODE_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1E3D8110)
#define CLIPPERLIB_POLYNODE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1E3D80D0)
#define CLIPPERLIB_POLYNODE_ISHOLENODE_OFFSET UNITYSDK_OFFSET(0x1E3D7E70)
#define CLIPPERLIB_POLYNODE_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1E3D8120)
#define CLIPPERLIB_POLYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CDC40)

namespace ClipperLib
{
	inline static constexpr unsigned int PolyNode_TypeDefinitionIndex = 33404;

	class PolyNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* m_polygon; // 0x10
		::System::Collections::Generic::List_1<::ClipperLib::PolyNode*>* m_Childs; // 0x18
		::ClipperLib::PolyNode* m_Parent; // 0x20
		::System::Boolean _IsOpen_k__BackingField; // 0x28
		::ClipperLib::EndType m_endtype; // 0x2C
		::ClipperLib::JoinType m_jointype; // 0x30
		::System::Int32 m_Index; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsHoleNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_ISHOLENODE_OFFSET))(this);
		}

		::System::Int32 get_ChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GET_CHILDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* get_Contour()
		{
			return ((::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GET_CONTOUR_OFFSET))(this);
		}

		::System::Void AddChild(::ClipperLib::PolyNode* Child)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::PolyNode*))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_ADDCHILD_OFFSET))(this, Child);
		}

		::ClipperLib::PolyNode* GetNext()
		{
			return ((::ClipperLib::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GETNEXT_OFFSET))(this);
		}

		::ClipperLib::PolyNode* GetNextSiblingUp()
		{
			return ((::ClipperLib::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GETNEXTSIBLINGUP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ClipperLib::PolyNode*>* get_Childs()
		{
			return ((::System::Collections::Generic::List_1<::ClipperLib::PolyNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GET_CHILDS_OFFSET))(this);
		}

		::ClipperLib::PolyNode* get_Parent()
		{
			return ((::ClipperLib::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GET_PARENT_OFFSET))(this);
		}

		::System::Boolean get_IsHole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GET_ISHOLE_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_GET_ISOPEN_OFFSET))(this);
		}

		::System::Void set_IsOpen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYNODE_SET_ISOPEN_OFFSET))(this, value);
		}
	};
}
