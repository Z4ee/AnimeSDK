#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE29B49AC03370B6_Struct_2_CF78FCC04B71BFFD.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectReadyFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_32D8C20D46CEFA3D_1.h"
#include "unitysdk/System/Object.h"

class Class_1_B6B0D4D95C980CCC;
class Class_1_B85817849BC6CF88;
namespace Foundation::ViewObject { template <typename T> class IViewObjectComponent_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BE29B49AC03370B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F6D460)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x10F6D610)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x10F6DE20)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x10F6DE30)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x10F6DEE0)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_A0AFB1B0F938BF9A_OFFSET UNITYSDK_OFFSET(0x10F6D830)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_BE536A0A9C636F6F_OFFSET UNITYSDK_OFFSET(0x10F6D670)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_E1BED5485EF1847F_OFFSET UNITYSDK_OFFSET(0x10F6D5C0)
#define CLASS_1_BE29B49AC03370B6_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x10F6DE90)
#define CLASS_1_BE29B49AC03370B6__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6D530)

inline static constexpr unsigned int Class_1_BE29B49AC03370B6_TypeDefinitionIndex = 85591;

class Class_1_BE29B49AC03370B6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::IViewObjectComponent_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_1_2; // 0x10
	::Class_1_B85817849BC6CF88* Field_1_1; // 0x18
	::Struct_2_32D8C20D46CEFA3D_1 Field_1_3; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::Foundation::ViewObject::EViewObjectMetaFlags Field_1_6; // 0x2C
	::Foundation::ViewObject::EViewObjectReadyFlags Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E1BED5485EF1847F(::Foundation::ViewObject::EViewObjectReadyFlags a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_E1BED5485EF1847F_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_B85817849BC6CF88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B85817849BC6CF88*))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	static ::Class_1_BE29B49AC03370B6_Struct_2_CF78FCC04B71BFFD Method_1_BE536A0A9C636F6F(::Class_1_BE29B49AC03370B6*& a1)
	{
		return ((::Class_1_BE29B49AC03370B6_Struct_2_CF78FCC04B71BFFD(*)(::Class_1_BE29B49AC03370B6*&))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_BE536A0A9C636F6F_OFFSET))(a1);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_1_A0AFB1B0F938BF9A(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_A0AFB1B0F938BF9A_OFFSET))(this, a1);
	}

	::Class_1_B85817849BC6CF88* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B85817849BC6CF88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_B6B0D4D95C980CCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6B0D4D95C980CCC*))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B85817849BC6CF88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B85817849BC6CF88*))((::PBYTE)hIl2Cpp + CLASS_1_BE29B49AC03370B6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
