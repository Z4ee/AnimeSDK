#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralActivityTagContext; }
namespace MoleMole { class UIGeneralActivityTagWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_380D1218B17A912A_METHOD_1_08E8C23EBFB58CD5_OFFSET UNITYSDK_OFFSET(0x13D14580)
#define CLASS_1_380D1218B17A912A_METHOD_1_093A54D42DEBE4C0_OFFSET UNITYSDK_OFFSET(0x13D13780)
#define CLASS_1_380D1218B17A912A_METHOD_1_19A575A15270AEC1_OFFSET UNITYSDK_OFFSET(0x13D13B50)
#define CLASS_1_380D1218B17A912A_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x13D13EE0)
#define CLASS_1_380D1218B17A912A_METHOD_1_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x13D147C0)
#define CLASS_1_380D1218B17A912A_METHOD_1_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x13D13570)
#define CLASS_1_380D1218B17A912A_METHOD_1_B7E4B77CFA6936E0_OFFSET UNITYSDK_OFFSET(0x13D13D90)
#define CLASS_1_380D1218B17A912A_METHOD_1_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x13D131E0)
#define CLASS_1_380D1218B17A912A_METHOD_1_C96BFC2C32EF1CD4_OFFSET UNITYSDK_OFFSET(0x13D14640)
#define CLASS_1_380D1218B17A912A_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x13D14520)
#define CLASS_1_380D1218B17A912A_METHOD_1_FC71486C26B5959F_OFFSET UNITYSDK_OFFSET(0x13D142B0)
#define CLASS_1_380D1218B17A912A__CTOR_OFFSET UNITYSDK_OFFSET(0x13D131D0)

inline static constexpr unsigned int Class_1_380D1218B17A912A_TypeDefinitionIndex = 68193;

class Class_1_380D1218B17A912A : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralActivityTagWidgetController*>* Field_1_5; // 0x18
	::MoleMole::UIBaseController* Field_1_2; // 0x20
	::Class_1_D375C91CCE5D3999* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralActivityTagWidgetController*>* Field_1_4; // 0x30
	::UnityEngine::Transform* Field_1_1; // 0x38
	::System::Action* Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_BD658202BB4C4431_OFFSET))(this);
	}

	::MoleMole::UIGeneralActivityTagWidgetController* Method_1_19A575A15270AEC1(::UnityEngine::Events::UnityAction* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::UIGeneralActivityTagWidgetController*(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_19A575A15270AEC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_093A54D42DEBE4C0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_093A54D42DEBE4C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_1_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_6747250BC2D13457_OFFSET))(this);
	}

	::System::Void Method_1_FC71486C26B5959F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_FC71486C26B5959F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_08E8C23EBFB58CD5(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_08E8C23EBFB58CD5_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIGeneralActivityTagWidgetController* Method_1_B7E4B77CFA6936E0(::MoleMole::UIGeneralActivityTagContext* a1)
	{
		return ((::MoleMole::UIGeneralActivityTagWidgetController*(*)(::PVOID, ::MoleMole::UIGeneralActivityTagContext*))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_B7E4B77CFA6936E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C96BFC2C32EF1CD4(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_C96BFC2C32EF1CD4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BE5DBAE268F9022()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_380D1218B17A912A_METHOD_1_3BE5DBAE268F9022_OFFSET))(this);
	}
};
