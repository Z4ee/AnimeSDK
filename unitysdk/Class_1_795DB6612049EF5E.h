#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_576;

#define CLASS_1_795DB6612049EF5E_METHOD_1_25EC201CE7538AB2_OFFSET UNITYSDK_OFFSET(0x8871410)
#define CLASS_1_795DB6612049EF5E_METHOD_1_435CEFB9F985123F_OFFSET UNITYSDK_OFFSET(0x8871470)
#define CLASS_1_795DB6612049EF5E__CTOR_OFFSET UNITYSDK_OFFSET(0x8871400)

inline static constexpr unsigned int Class_1_795DB6612049EF5E_TypeDefinitionIndex = 50819;

class Class_1_795DB6612049EF5E : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_1_795DB6612049EF5E__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_25EC201CE7538AB2(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_576* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_576*))((::PBYTE)hIl2Cpp + CLASS_1_795DB6612049EF5E_METHOD_1_25EC201CE7538AB2_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_435CEFB9F985123F(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_576* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_576*))((::PBYTE)hIl2Cpp + CLASS_1_795DB6612049EF5E_METHOD_1_435CEFB9F985123F_OFFSET))(this, a1, a2);
	}
};
