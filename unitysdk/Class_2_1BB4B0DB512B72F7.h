#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_1BB4B0DB512B72F7_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9553D30)
#define CLASS_2_1BB4B0DB512B72F7_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x9553CA0)
#define CLASS_2_1BB4B0DB512B72F7_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9553E10)
#define CLASS_2_1BB4B0DB512B72F7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9553D70)
#define CLASS_2_1BB4B0DB512B72F7_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9553B20)
#define CLASS_2_1BB4B0DB512B72F7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9553990)
#define CLASS_2_1BB4B0DB512B72F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x9553C20)
#define CLASS_2_1BB4B0DB512B72F7__CTOR_OFFSET UNITYSDK_OFFSET(0x9553C90)

inline static constexpr unsigned int Class_2_1BB4B0DB512B72F7_TypeDefinitionIndex = 69557;

class Class_2_1BB4B0DB512B72F7 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0xD9; // 0x0
	::System::String* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>* Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BB4B0DB512B72F7_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
