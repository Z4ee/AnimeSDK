#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_DB9CAAB5758BEDF0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA9B6BD0)
#define CLASS_2_DB9CAAB5758BEDF0_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA9B6A90)
#define CLASS_2_DB9CAAB5758BEDF0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9B69A0)
#define CLASS_2_DB9CAAB5758BEDF0_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA9B69F0)
#define CLASS_2_DB9CAAB5758BEDF0__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B6B40)
#define CLASS_2_DB9CAAB5758BEDF0__ONBIND_OFFSET UNITYSDK_OFFSET(0xA9B68F0)
#define CLASS_2_DB9CAAB5758BEDF0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA9B6B70)

inline static constexpr unsigned int Class_2_DB9CAAB5758BEDF0_TypeDefinitionIndex = 58815;

class Class_2_DB9CAAB5758BEDF0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Animator* Field_2_0; // 0x60
	::System::Boolean Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9CAAB5758BEDF0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9CAAB5758BEDF0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9CAAB5758BEDF0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB9CAAB5758BEDF0_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9CAAB5758BEDF0_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9CAAB5758BEDF0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB9CAAB5758BEDF0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
