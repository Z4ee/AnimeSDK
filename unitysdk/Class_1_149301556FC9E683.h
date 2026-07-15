#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_149301556FC9E683_METHOD_1_1FCC85A147E9D2FD_OFFSET UNITYSDK_OFFSET(0x16424F10)
#define CLASS_1_149301556FC9E683_METHOD_1_81EC6A66DDA69CFC_OFFSET UNITYSDK_OFFSET(0x16424E50)
#define CLASS_1_149301556FC9E683_METHOD_1_A68CCADF8E624096_OFFSET UNITYSDK_OFFSET(0x16424E00)
#define CLASS_1_149301556FC9E683__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16424DF0)
#define CLASS_1_149301556FC9E683__CTOR_OFFSET UNITYSDK_OFFSET(0x16424DE0)

inline static constexpr unsigned int Class_1_149301556FC9E683_TypeDefinitionIndex = 55621;

class Class_1_149301556FC9E683 : public ::System::Object
{
public:
	static ::Class_1_149301556FC9E683** StaticGet_Field_1_0()
	{
		return (::Class_1_149301556FC9E683**)Il2CppClass::FromTypeDefinitionIndex(Class_1_149301556FC9E683_TypeDefinitionIndex)->GetStaticField(0x6B650);
	}
	::Il2CppArray<::RPG::GameCore::BattleOperationType>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

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

	static ::Class_1_149301556FC9E683* Method_1_1FCC85A147E9D2FD()
	{
		return ((::Class_1_149301556FC9E683*(*)())((::PBYTE)hIl2Cpp + CLASS_1_149301556FC9E683_METHOD_1_1FCC85A147E9D2FD_OFFSET))();
	}
};
