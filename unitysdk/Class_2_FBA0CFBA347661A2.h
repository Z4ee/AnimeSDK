#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_102FCE4946933EAB;
class Class_3_D44B7E10FC746152;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FBA0CFBA347661A2_METHOD_2_0DC04D95FC16788D_OFFSET UNITYSDK_OFFSET(0x12FBCB50)
#define CLASS_2_FBA0CFBA347661A2_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0x12FBCD20)
#define CLASS_2_FBA0CFBA347661A2_METHOD_2_46F975FEC6CED422_OFFSET UNITYSDK_OFFSET(0x12FBCEB0)
#define CLASS_2_FBA0CFBA347661A2_METHOD_2_BB46C9985B021C91_OFFSET UNITYSDK_OFFSET(0x12FBCA10)
#define CLASS_2_FBA0CFBA347661A2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12FBC980)
#define CLASS_2_FBA0CFBA347661A2_ONSTART_OFFSET UNITYSDK_OFFSET(0x12FBC9C0)
#define CLASS_2_FBA0CFBA347661A2__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBCA00)

inline static constexpr unsigned int Class_2_FBA0CFBA347661A2_TypeDefinitionIndex = 83574;

class Class_2_FBA0CFBA347661A2 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBA0CFBA347661A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBA0CFBA347661A2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBA0CFBA347661A2_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_BB46C9985B021C91(::Class_3_102FCE4946933EAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_102FCE4946933EAB*))((::PBYTE)hIl2Cpp + CLASS_2_FBA0CFBA347661A2_METHOD_2_BB46C9985B021C91_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DC04D95FC16788D(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FBA0CFBA347661A2_METHOD_2_0DC04D95FC16788D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_D44B7E10FC746152*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_D44B7E10FC746152*>*))((::PBYTE)hIl2Cpp + CLASS_2_FBA0CFBA347661A2_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}

	::System::Void Method_2_46F975FEC6CED422(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Collections::Generic::List_1<::System::Int32>* a9, ::System::Action* a10, ::System::Action* a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FBA0CFBA347661A2_METHOD_2_46F975FEC6CED422_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
};
