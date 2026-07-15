#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_363;
class Class_1_BAA2A38C8155EAC4;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_C082E983A335230D_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17A76070)
#define CLASS_2_C082E983A335230D_METHOD_2_227866320E384131_OFFSET UNITYSDK_OFFSET(0x17A76380)
#define CLASS_2_C082E983A335230D_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x17A762D0)
#define CLASS_2_C082E983A335230D_METHOD_2_31AD652EE1F91BE9_OFFSET UNITYSDK_OFFSET(0x17A777F0)
#define CLASS_2_C082E983A335230D_METHOD_2_3AB92A310C458D7A_OFFSET UNITYSDK_OFFSET(0x17A76110)
#define CLASS_2_C082E983A335230D_METHOD_2_4DE65AB3A4860CEB_1_OFFSET UNITYSDK_OFFSET(0x17A76AB0)
#define CLASS_2_C082E983A335230D_METHOD_2_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x17A761B0)
#define CLASS_2_C082E983A335230D_METHOD_2_7379F6F0451DB9CF_OFFSET UNITYSDK_OFFSET(0x17A772B0)
#define CLASS_2_C082E983A335230D_METHOD_2_7F652479251D0500_OFFSET UNITYSDK_OFFSET(0x17A77B60)
#define CLASS_2_C082E983A335230D_METHOD_2_8C43E6E7E328B9EB_OFFSET UNITYSDK_OFFSET(0x17A77530)
#define CLASS_2_C082E983A335230D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17A76170)
#define CLASS_2_C082E983A335230D_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x17A77790)
#define CLASS_2_C082E983A335230D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A760D0)
#define CLASS_2_C082E983A335230D_METHOD_2_D98A8751C83DD5D1_1_OFFSET UNITYSDK_OFFSET(0x17A76E50)
#define CLASS_2_C082E983A335230D_METHOD_2_D98A8751C83DD5D1_OFFSET UNITYSDK_OFFSET(0x17A76C50)
#define CLASS_2_C082E983A335230D_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x17A77050)
#define CLASS_2_C082E983A335230D__CTOR_OFFSET UNITYSDK_OFFSET(0x17A77EF0)

inline static constexpr unsigned int Class_2_C082E983A335230D_TypeDefinitionIndex = 47501;

class Class_2_C082E983A335230D : public ::Class_1_952A7C560FC1CD4B
{
public:
	::System::Collections::Generic::List_1<::Class_1_BAA2A38C8155EAC4*>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x30
	::Class_0_16E4307DCC419505_360* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_363*>* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::Class_1_BAA2A38C8155EAC4*>* Field_2_4; // 0x48
	::System::Boolean Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_2_3AB92A310C458D7A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_3AB92A310C458D7A_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_227866320E384131(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_227866320E384131_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DE65AB3A4860CEB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_4DE65AB3A4860CEB_1_OFFSET))(this);
	}

	::System::Void Method_2_7379F6F0451DB9CF(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_7379F6F0451DB9CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C43E6E7E328B9EB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_8C43E6E7E328B9EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_D98A8751C83DD5D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_D98A8751C83DD5D1_OFFSET))(this);
	}

	::System::Void Method_2_D98A8751C83DD5D1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_D98A8751C83DD5D1_1_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_31AD652EE1F91BE9(::Class_0_16E4307DCC419505_363* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_363*, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_31AD652EE1F91BE9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7F652479251D0500(::Class_0_16E4307DCC419505_363* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_363*, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C082E983A335230D_METHOD_2_7F652479251D0500_OFFSET))(this, a1, a2, a3, a4);
	}
};
