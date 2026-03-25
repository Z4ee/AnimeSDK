#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_151B93D9C4BBDCA4;

#define CLASS_2_0782BB8EEB918522_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113E56F0)
#define CLASS_2_0782BB8EEB918522_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x113E5740)
#define CLASS_2_0782BB8EEB918522_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x113E56A0)
#define CLASS_2_0782BB8EEB918522_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x113E5750)
#define CLASS_2_0782BB8EEB918522__CTOR_OFFSET UNITYSDK_OFFSET(0x113E5760)

inline static constexpr unsigned int Class_2_0782BB8EEB918522_TypeDefinitionIndex = 46151;

class Class_2_0782BB8EEB918522 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_151B93D9C4BBDCA4* _LittleGameInstance_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0782BB8EEB918522__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_151B93D9C4BBDCA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + CLASS_2_0782BB8EEB918522_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0782BB8EEB918522_DISPOSE_OFFSET))(this);
	}

	::Class_1_151B93D9C4BBDCA4* get_LittleGameInstance()
	{
		return ((::Class_1_151B93D9C4BBDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0782BB8EEB918522_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_LittleGameInstance(::Class_1_151B93D9C4BBDCA4* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + CLASS_2_0782BB8EEB918522_SET_LITTLEGAMEINSTANCE_OFFSET))(this, value);
	}
};
