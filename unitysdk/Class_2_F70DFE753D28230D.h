#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F70DFE753D28230D_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x12346BD0)
#define CLASS_2_F70DFE753D28230D_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x12346BF0)
#define CLASS_2_F70DFE753D28230D_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x12346BE0)
#define CLASS_2_F70DFE753D28230D__CTOR_OFFSET UNITYSDK_OFFSET(0x12346C50)

inline static constexpr unsigned int Class_2_F70DFE753D28230D_TypeDefinitionIndex = 66681;

class Class_2_F70DFE753D28230D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::System::Int32 _Index_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F70DFE753D28230D__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F70DFE753D28230D_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F70DFE753D28230D_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F70DFE753D28230D_GET_TRANS_OFFSET))(this);
	}
};
