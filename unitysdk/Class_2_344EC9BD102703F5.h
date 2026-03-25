#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_ADBE1843AD1E672A;
namespace System { class String; }

#define CLASS_2_344EC9BD102703F5_METHOD_2_3F35728FD10BFCD0_OFFSET UNITYSDK_OFFSET(0x104D6E30)
#define CLASS_2_344EC9BD102703F5__CTOR_OFFSET UNITYSDK_OFFSET(0x104D70A0)
#define CLASS_2_344EC9BD102703F5___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x104D7130)

inline static constexpr unsigned int Class_2_344EC9BD102703F5_TypeDefinitionIndex = 41934;

class Class_2_344EC9BD102703F5 : public ::Sofa::Core::ObservableObject
{
public:
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_3; // 0x20
	::Class_1_ADBE1843AD1E672A* Field_2_6; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38
	::System::UInt32 Field_2_2; // 0x40
	::System::UInt32 Field_2_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_344EC9BD102703F5__CTOR_OFFSET))(this);
	}

	static ::Class_2_344EC9BD102703F5* Method_2_3F35728FD10BFCD0(::System::UInt32 a1)
	{
		return ((::Class_2_344EC9BD102703F5*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_344EC9BD102703F5_METHOD_2_3F35728FD10BFCD0_OFFSET))(a1);
	}

	::System::Void __ctor_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_344EC9BD102703F5___CTOR_B__1_0_OFFSET))(this);
	}
};
