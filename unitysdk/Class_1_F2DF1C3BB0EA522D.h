#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A3DCA8A7B6FC7B62.h"
#include "unitysdk/Struct_2_DA3A109C3E0BFF6B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_15E2D59B6ED67072;
namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define CLASS_1_F2DF1C3BB0EA522D_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x16521BF0)
#define CLASS_1_F2DF1C3BB0EA522D_METHOD_1_59C56BF671CC58B9_OFFSET UNITYSDK_OFFSET(0x16521DB0)
#define CLASS_1_F2DF1C3BB0EA522D_METHOD_1_79E50EC0C3F02DAB_OFFSET UNITYSDK_OFFSET(0x16521C40)
#define CLASS_1_F2DF1C3BB0EA522D_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16521C30)
#define CLASS_1_F2DF1C3BB0EA522D_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x16521C20)
#define CLASS_1_F2DF1C3BB0EA522D_METHOD_1_D7A016422DBC5C6A_OFFSET UNITYSDK_OFFSET(0x16521C90)
#define CLASS_1_F2DF1C3BB0EA522D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16521DA0)
#define CLASS_1_F2DF1C3BB0EA522D__CTOR_OFFSET UNITYSDK_OFFSET(0x16521BD0)

inline static constexpr unsigned int Class_1_F2DF1C3BB0EA522D_TypeDefinitionIndex = 47252;

class Class_1_F2DF1C3BB0EA522D : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::MoleMole::UIPerformPageController* Field_1_2; // 0x18
	::Struct_2_DA3A109C3E0BFF6B Field_1_0; // 0x20

	::System::Void _ctor(::Struct_2_DA3A109C3E0BFF6B a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DA3A109C3E0BFF6B, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_A3DCA8A7B6FC7B62 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_A3DCA8A7B6FC7B62(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F2DF1C3BB0EA522D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F2DF1C3BB0EA522D*))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_1_79E50EC0C3F02DAB(::System::Double a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D_METHOD_1_79E50EC0C3F02DAB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7A016422DBC5C6A(::Class_1_F2DF1C3BB0EA522D* a1, ::Class_1_15E2D59B6ED67072* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F2DF1C3BB0EA522D*, ::Class_1_15E2D59B6ED67072*))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D_METHOD_1_D7A016422DBC5C6A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::UIPerformPageController*> Method_1_59C56BF671CC58B9(::Class_1_F2DF1C3BB0EA522D* a1, ::Class_1_15E2D59B6ED67072* a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::UIPerformPageController*>(*)(::PVOID, ::Class_1_F2DF1C3BB0EA522D*, ::Class_1_15E2D59B6ED67072*))((::PBYTE)hIl2Cpp + CLASS_1_F2DF1C3BB0EA522D_METHOD_1_59C56BF671CC58B9_OFFSET))(this, a1, a2);
	}
};
