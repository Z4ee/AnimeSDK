#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_6975F285B52F654C_3;
class Class_3_F402EAE70F3E0E28_97;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6267120939B4ED72_METHOD_2_3A08FD6F6C9BA32C_OFFSET UNITYSDK_OFFSET(0x15755B80)
#define CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_1_OFFSET UNITYSDK_OFFSET(0x15755FC0)
#define CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_OFFSET UNITYSDK_OFFSET(0x15755980)
#define CLASS_2_6267120939B4ED72_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x157561C0)
#define CLASS_2_6267120939B4ED72_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15755780)
#define CLASS_2_6267120939B4ED72_METHOD_2_ED2226B64ECE70F7_OFFSET UNITYSDK_OFFSET(0x15755EE0)
#define CLASS_2_6267120939B4ED72_ONSTART_OFFSET UNITYSDK_OFFSET(0x15755740)
#define CLASS_2_6267120939B4ED72__CTOR_OFFSET UNITYSDK_OFFSET(0x157558E0)

inline static constexpr unsigned int Class_2_6267120939B4ED72_TypeDefinitionIndex = 71750;

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

	::System::Void Method_2_53718CE23ECAD805(::Class_3_6975F285B52F654C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6975F285B52F654C_3*))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A08FD6F6C9BA32C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_3A08FD6F6C9BA32C_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED2226B64ECE70F7(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_ED2226B64ECE70F7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_53718CE23ECAD805_1(::Class_3_F402EAE70F3E0E28_97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F402EAE70F3E0E28_97*))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_53718CE23ECAD805_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6267120939B4ED72_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}
};
