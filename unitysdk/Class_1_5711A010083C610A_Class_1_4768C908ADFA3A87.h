#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x14DFAB30)
#define CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87_METHOD_1_738FDD723224E97B_OFFSET UNITYSDK_OFFSET(0x14DFAAE0)
#define CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14DFAAF0)
#define CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87__CTOR_OFFSET UNITYSDK_OFFSET(0x14DFAB00)

inline static constexpr unsigned int Class_1_5711A010083C610A_Class_1_4768C908ADFA3A87_TypeDefinitionIndex = 47002;

class Class_1_5711A010083C610A_Class_1_4768C908ADFA3A87 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x40
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_0; // 0x44

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier a1, ::System::Int32 a2, ::Struct_2_FE9BD044832BC9C3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::Struct_2_FE9BD044832BC9C3))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::ViewObject::GroupMemberIdentifier Method_1_738FDD723224E97B()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87_METHOD_1_738FDD723224E97B_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5711A010083C610A_CLASS_1_4768C908ADFA3A87_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}
};
