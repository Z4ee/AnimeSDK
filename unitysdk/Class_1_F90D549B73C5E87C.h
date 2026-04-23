#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_DA56B8CEAE4146EE;
namespace System { class Type; }

#define CLASS_1_F90D549B73C5E87C_METHOD_1_ABF11DCFA4EC362B_OFFSET UNITYSDK_OFFSET(0x9293F30)
#define CLASS_1_F90D549B73C5E87C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9294110)

inline static constexpr unsigned int Class_1_F90D549B73C5E87C_TypeDefinitionIndex = 49410;

class Class_1_F90D549B73C5E87C : public ::System::Object
{
public:
	static ::Il2CppArray<::System::ValueTuple_2<::RPG::GameCore::BattleModeType, ::System::Type*>>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::RPG::GameCore::BattleModeType, ::System::Type*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F90D549B73C5E87C_TypeDefinitionIndex)->GetStaticField(0x6A5F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F90D549B73C5E87C__CCTOR_OFFSET))();
	}

	static ::Class_1_DA56B8CEAE4146EE* Method_1_ABF11DCFA4EC362B(::RPG::GameCore::BattleModeType a1)
	{
		return ((::Class_1_DA56B8CEAE4146EE*(*)(::RPG::GameCore::BattleModeType))((::PBYTE)hIl2Cpp + CLASS_1_F90D549B73C5E87C_METHOD_1_ABF11DCFA4EC362B_OFFSET))(a1);
	}
};
