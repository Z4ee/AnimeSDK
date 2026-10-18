#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F1011C1DB6F9F51A;
class Class_2_5D99992BD45517C7;
namespace RPG::Client { class SPProgress; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A70CAB2D313ACC44_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBCF5590)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xBCF59F0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xBCF56D0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xBCF5950)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xBCF54E0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xBCF5450)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xBCF58A0)
#define CLASS_2_A70CAB2D313ACC44__CTOR_OFFSET UNITYSDK_OFFSET(0xBCF5A40)
#define CLASS_2_A70CAB2D313ACC44__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCF5160)

inline static constexpr unsigned int Class_2_A70CAB2D313ACC44_TypeDefinitionIndex = 71870;

class Class_2_A70CAB2D313ACC44 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* DILJKKIJCCL; // 0x60
	::Class_1_F1011C1DB6F9F51A* APPIHABBCGK; // 0x68
	::UnityEngine::Transform* EHCGMIMEPCI; // 0x70
	::RPG::Client::SPProgress* NIFIIGPEMJA; // 0x78
	::UnityEngine::Transform* JHOHLNJDJCE; // 0x80
	::System::Collections::Generic::List_1<::Class_2_5D99992BD45517C7*>* HICJMOPEGCA; // 0x88
	::System::Boolean AKBPNMEFGAO; // 0x90
	::System::Nullable_1<::System::Int32> IOBINHIJKEJ; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
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
