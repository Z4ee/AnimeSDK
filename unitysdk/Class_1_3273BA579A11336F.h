#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_687;

#define CLASS_1_3273BA579A11336F_METHOD_1_435CEFB9F985123F_OFFSET UNITYSDK_OFFSET(0x141E2EA0)
#define CLASS_1_3273BA579A11336F_METHOD_1_D3F4CF6A775FC93B_OFFSET UNITYSDK_OFFSET(0x141E2E40)
#define CLASS_1_3273BA579A11336F__CTOR_OFFSET UNITYSDK_OFFSET(0x141E2E30)

inline static constexpr unsigned int Class_1_3273BA579A11336F_TypeDefinitionIndex = 58487;

class Class_1_3273BA579A11336F : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_1_3273BA579A11336F__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_D3F4CF6A775FC93B(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_687* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_687*))((::PBYTE)hIl2Cpp + CLASS_1_3273BA579A11336F_METHOD_1_D3F4CF6A775FC93B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_435CEFB9F985123F(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_687* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_687*))((::PBYTE)hIl2Cpp + CLASS_1_3273BA579A11336F_METHOD_1_435CEFB9F985123F_OFFSET))(this, a1, a2);
	}
};
