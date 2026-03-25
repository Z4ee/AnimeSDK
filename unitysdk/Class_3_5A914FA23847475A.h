#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_5A914FA23847475A_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x16BAEA70)
#define CLASS_3_5A914FA23847475A_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x16BAE9F0)
#define CLASS_3_5A914FA23847475A__CTOR_OFFSET UNITYSDK_OFFSET(0x16BAEA40)

inline static constexpr unsigned int Class_3_5A914FA23847475A_TypeDefinitionIndex = 19319;

class Class_3_5A914FA23847475A : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A914FA23847475A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5A914FA23847475A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5A914FA23847475A*&))((::PBYTE)hIl2Cpp + CLASS_3_5A914FA23847475A_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5A914FA23847475A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5A914FA23847475A*))((::PBYTE)hIl2Cpp + CLASS_3_5A914FA23847475A_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
