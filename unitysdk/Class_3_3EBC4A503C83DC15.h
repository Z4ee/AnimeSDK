#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68C34B5C1C40C2FF.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_3EBC4A503C83DC15_METHOD_3_4077B7F0C83FF920_OFFSET UNITYSDK_OFFSET(0x16E22710)
#define CLASS_3_3EBC4A503C83DC15_METHOD_3_5A30A2F2D7363E37_OFFSET UNITYSDK_OFFSET(0x16E226D0)
#define CLASS_3_3EBC4A503C83DC15__CTOR_OFFSET UNITYSDK_OFFSET(0x16E22700)

inline static constexpr unsigned int Class_3_3EBC4A503C83DC15_TypeDefinitionIndex = 16750;

class Class_3_3EBC4A503C83DC15 : public ::Class_2_68C34B5C1C40C2FF
{
public:
	::Il2CppArray<::Class_2_68C34B5C1C40C2FF*>* Field_3_1; // 0x10
	::RPG::GameCore::LogicOperation Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3EBC4A503C83DC15__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5A30A2F2D7363E37(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3EBC4A503C83DC15*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3EBC4A503C83DC15*&))((::PBYTE)hIl2Cpp + CLASS_3_3EBC4A503C83DC15_METHOD_3_5A30A2F2D7363E37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4077B7F0C83FF920(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3EBC4A503C83DC15* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3EBC4A503C83DC15*))((::PBYTE)hIl2Cpp + CLASS_3_3EBC4A503C83DC15_METHOD_3_4077B7F0C83FF920_OFFSET))(a1, a2);
	}
};
