#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_149301556FC9E683_METHOD_1_59779CE445A59A8E_OFFSET UNITYSDK_OFFSET(0xBEE7A20)
#define CLASS_1_149301556FC9E683_METHOD_1_81EC6A66DDA69CFC_OFFSET UNITYSDK_OFFSET(0xBEE7960)
#define CLASS_1_149301556FC9E683_METHOD_1_A68CCADF8E624096_OFFSET UNITYSDK_OFFSET(0xBEE7910)
#define CLASS_1_149301556FC9E683__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBEE7900)
#define CLASS_1_149301556FC9E683__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE78F0)

inline static constexpr unsigned int Class_1_149301556FC9E683_TypeDefinitionIndex = 46943;

class Class_1_149301556FC9E683 : public ::System::Object
{
public:
	static ::Class_1_149301556FC9E683** StaticGet_Field_1_2()
	{
		return (::Class_1_149301556FC9E683**)Il2CppClass::FromTypeDefinitionIndex(Class_1_149301556FC9E683_TypeDefinitionIndex)->GetStaticField(0x44400);
	}
	::Il2CppArray<::RPG::GameCore::BattleOperationType>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_149301556FC9E683__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BattleOperationType>*))((::PBYTE)hIl2Cpp + CLASS_1_149301556FC9E683__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A68CCADF8E624096(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BattleOperationType>*))((::PBYTE)hIl2Cpp + CLASS_1_149301556FC9E683_METHOD_1_A68CCADF8E624096_OFFSET))(this, a1);
	}

	static ::Class_1_149301556FC9E683* Method_1_81EC6A66DDA69CFC(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1)
	{
		return ((::Class_1_149301556FC9E683*(*)(::Il2CppArray<::RPG::GameCore::BattleOperationType>*))((::PBYTE)hIl2Cpp + CLASS_1_149301556FC9E683_METHOD_1_81EC6A66DDA69CFC_OFFSET))(a1);
	}

	static ::Class_1_149301556FC9E683* Method_1_59779CE445A59A8E()
	{
		return ((::Class_1_149301556FC9E683*(*)())((::PBYTE)hIl2Cpp + CLASS_1_149301556FC9E683_METHOD_1_59779CE445A59A8E_OFFSET))();
	}
};
