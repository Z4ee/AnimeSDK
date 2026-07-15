#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;

#define CLASS_1_FEF3885A41BF5610_METHOD_1_5C43983DD77835F3_OFFSET UNITYSDK_OFFSET(0x179D2710)
#define CLASS_1_FEF3885A41BF5610_METHOD_1_89557A907D60B96C_OFFSET UNITYSDK_OFFSET(0x179D26B0)
#define CLASS_1_FEF3885A41BF5610__CTOR_OFFSET UNITYSDK_OFFSET(0x179D26A0)

inline static constexpr unsigned int Class_1_FEF3885A41BF5610_TypeDefinitionIndex = 59757;

class Class_1_FEF3885A41BF5610 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_1_FEF3885A41BF5610__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_89557A907D60B96C(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_FEF3885A41BF5610_METHOD_1_89557A907D60B96C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_5C43983DD77835F3(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_FEF3885A41BF5610_METHOD_1_5C43983DD77835F3_OFFSET))(this, a1, a2);
	}
};
