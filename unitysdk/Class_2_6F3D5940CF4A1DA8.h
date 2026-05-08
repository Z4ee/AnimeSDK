#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define CLASS_2_6F3D5940CF4A1DA8_METHOD_2_122857B23140B7E4_OFFSET UNITYSDK_OFFSET(0x143D5040)
#define CLASS_2_6F3D5940CF4A1DA8_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x143D4F20)
#define CLASS_2_6F3D5940CF4A1DA8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143D4FB0)
#define CLASS_2_6F3D5940CF4A1DA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x143D4EA0)
#define CLASS_2_6F3D5940CF4A1DA8__CTOR_OFFSET UNITYSDK_OFFSET(0x143D4F10)

inline static constexpr unsigned int Class_2_6F3D5940CF4A1DA8_TypeDefinitionIndex = 79228;

class Class_2_6F3D5940CF4A1DA8 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x59; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6F3D5940CF4A1DA8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F3D5940CF4A1DA8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F3D5940CF4A1DA8_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F3D5940CF4A1DA8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_122857B23140B7E4(::System::UInt32 a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_6F3D5940CF4A1DA8_METHOD_2_122857B23140B7E4_OFFSET))(this, a1, a2);
	}
};
