#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A3090EEC3099E865;
namespace System { class String; }

#define CLASS_1_9EB592B296988617_1_GET_ID_OFFSET UNITYSDK_OFFSET(0xB8AD9C0)
#define CLASS_1_9EB592B296988617_1_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB8AD9D0)
#define CLASS_1_9EB592B296988617_1_GET_MOTIONID_OFFSET UNITYSDK_OFFSET(0xB8AD9E0)
#define CLASS_1_9EB592B296988617_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AD9F0)

inline static constexpr unsigned int Class_1_9EB592B296988617_1_TypeDefinitionIndex = 80126;

class Class_1_9EB592B296988617_1 : public ::System::Object
{
public:
	::System::String* _ImagePath_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18
	::System::UInt32 _MotionID_k__BackingField; // 0x1C

	::System::Void _ctor(::Class_1_A3090EEC3099E865* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3090EEC3099E865*))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617_1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617_1_GET_ID_OFFSET))(this);
	}

	::System::String* get_ImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617_1_GET_IMAGEPATH_OFFSET))(this);
	}

	::System::UInt32 get_MotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617_1_GET_MOTIONID_OFFSET))(this);
	}
};
