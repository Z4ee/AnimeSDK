#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F1011C1DB6F9F51A;
class Class_2_C23DD4758FBF845D;
namespace RPG::Client { class SPProgress; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A70CAB2D313ACC44_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x176F5570)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x176F59C0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x176F56B0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x176F5920)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x176F54C0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x176F5460)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x176F5880)
#define CLASS_2_A70CAB2D313ACC44__CTOR_OFFSET UNITYSDK_OFFSET(0x176F5A10)
#define CLASS_2_A70CAB2D313ACC44__ONBIND_OFFSET UNITYSDK_OFFSET(0x176F51A0)

inline static constexpr unsigned int Class_2_A70CAB2D313ACC44_TypeDefinitionIndex = 71805;

class Class_2_A70CAB2D313ACC44 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::SPProgress* NIFIIGPEMJA; // 0x60
	::UnityEngine::Transform* JHOHLNJDJCE; // 0x68
	::UnityEngine::Transform* EHCGMIMEPCI; // 0x70
	::Class_1_F1011C1DB6F9F51A* APPIHABBCGK; // 0x78
	::UnityEngine::Transform* DILJKKIJCCL; // 0x80
	::System::Collections::Generic::List_1<::Class_2_C23DD4758FBF845D*>* HICJMOPEGCA; // 0x88
	::System::Nullable_1<::System::Int32> IOBINHIJKEJ; // 0x90
	::System::Boolean AKBPNMEFGAO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}
};
