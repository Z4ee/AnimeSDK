#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3D2F26C73E2A30FE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x165B02C0)
#define CLASS_1_3D2F26C73E2A30FE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x165B02A0)
#define CLASS_1_3D2F26C73E2A30FE_METHOD_1_A1AF23B15163044A_OFFSET UNITYSDK_OFFSET(0x165B02E0)
#define CLASS_1_3D2F26C73E2A30FE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x165B02D0)
#define CLASS_1_3D2F26C73E2A30FE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x165B02B0)
#define CLASS_1_3D2F26C73E2A30FE__CTOR_OFFSET UNITYSDK_OFFSET(0x165B0360)

inline static constexpr unsigned int Class_1_3D2F26C73E2A30FE_TypeDefinitionIndex = 80186;

class Class_1_3D2F26C73E2A30FE : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::UInt32 _Count_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D2F26C73E2A30FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D2F26C73E2A30FE_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3D2F26C73E2A30FE_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_Count()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D2F26C73E2A30FE_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D2F26C73E2A30FE_SET_COUNT_OFFSET))(this, a1);
	}

	static ::Class_1_3D2F26C73E2A30FE* Method_1_A1AF23B15163044A(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_3D2F26C73E2A30FE*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D2F26C73E2A30FE_METHOD_1_A1AF23B15163044A_OFFSET))(a1, a2);
	}
};
