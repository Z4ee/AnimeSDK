#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/PolyNode.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLIPPERLIB_POLYTREE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E3CDB70)
#define CLIPPERLIB_POLYTREE_GETFIRST_OFFSET UNITYSDK_OFFSET(0x1E3D8130)
#define CLIPPERLIB_POLYTREE_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x1E3D2FB0)
#define CLIPPERLIB_POLYTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D8190)

namespace ClipperLib
{
	inline static constexpr unsigned int PolyTree_TypeDefinitionIndex = 33403;

	class PolyTree : public ::ClipperLib::PolyNode
	{
	public:
		::System::Collections::Generic::List_1<::ClipperLib::PolyNode*>* m_AllPolys; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYTREE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYTREE_CLEAR_OFFSET))(this);
		}

		::ClipperLib::PolyNode* GetFirst()
		{
			return ((::ClipperLib::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYTREE_GETFIRST_OFFSET))(this);
		}

		::System::Int32 get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_POLYTREE_GET_TOTAL_OFFSET))(this);
		}
	};
}
