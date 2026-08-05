#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_1_4110AABEB96C2A35;

#define CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_738FDD723224E97B_OFFSET UNITYSDK_OFFSET(0x1BC35620)
#define CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1BC35630)
#define CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1BC35650)
#define CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC35640)

inline static constexpr unsigned int Class_1_B805AE15763B6BA0_Class_1_E3E6F7E25E6C8F6F_TypeDefinitionIndex = 86584;

class Class_1_B805AE15763B6BA0_Class_1_E3E6F7E25E6C8F6F : public ::System::Object
{
public:
	::Class_1_4110AABEB96C2A35* Field_1_7; // 0x10
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier a1, ::System::Int32 a2, ::Class_1_4110AABEB96C2A35* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::Class_1_4110AABEB96C2A35*))((::PBYTE)hIl2Cpp + CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::ViewObject::GroupMemberIdentifier Method_1_738FDD723224E97B()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_738FDD723224E97B_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B805AE15763B6BA0_CLASS_1_E3E6F7E25E6C8F6F_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}
};
