#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_F35AB7A734922237_METHOD_3_3632C47ABCCD20ED_OFFSET UNITYSDK_OFFSET(0x14FFA0C0)
#define CLASS_3_F35AB7A734922237_METHOD_3_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x14FFA470)
#define CLASS_3_F35AB7A734922237_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x14FFA1B0)
#define CLASS_3_F35AB7A734922237_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14FFAAD0)
#define CLASS_3_F35AB7A734922237_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x14FFAB60)
#define CLASS_3_F35AB7A734922237__CTOR_OFFSET UNITYSDK_OFFSET(0x14FFA8D0)

inline static constexpr unsigned int Class_3_F35AB7A734922237_TypeDefinitionIndex = 77247;

class Class_3_F35AB7A734922237 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_4; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_2; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_5; // 0x28
	::Class_3_B537A0AA78803363* Field_3_6; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_3; // 0x40
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35AB7A734922237__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3632C47ABCCD20ED(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_F35AB7A734922237_METHOD_3_3632C47ABCCD20ED_OFFSET))(this, a1);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35AB7A734922237_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_F35AB7A734922237_METHOD_3_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35AB7A734922237_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_F35AB7A734922237_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
