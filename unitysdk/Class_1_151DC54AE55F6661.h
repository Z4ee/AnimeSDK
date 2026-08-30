#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_40503CAE2FA0ADB9;
namespace System { class Type; }

#define CLASS_1_151DC54AE55F6661_METHOD_1_B134BE7A6D34BAC7_OFFSET UNITYSDK_OFFSET(0xB5D7F70)
#define CLASS_1_151DC54AE55F6661__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5D8140)

inline static constexpr unsigned int Class_1_151DC54AE55F6661_TypeDefinitionIndex = 53843;

class Class_1_151DC54AE55F6661 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::ValueTuple_2<::RPG::GameCore::BattleModeType, ::System::Type*>>** StaticGet_HKHFDOODKOA()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::RPG::GameCore::BattleModeType, ::System::Type*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_151DC54AE55F6661_TypeDefinitionIndex)->GetStaticField(0x64460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_151DC54AE55F6661__CCTOR_OFFSET))();
	}

	static ::Class_1_40503CAE2FA0ADB9* Method_1_B134BE7A6D34BAC7(::RPG::GameCore::BattleModeType a1)
	{
		return ((::Class_1_40503CAE2FA0ADB9*(*)(::RPG::GameCore::BattleModeType))((::PBYTE)hIl2Cpp + CLASS_1_151DC54AE55F6661_METHOD_1_B134BE7A6D34BAC7_OFFSET))(a1);
	}
};
