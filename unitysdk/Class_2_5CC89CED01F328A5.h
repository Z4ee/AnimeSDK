#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_E0103A0EA6CD0F4C;

#define CLASS_2_5CC89CED01F328A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165DE3E0)
#define CLASS_2_5CC89CED01F328A5_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x165DE430)
#define CLASS_2_5CC89CED01F328A5_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x165DE390)
#define CLASS_2_5CC89CED01F328A5_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x165DE440)
#define CLASS_2_5CC89CED01F328A5__CTOR_OFFSET UNITYSDK_OFFSET(0x165DE450)

inline static constexpr unsigned int Class_2_5CC89CED01F328A5_TypeDefinitionIndex = 57458;

class Class_2_5CC89CED01F328A5 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_E0103A0EA6CD0F4C* _LittleGameInstance_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC89CED01F328A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_E0103A0EA6CD0F4C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0103A0EA6CD0F4C*))((::PBYTE)hIl2Cpp + CLASS_2_5CC89CED01F328A5_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC89CED01F328A5_DISPOSE_OFFSET))(this);
	}

	::Class_1_E0103A0EA6CD0F4C* get_LittleGameInstance()
	{
		return ((::Class_1_E0103A0EA6CD0F4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CC89CED01F328A5_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_LittleGameInstance(::Class_1_E0103A0EA6CD0F4C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0103A0EA6CD0F4C*))((::PBYTE)hIl2Cpp + CLASS_2_5CC89CED01F328A5_SET_LITTLEGAMEINSTANCE_OFFSET))(this, a1);
	}
};
