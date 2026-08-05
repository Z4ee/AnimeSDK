#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SocialPostSizeType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_231;
class Class_2_6DA289675FB59393;

#define CLASS_1_1F4DFD6C02320296_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x169B9640)
#define CLASS_1_1F4DFD6C02320296_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x169B9690)
#define CLASS_1_1F4DFD6C02320296__CTOR_1_OFFSET UNITYSDK_OFFSET(0x169B9540)
#define CLASS_1_1F4DFD6C02320296__CTOR_OFFSET UNITYSDK_OFFSET(0x169B9470)

inline static constexpr unsigned int Class_1_1F4DFD6C02320296_TypeDefinitionIndex = 69268;

class Class_1_1F4DFD6C02320296 : public ::System::Object
{
public:
	::Class_2_6DA289675FB59393* Field_1_1; // 0x10
	::Struct_2_019938BC9C50B169_1 Field_1_2; // 0x18
	::MoleMole::SocialPostSizeType Field_1_0; // 0x20

	::System::Void _ctor(::Struct_2_019938BC9C50B169_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + CLASS_1_1F4DFD6C02320296__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Struct_2_019938BC9C50B169_1 a1, ::Class_2_6DA289675FB59393* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1, ::Class_2_6DA289675FB59393*))((::PBYTE)hIl2Cpp + CLASS_1_1F4DFD6C02320296__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_231* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_231*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F4DFD6C02320296_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::Struct_2_019938BC9C50B169_1 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_019938BC9C50B169_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F4DFD6C02320296_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}
};
