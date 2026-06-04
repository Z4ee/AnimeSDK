#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_FFBC8C99F6B84D8F;
namespace System { class String; }

#define CLASS_4_4C03010B7D6B2C83_METHOD_4_539A8EE923394EA7_OFFSET UNITYSDK_OFFSET(0x1996E710)
#define CLASS_4_4C03010B7D6B2C83_METHOD_4_8C07D9C793444934_OFFSET UNITYSDK_OFFSET(0x1996E5F0)
#define CLASS_4_4C03010B7D6B2C83__CTOR_OFFSET UNITYSDK_OFFSET(0x1996E690)

inline static constexpr unsigned int Class_4_4C03010B7D6B2C83_TypeDefinitionIndex = 19001;

class Class_4_4C03010B7D6B2C83 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_0; // 0x18
	::Il2CppArray<::Class_2_FFBC8C99F6B84D8F*>* Field_4_1; // 0x20
	::System::Single Field_4_2; // 0x28
	::System::Single Field_4_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4C03010B7D6B2C83__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_8C07D9C793444934(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4C03010B7D6B2C83*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4C03010B7D6B2C83*&))((::PBYTE)hIl2Cpp + CLASS_4_4C03010B7D6B2C83_METHOD_4_8C07D9C793444934_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_539A8EE923394EA7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_4C03010B7D6B2C83* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_4C03010B7D6B2C83*))((::PBYTE)hIl2Cpp + CLASS_4_4C03010B7D6B2C83_METHOD_4_539A8EE923394EA7_OFFSET))(a1, a2);
	}
};
