#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class PlayerAction; }
namespace System { class String; }

#define CLASS_1_8E573AA2FA83D64C_METHOD_1_503CD42A0C349327_OFFSET UNITYSDK_OFFSET(0x111ABA90)
#define CLASS_1_8E573AA2FA83D64C_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x111ABB90)
#define CLASS_1_8E573AA2FA83D64C_METHOD_1_C42C96E5F42EBF58_OFFSET UNITYSDK_OFFSET(0x111ABAE0)
#define CLASS_1_8E573AA2FA83D64C__CTOR_OFFSET UNITYSDK_OFFSET(0x111ABB80)

inline static constexpr unsigned int Class_1_8E573AA2FA83D64C_TypeDefinitionIndex = 62903;

class Class_1_8E573AA2FA83D64C : public ::System::Object
{
public:
	::InControl::PlayerAction* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E573AA2FA83D64C__CTOR_OFFSET))(this);
	}

	static ::Class_1_8E573AA2FA83D64C* Method_1_503CD42A0C349327(::System::String* a1)
	{
		return ((::Class_1_8E573AA2FA83D64C*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E573AA2FA83D64C_METHOD_1_503CD42A0C349327_OFFSET))(a1);
	}

	static ::Class_1_8E573AA2FA83D64C* Method_1_C42C96E5F42EBF58(::InControl::PlayerAction* a1)
	{
		return ((::Class_1_8E573AA2FA83D64C*(*)(::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + CLASS_1_8E573AA2FA83D64C_METHOD_1_C42C96E5F42EBF58_OFFSET))(a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E573AA2FA83D64C_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}
};
