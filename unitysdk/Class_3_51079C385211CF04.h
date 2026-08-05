#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"

namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class EventArgs; }

#define CLASS_3_51079C385211CF04_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x170FDA80)
#define CLASS_3_51079C385211CF04_METHOD_3_2A90EC3CDF3BC3BF_OFFSET UNITYSDK_OFFSET(0x170FDB20)
#define CLASS_3_51079C385211CF04_METHOD_3_6103E5D7CF046E3B_OFFSET UNITYSDK_OFFSET(0x170FD670)
#define CLASS_3_51079C385211CF04_METHOD_3_B7AD864D7A4DD9C6_OFFSET UNITYSDK_OFFSET(0x170FDC50)
#define CLASS_3_51079C385211CF04_METHOD_3_BD19CE62599E3360_OFFSET UNITYSDK_OFFSET(0x170FD600)
#define CLASS_3_51079C385211CF04_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170FE0B0)
#define CLASS_3_51079C385211CF04_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x170FE0A0)
#define CLASS_3_51079C385211CF04_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x170FD480)
#define CLASS_3_51079C385211CF04_START_OFFSET UNITYSDK_OFFSET(0x170FD210)
#define CLASS_3_51079C385211CF04__CTOR_OFFSET UNITYSDK_OFFSET(0x170FDA10)

inline static constexpr unsigned int Class_3_51079C385211CF04_TypeDefinitionIndex = 84158;

class Class_3_51079C385211CF04 : public ::Class_2_5560EE9F1F33A604
{
public:
	::MoleMole::UIHollowChessboard3DModelController* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_3_BD19CE62599E3360(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_METHOD_3_BD19CE62599E3360_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_2A90EC3CDF3BC3BF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_METHOD_3_2A90EC3CDF3BC3BF_OFFSET))(this, a1);
	}

	::System::Void Method_3_6103E5D7CF046E3B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_METHOD_3_6103E5D7CF046E3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_3_B7AD864D7A4DD9C6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_METHOD_3_B7AD864D7A4DD9C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
