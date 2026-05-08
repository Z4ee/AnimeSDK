#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x107A1690)
#define CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_3632C47ABCCD20ED_OFFSET UNITYSDK_OFFSET(0x107A15A0)
#define CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x107A20B0)
#define CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_D7D32BC455E1AEBB_OFFSET UNITYSDK_OFFSET(0x107A19B0)
#define CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x107A2140)
#define CLASS_3_89FCCA9AEAF3D5E6__CTOR_OFFSET UNITYSDK_OFFSET(0x107A1E30)

inline static constexpr unsigned int Class_3_89FCCA9AEAF3D5E6_TypeDefinitionIndex = 48945;

class Class_3_89FCCA9AEAF3D5E6 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_3; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_5; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40
	::Class_3_B537A0AA78803363* Field_3_6; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89FCCA9AEAF3D5E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3632C47ABCCD20ED(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_3632C47ABCCD20ED_OFFSET))(this, a1);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_D7D32BC455E1AEBB(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_D7D32BC455E1AEBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_89FCCA9AEAF3D5E6_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
