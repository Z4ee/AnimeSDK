#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

class Class_2_6660DE6E19DC27BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D4034BA540559914_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A4E2C0)
#define CLASS_2_D4034BA540559914_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16A4F9E0)
#define CLASS_2_D4034BA540559914_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x16A4FA50)
#define CLASS_2_D4034BA540559914_METHOD_2_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0x16A4EBB0)
#define CLASS_2_D4034BA540559914_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x16A4E4C0)
#define CLASS_2_D4034BA540559914__CTOR_OFFSET UNITYSDK_OFFSET(0x16A4E100)
#define CLASS_2_D4034BA540559914___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A4F980)

inline static constexpr unsigned int Class_2_D4034BA540559914_TypeDefinitionIndex = 32673;

class Class_2_D4034BA540559914 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::String* Field_2_5; // 0x18
	::Class_2_6660DE6E19DC27BF* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_2_6660DE6E19DC27BF*>* Field_2_9; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::Int32 Field_2_7; // 0x38
	::System::Single Field_2_8; // 0x3C
	::System::Single Field_2_3; // 0x40
	::System::Single Field_2_2; // 0x44
	::System::Int32 Field_2_6; // 0x48
	::System::Single Field_2_1; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D4034BA540559914__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4034BA540559914_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4034BA540559914_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Void Method_2_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D4034BA540559914_METHOD_2_8608350DFEDEE4FD_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4034BA540559914___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4034BA540559914_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D4034BA540559914_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
