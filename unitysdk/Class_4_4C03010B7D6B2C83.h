#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_FFBC8C99F6B84D8F;
namespace System { class String; }

#define CLASS_4_4C03010B7D6B2C83_METHOD_4_539A8EE923394EA7_OFFSET UNITYSDK_OFFSET(0x1C7C3700)
#define CLASS_4_4C03010B7D6B2C83_METHOD_4_C0421DF35F714DA6_OFFSET UNITYSDK_OFFSET(0x1C7C3650)
#define CLASS_4_4C03010B7D6B2C83__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C36C0)

inline static constexpr unsigned int Class_4_4C03010B7D6B2C83_TypeDefinitionIndex = 19894;

class Class_4_4C03010B7D6B2C83 : public ::RPG::GameCore::STTaskConfig
{
public:
	::Il2CppArray<::Class_2_FFBC8C99F6B84D8F*>* HEBOJJJAHEE; // 0x18
	::System::String* ANNDPINHNML; // 0x20
	::System::Single NJIGKOHDINP; // 0x28
	::System::Single MBPCNEOIKIC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4C03010B7D6B2C83__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_C0421DF35F714DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4C03010B7D6B2C83*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4C03010B7D6B2C83*&))((::PBYTE)hIl2Cpp + CLASS_4_4C03010B7D6B2C83_METHOD_4_C0421DF35F714DA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_539A8EE923394EA7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4C03010B7D6B2C83* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4C03010B7D6B2C83*))((::PBYTE)hIl2Cpp + CLASS_4_4C03010B7D6B2C83_METHOD_4_539A8EE923394EA7_OFFSET))(a1, a2);
	}
};
