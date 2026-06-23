#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_1_4110AABEB96C2A35;

#define CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_738FDD723224E97B_OFFSET UNITYSDK_OFFSET(0x19E28090)
#define CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19E280A0)
#define CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x19E280C0)
#define CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x19E280B0)

inline static constexpr unsigned int Class_1_5711A010083C610A_Class_1_E3E6F7E25E6C8F6F_TypeDefinitionIndex = 74432;

class Class_1_5711A010083C610A_Class_1_E3E6F7E25E6C8F6F : public ::System::Object
{
public:
	::Class_1_4110AABEB96C2A35* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_0; // 0x1C

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier a1, ::System::Int32 a2, ::Class_1_4110AABEB96C2A35* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::Class_1_4110AABEB96C2A35*))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::ViewObject::GroupMemberIdentifier Method_1_738FDD723224E97B()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_738FDD723224E97B_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}
};
