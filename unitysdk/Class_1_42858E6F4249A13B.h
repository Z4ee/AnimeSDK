#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_465;
class Class_1_3A97FC721BDAAE78;
namespace MoleMole { class ConfigTempleLevelUpEvent; }

#define CLASS_1_42858E6F4249A13B_METHOD_1_9E992ACDF90158E8_OFFSET UNITYSDK_OFFSET(0x114043B0)
#define CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11404370)
#define CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11404330)
#define CLASS_1_42858E6F4249A13B_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11404460)
#define CLASS_1_42858E6F4249A13B__CTOR_OFFSET UNITYSDK_OFFSET(0x11404320)

inline static constexpr unsigned int Class_1_42858E6F4249A13B_TypeDefinitionIndex = 73291;

class Class_1_42858E6F4249A13B : public ::System::Object
{
public:
	::Class_1_3A97FC721BDAAE78* Field_1_0; // 0x10
	::MoleMole::ConfigTempleLevelUpEvent* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_3A97FC721BDAAE78* a1, ::MoleMole::ConfigTempleLevelUpEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A97FC721BDAAE78*, ::MoleMole::ConfigTempleLevelUpEvent*))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_9E992ACDF90158E8(::Class_0_16E4307DCC419505_465* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_465*))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_9E992ACDF90158E8_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}
};
