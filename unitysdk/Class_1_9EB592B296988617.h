#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1429A4347DAE014_3;
namespace System { class String; }

#define CLASS_1_9EB592B296988617_GET_ID_OFFSET UNITYSDK_OFFSET(0xBE3FB90)
#define CLASS_1_9EB592B296988617_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBE3FBA0)
#define CLASS_1_9EB592B296988617_GET_MATERIALPATH_OFFSET UNITYSDK_OFFSET(0xBE3FBB0)
#define CLASS_1_9EB592B296988617__CTOR_OFFSET UNITYSDK_OFFSET(0xBE3FBC0)

inline static constexpr unsigned int Class_1_9EB592B296988617_TypeDefinitionIndex = 80125;

class Class_1_9EB592B296988617 : public ::System::Object
{
public:
	::System::String* _MaterialPath_k__BackingField; // 0x10
	::System::String* _ImagePath_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_B1429A4347DAE014_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1429A4347DAE014_3*))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617_GET_ID_OFFSET))(this);
	}

	::System::String* get_ImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617_GET_IMAGEPATH_OFFSET))(this);
	}

	::System::String* get_MaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EB592B296988617_GET_MATERIALPATH_OFFSET))(this);
	}
};
