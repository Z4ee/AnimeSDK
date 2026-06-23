#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
class Class_1_F4BC7A67D37045F0;
class Class_2_1BB071BAE5B88115;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }

#define CLASS_1_29739DD5D8C9B1B7_METHOD_1_79F0601CC0C1E533_OFFSET UNITYSDK_OFFSET(0x12EACD70)
#define CLASS_1_29739DD5D8C9B1B7_METHOD_1_AFB3E228B50FFB8C_OFFSET UNITYSDK_OFFSET(0x12EACA80)
#define CLASS_1_29739DD5D8C9B1B7__CTOR_OFFSET UNITYSDK_OFFSET(0x12EACA70)

inline static constexpr unsigned int Class_1_29739DD5D8C9B1B7_TypeDefinitionIndex = 80646;

class Class_1_29739DD5D8C9B1B7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29739DD5D8C9B1B7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_AFB3E228B50FFB8C(::Class_1_F4BC7A67D37045F0* a1)
	{
		return ((::System::Void(*)(::Class_1_F4BC7A67D37045F0*))((::PBYTE)hIl2Cpp + CLASS_1_29739DD5D8C9B1B7_METHOD_1_AFB3E228B50FFB8C_OFFSET))(a1);
	}

	static ::Class_2_1BB071BAE5B88115* Method_1_79F0601CC0C1E533(::Class_1_D375C91CCE5D3999* a1, ::MoleMole::UIBaseController* a2, ::UnityEngine::Transform* a3)
	{
		return ((::Class_2_1BB071BAE5B88115*(*)(::Class_1_D375C91CCE5D3999*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_29739DD5D8C9B1B7_METHOD_1_79F0601CC0C1E533_OFFSET))(a1, a2, a3);
	}
};
