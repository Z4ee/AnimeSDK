#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MDBEDITOR_MDBSKELETALNODE_GET_BONENAME_OFFSET UNITYSDK_OFFSET(0x12421180)
#define MDBEDITOR_MDBSKELETALNODE_GET_CURRTRANS_OFFSET UNITYSDK_OFFSET(0x12421150)
#define MDBEDITOR_MDBSKELETALNODE_GET_ISENDPOINT_OFFSET UNITYSDK_OFFSET(0x12421190)
#define MDBEDITOR_MDBSKELETALNODE_GET_ISSKINBONE_OFFSET UNITYSDK_OFFSET(0x124211A0)
#define MDBEDITOR_MDBSKELETALNODE_GET_PARENTINDEX_OFFSET UNITYSDK_OFFSET(0x12421170)
#define MDBEDITOR_MDBSKELETALNODE_GET_PARENTTRANS_OFFSET UNITYSDK_OFFSET(0x12421160)
#define MDBEDITOR_MDBSKELETALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12421120)

namespace MdbEditor
{
	inline static constexpr unsigned int MdbSkeletalNode_TypeDefinitionIndex = 95390;

	class MdbSkeletalNode : public ::System::Object
	{
	public:
		::System::String* _boneName; // 0x10
		::UnityEngine::Transform* _currTrans; // 0x18
		::UnityEngine::Transform* _parentTrans; // 0x20
		::System::Int32 _parentIndex; // 0x28
		::System::Boolean _isEndPoint; // 0x2C
		::System::Boolean _isSkinBone; // 0x2D

		::System::Void _ctor(::UnityEngine::Transform* currTrans, ::UnityEngine::Transform* parentTrans, ::System::Int32 parentIndex, ::System::String* boneName, ::System::Boolean endPoint, ::System::Boolean skinPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETALNODE__CTOR_OFFSET))(this, currTrans, parentTrans, parentIndex, boneName, endPoint, skinPoint);
		}

		::UnityEngine::Transform* get_currTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETALNODE_GET_CURRTRANS_OFFSET))(this);
		}

		::UnityEngine::Transform* get_parentTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETALNODE_GET_PARENTTRANS_OFFSET))(this);
		}

		::System::Int32 get_ParentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETALNODE_GET_PARENTINDEX_OFFSET))(this);
		}

		::System::String* get_BoneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETALNODE_GET_BONENAME_OFFSET))(this);
		}

		::System::Boolean get_IsEndPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETALNODE_GET_ISENDPOINT_OFFSET))(this);
		}

		::System::Boolean get_IsSkinBone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETALNODE_GET_ISSKINBONE_OFFSET))(this);
		}
	};
}
