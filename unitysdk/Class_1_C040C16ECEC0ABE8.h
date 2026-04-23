#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C040C16ECEC0ABE8_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x124C7450)
#define CLASS_1_C040C16ECEC0ABE8_METHOD_1_E1A5958738B281A8_OFFSET UNITYSDK_OFFSET(0x124C7310)
#define CLASS_1_C040C16ECEC0ABE8__CTOR_OFFSET UNITYSDK_OFFSET(0x124C7300)

inline static constexpr unsigned int Class_1_C040C16ECEC0ABE8_TypeDefinitionIndex = 62919;

class Class_1_C040C16ECEC0ABE8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C040C16ECEC0ABE8__CTOR_OFFSET))(this);
	}

	static ::Class_1_C040C16ECEC0ABE8* Method_1_E1A5958738B281A8(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1, ::System::Int32 a2)
	{
		return ((::Class_1_C040C16ECEC0ABE8*(*)(::Il2CppArray<::RPG::GameCore::BattleOperationType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C040C16ECEC0ABE8_METHOD_1_E1A5958738B281A8_OFFSET))(a1, a2);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C040C16ECEC0ABE8_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}
};
