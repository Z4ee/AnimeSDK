#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_F0FE5FDA9D10CD3E_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x18BBB0E0)
#define CLASS_4_F0FE5FDA9D10CD3E_METHOD_4_BE6C7711392DA568_OFFSET UNITYSDK_OFFSET(0x18BBB1B0)
#define CLASS_4_F0FE5FDA9D10CD3E__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBB160)

inline static constexpr unsigned int Class_4_F0FE5FDA9D10CD3E_TypeDefinitionIndex = 21319;

class Class_4_F0FE5FDA9D10CD3E : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_4; // 0x18
	::System::String* Field_4_1; // 0x20
	::System::Boolean Field_4_3; // 0x28
	::System::Boolean Field_4_0; // 0x29
	::System::Boolean Field_4_5; // 0x2A
	::System::Boolean Field_4_2; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F0FE5FDA9D10CD3E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F0FE5FDA9D10CD3E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F0FE5FDA9D10CD3E*&))((::PBYTE)hIl2Cpp + CLASS_4_F0FE5FDA9D10CD3E_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BE6C7711392DA568(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F0FE5FDA9D10CD3E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F0FE5FDA9D10CD3E*))((::PBYTE)hIl2Cpp + CLASS_4_F0FE5FDA9D10CD3E_METHOD_4_BE6C7711392DA568_OFFSET))(a1, a2);
	}
};
