#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_2CF31AD2A208F31C_METHOD_4_965E093F3E1404F4_OFFSET UNITYSDK_OFFSET(0x19112EE0)
#define CLASS_4_2CF31AD2A208F31C_METHOD_4_BE6C7711392DA568_OFFSET UNITYSDK_OFFSET(0x19112FB0)
#define CLASS_4_2CF31AD2A208F31C__CTOR_OFFSET UNITYSDK_OFFSET(0x19112F60)

inline static constexpr unsigned int Class_4_2CF31AD2A208F31C_TypeDefinitionIndex = 21215;

class Class_4_2CF31AD2A208F31C : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_0; // 0x18
	::System::String* Field_4_1; // 0x20
	::System::Single Field_4_2; // 0x28
	::System::Boolean Field_4_3; // 0x2C
	::System::Boolean Field_4_4; // 0x2D
	::System::Single Field_4_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2CF31AD2A208F31C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_965E093F3E1404F4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2CF31AD2A208F31C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2CF31AD2A208F31C*&))((::PBYTE)hIl2Cpp + CLASS_4_2CF31AD2A208F31C_METHOD_4_965E093F3E1404F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BE6C7711392DA568(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2CF31AD2A208F31C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2CF31AD2A208F31C*))((::PBYTE)hIl2Cpp + CLASS_4_2CF31AD2A208F31C_METHOD_4_BE6C7711392DA568_OFFSET))(a1, a2);
	}
};
