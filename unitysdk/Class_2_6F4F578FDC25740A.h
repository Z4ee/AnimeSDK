#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_42858E6F4249A13B.h"

class Class_1_3A97FC721BDAAE78;
class Class_2_208CC9941471731A_1039;
namespace MoleMole { class ConfigTempleLevelUpEvent; }
namespace System { class String; }

#define CLASS_2_6F4F578FDC25740A_METHOD_2_C0FBE2EB5AC963BC_OFFSET UNITYSDK_OFFSET(0x16FFB980)
#define CLASS_2_6F4F578FDC25740A_METHOD_2_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0x16FFB5E0)
#define CLASS_2_6F4F578FDC25740A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16FFC990)
#define CLASS_2_6F4F578FDC25740A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FFC900)
#define CLASS_2_6F4F578FDC25740A__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFB420)

inline static constexpr unsigned int Class_2_6F4F578FDC25740A_TypeDefinitionIndex = 58814;

class Class_2_6F4F578FDC25740A : public ::Class_1_42858E6F4249A13B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Class_2_208CC9941471731A_1039* Field_2_4; // 0x28
	::Class_2_208CC9941471731A_1039* Field_2_3; // 0x30

	::System::Void _ctor(::Class_1_3A97FC721BDAAE78* a1, ::MoleMole::ConfigTempleLevelUpEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A97FC721BDAAE78*, ::MoleMole::ConfigTempleLevelUpEvent*))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C38AA259F0B46320()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_METHOD_2_C38AA259F0B46320_OFFSET))(this);
	}

	::System::Void Method_2_C0FBE2EB5AC963BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_METHOD_2_C0FBE2EB5AC963BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
