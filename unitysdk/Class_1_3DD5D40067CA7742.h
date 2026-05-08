#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SocialPostSizeType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_241;
class Class_2_75B55FBF5B9BC90B;

#define CLASS_1_3DD5D40067CA7742_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0xFF5A2E0)
#define CLASS_1_3DD5D40067CA7742_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0xFF5A330)
#define CLASS_1_3DD5D40067CA7742__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFF5A1E0)
#define CLASS_1_3DD5D40067CA7742__CTOR_OFFSET UNITYSDK_OFFSET(0xFF5A120)

inline static constexpr unsigned int Class_1_3DD5D40067CA7742_TypeDefinitionIndex = 54939;

class Class_1_3DD5D40067CA7742 : public ::System::Object
{
public:
	::Class_2_75B55FBF5B9BC90B* Field_1_1; // 0x10
	::MoleMole::SocialPostSizeType Field_1_2; // 0x18
	::Struct_2_019938BC9C50B169_1 Field_1_0; // 0x1C

	::System::Void _ctor(::Struct_2_019938BC9C50B169_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Struct_2_019938BC9C50B169_1 a1, ::Class_2_75B55FBF5B9BC90B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1, ::Class_2_75B55FBF5B9BC90B*))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_241* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_241*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::Struct_2_019938BC9C50B169_1 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_019938BC9C50B169_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}
};
