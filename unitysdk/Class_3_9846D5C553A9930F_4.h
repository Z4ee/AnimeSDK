#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_9846D5C553A9930F_4_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x19972AA0)
#define CLASS_3_9846D5C553A9930F_4_METHOD_3_2689645F20617A7A_OFFSET UNITYSDK_OFFSET(0x19972A20)
#define CLASS_3_9846D5C553A9930F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19972A70)

inline static constexpr unsigned int Class_3_9846D5C553A9930F_4_TypeDefinitionIndex = 20280;

class Class_3_9846D5C553A9930F_4 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9846D5C553A9930F_4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2689645F20617A7A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9846D5C553A9930F_4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9846D5C553A9930F_4*&))((::PBYTE)hIl2Cpp + CLASS_3_9846D5C553A9930F_4_METHOD_3_2689645F20617A7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9846D5C553A9930F_4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9846D5C553A9930F_4*))((::PBYTE)hIl2Cpp + CLASS_3_9846D5C553A9930F_4_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
