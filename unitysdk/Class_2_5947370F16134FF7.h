#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_025FF4981524A424_495;
class Class_3_025FF4981524A424_675;
class Class_3_48A3D3A34C52331D_1;
class Class_3_48A3D3A34C52331D_35;
class Class_3_48A3D3A34C52331D_41;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5947370F16134FF7_METHOD_2_055E26EBF3E72562_OFFSET UNITYSDK_OFFSET(0x1645D0E0)
#define CLASS_2_5947370F16134FF7_METHOD_2_290B5065C6C4B782_OFFSET UNITYSDK_OFFSET(0x1645D370)
#define CLASS_2_5947370F16134FF7_METHOD_2_437EA852AACAFB11_OFFSET UNITYSDK_OFFSET(0x1645D680)
#define CLASS_2_5947370F16134FF7_METHOD_2_56BFC37C65A3887F_1_OFFSET UNITYSDK_OFFSET(0x1645CF40)
#define CLASS_2_5947370F16134FF7_METHOD_2_56BFC37C65A3887F_OFFSET UNITYSDK_OFFSET(0x1645CDA0)
#define CLASS_2_5947370F16134FF7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1645CD50)
#define CLASS_2_5947370F16134FF7_ONSTART_OFFSET UNITYSDK_OFFSET(0x1645CD10)
#define CLASS_2_5947370F16134FF7__CTOR_OFFSET UNITYSDK_OFFSET(0x1645CD90)

inline static constexpr unsigned int Class_2_5947370F16134FF7_TypeDefinitionIndex = 68788;

class Class_2_5947370F16134FF7 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_56BFC37C65A3887F(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_675*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_675*>*))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7_METHOD_2_56BFC37C65A3887F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_56BFC37C65A3887F_1(::System::Int32 a1, ::System::Action_1<::Class_3_48A3D3A34C52331D_41*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_48A3D3A34C52331D_41*>*))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7_METHOD_2_56BFC37C65A3887F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_055E26EBF3E72562(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_495*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_495*>*))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7_METHOD_2_055E26EBF3E72562_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_290B5065C6C4B782(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Action_1<::Class_3_48A3D3A34C52331D_1*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::Class_3_48A3D3A34C52331D_1*>*))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7_METHOD_2_290B5065C6C4B782_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_437EA852AACAFB11(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::Class_3_48A3D3A34C52331D_35*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::Class_3_48A3D3A34C52331D_35*>*))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7_METHOD_2_437EA852AACAFB11_OFFSET))(this, a1, a2, a3);
	}
};
