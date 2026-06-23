#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_034E96628B18700D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_2B68E8D62DAD6F3D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1A0BD930)
#define CLASS_4_2B68E8D62DAD6F3D_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1A0BD3D0)
#define CLASS_4_2B68E8D62DAD6F3D_METHOD_4_85E65692F7E102DF_OFFSET UNITYSDK_OFFSET(0x1A0BD6A0)
#define CLASS_4_2B68E8D62DAD6F3D_METHOD_4_CC4DC8FB65DC8FF4_OFFSET UNITYSDK_OFFSET(0x1A0BD4B0)
#define CLASS_4_2B68E8D62DAD6F3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BD840)

inline static constexpr unsigned int Class_4_2B68E8D62DAD6F3D_TypeDefinitionIndex = 50526;

class Class_4_2B68E8D62DAD6F3D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B68E8D62DAD6F3D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B68E8D62DAD6F3D_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_CC4DC8FB65DC8FF4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2B68E8D62DAD6F3D_METHOD_4_CC4DC8FB65DC8FF4_OFFSET))(this, a1);
	}

	::System::Void Method_4_85E65692F7E102DF(::System::String* a1, ::Class_2_034E96628B18700D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_034E96628B18700D*))((::PBYTE)hIl2Cpp + CLASS_4_2B68E8D62DAD6F3D_METHOD_4_85E65692F7E102DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B68E8D62DAD6F3D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
