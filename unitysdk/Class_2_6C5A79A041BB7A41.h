#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"

class Class_1_D1403D5EBDB678B3;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6C5A79A041BB7A41_METHOD_2_80834E600E5BA350_OFFSET UNITYSDK_OFFSET(0xAACECE0)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_8A0C05ECADC6319B_OFFSET UNITYSDK_OFFSET(0xAACEF30)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_AC87ED171D71F877_OFFSET UNITYSDK_OFFSET(0xAACF3E0)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_E05F70CAD216C4B5_OFFSET UNITYSDK_OFFSET(0xAACEFF0)
#define CLASS_2_6C5A79A041BB7A41_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0xAACEE10)
#define CLASS_2_6C5A79A041BB7A41__CTOR_OFFSET UNITYSDK_OFFSET(0xAACF470)

inline static constexpr unsigned int Class_2_6C5A79A041BB7A41_TypeDefinitionIndex = 50167;

class Class_2_6C5A79A041BB7A41 : public ::Class_1_9DFEED9E47A49175
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D1403D5EBDB678B3*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41__CTOR_OFFSET))(this);
	}

	::Class_1_D1403D5EBDB678B3* Method_2_80834E600E5BA350(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::Class_1_D1403D5EBDB678B3*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_80834E600E5BA350_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8A0C05ECADC6319B(::Class_1_D1403D5EBDB678B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1403D5EBDB678B3*))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_8A0C05ECADC6319B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	static ::RPG::GameCore::GameEntity* Method_2_E05F70CAD216C4B5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_E05F70CAD216C4B5_OFFSET))(a1);
	}

	::RPG::GameCore::GameEntity* Method_2_AC87ED171D71F877()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5A79A041BB7A41_METHOD_2_AC87ED171D71F877_OFFSET))(this);
	}
};
