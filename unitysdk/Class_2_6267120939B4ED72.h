#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_9F2FCC0519F3E06F_32;
class Class_3_C0193181990E79BE_8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6267120939B4ED72_METHOD_2_3A08FD6F6C9BA32C_OFFSET UNITYSDK_OFFSET(0x14D32E60)
#define CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_1_OFFSET UNITYSDK_OFFSET(0x14D33490)
#define CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_OFFSET UNITYSDK_OFFSET(0x14D32C60)
#define CLASS_2_6267120939B4ED72_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x14D332B0)
#define CLASS_2_6267120939B4ED72_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x14D32A60)
#define CLASS_2_6267120939B4ED72_METHOD_2_ED2226B64ECE70F7_OFFSET UNITYSDK_OFFSET(0x14D331C0)
#define CLASS_2_6267120939B4ED72_ONSTART_OFFSET UNITYSDK_OFFSET(0x14D32A20)
#define CLASS_2_6267120939B4ED72__CTOR_OFFSET UNITYSDK_OFFSET(0x14D32BC0)

inline static constexpr unsigned int Class_2_6267120939B4ED72_TypeDefinitionIndex = 81990;

class Class_2_6267120939B4ED72 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_53718CE23ECAD805(::Class_3_9F2FCC0519F3E06F_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_32*))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A08FD6F6C9BA32C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_3A08FD6F6C9BA32C_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED2226B64ECE70F7(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_ED2226B64ECE70F7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_53718CE23ECAD805_1(::Class_3_C0193181990E79BE_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C0193181990E79BE_8*))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_1_OFFSET))(this, a1);
	}
};
