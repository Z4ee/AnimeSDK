#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3959D6851A344518.h"
#include "unitysdk/System/Object.h"

class Class_1_055FD95427F2453C;
class Class_1_05CB482B8638F6BA;
class Class_2_F5737224A0253470;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8AE155CF0043BCBB_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x1401D690)
#define CLASS_1_8AE155CF0043BCBB_METHOD_1_24804DDA9385ED40_OFFSET UNITYSDK_OFFSET(0x1401D060)
#define CLASS_1_8AE155CF0043BCBB_METHOD_1_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x1401CFF0)
#define CLASS_1_8AE155CF0043BCBB_METHOD_1_B57F84D91EA5B688_OFFSET UNITYSDK_OFFSET(0x1401D480)
#define CLASS_1_8AE155CF0043BCBB_METHOD_1_E8DBB3A196E70A2D_OFFSET UNITYSDK_OFFSET(0x1401D5A0)
#define CLASS_1_8AE155CF0043BCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1401CF40)

inline static constexpr unsigned int Class_1_8AE155CF0043BCBB_TypeDefinitionIndex = 43242;

class Class_1_8AE155CF0043BCBB : public ::System::Object
{
public:
	::Class_2_F5737224A0253470* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE155CF0043BCBB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A99EF338505A0EA9(::Class_1_055FD95427F2453C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_055FD95427F2453C*))((::PBYTE)hIl2Cpp + CLASS_1_8AE155CF0043BCBB_METHOD_1_A99EF338505A0EA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_24804DDA9385ED40(::Class_1_05CB482B8638F6BA* a1, ::Struct_2_3959D6851A344518& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05CB482B8638F6BA*, ::Struct_2_3959D6851A344518&))((::PBYTE)hIl2Cpp + CLASS_1_8AE155CF0043BCBB_METHOD_1_24804DDA9385ED40_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_E8DBB3A196E70A2D(::Class_1_055FD95427F2453C* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_055FD95427F2453C*))((::PBYTE)hIl2Cpp + CLASS_1_8AE155CF0043BCBB_METHOD_1_E8DBB3A196E70A2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE155CF0043BCBB_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::Class_2_F5737224A0253470* Method_1_B57F84D91EA5B688()
	{
		return ((::Class_2_F5737224A0253470*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE155CF0043BCBB_METHOD_1_B57F84D91EA5B688_OFFSET))(this);
	}
};
