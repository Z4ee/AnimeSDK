#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_13F4518AF1F3F331_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x138C2100)
#define CLASS_2_13F4518AF1F3F331_METHOD_2_9186BEA3D5BE73FB_OFFSET UNITYSDK_OFFSET(0x138C2190)
#define CLASS_2_13F4518AF1F3F331_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x138C2270)
#define CLASS_2_13F4518AF1F3F331__CCTOR_OFFSET UNITYSDK_OFFSET(0x138C2080)
#define CLASS_2_13F4518AF1F3F331__CTOR_OFFSET UNITYSDK_OFFSET(0x138C20F0)

inline static constexpr unsigned int Class_2_13F4518AF1F3F331_TypeDefinitionIndex = 40303;

class Class_2_13F4518AF1F3F331 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x36; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_6; // 0x20
	::Class_1_B7E341C5F1A6F199* Field_2_5; // 0x28
	::System::UInt32 Field_2_0; // 0x30
	::System::Int32 Field_2_7; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_13F4518AF1F3F331__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13F4518AF1F3F331__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13F4518AF1F3F331_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_9186BEA3D5BE73FB(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_13F4518AF1F3F331_METHOD_2_9186BEA3D5BE73FB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13F4518AF1F3F331_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
