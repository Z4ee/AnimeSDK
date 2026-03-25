#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"

#define CLASS_2_1FB6CA29B955D4EA_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x167E6DB0)
#define CLASS_2_1FB6CA29B955D4EA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x167E7120)
#define CLASS_2_1FB6CA29B955D4EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x167E7090)
#define CLASS_2_1FB6CA29B955D4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x167E6DA0)

inline static constexpr unsigned int Class_2_1FB6CA29B955D4EA_TypeDefinitionIndex = 32944;

class Class_2_1FB6CA29B955D4EA : public ::Class_1_5BE136E515AF9A61_1
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1FB6CA29B955D4EA_TypeDefinitionIndex)->GetStaticField(0x207B0);
	}
	::RPG::Client::LittleGame::TRFOperate Field_2_0; // 0x18

	::System::Void _ctor(::RPG::Client::LittleGame::TRFOperate a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFOperate))((::PBYTE)hIl2Cpp + CLASS_2_1FB6CA29B955D4EA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1FB6CA29B955D4EA__CCTOR_OFFSET))();
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB6CA29B955D4EA_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB6CA29B955D4EA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
