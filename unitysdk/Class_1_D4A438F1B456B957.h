#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_467;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D4A438F1B456B957_METHOD_1_010D09F1E5622D85_OFFSET UNITYSDK_OFFSET(0x1617BD40)
#define CLASS_1_D4A438F1B456B957__CCTOR_OFFSET UNITYSDK_OFFSET(0x1617BA50)

inline static constexpr unsigned int Class_1_D4A438F1B456B957_TypeDefinitionIndex = 56209;

class Class_1_D4A438F1B456B957 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMode, ::System::Type*>** StaticGet_PMNIFHJNFHP()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMode, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4A438F1B456B957_TypeDefinitionIndex)->GetStaticField(0x38B60);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::System::Type*>** StaticGet_AJCICNJHJCP()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4A438F1B456B957_TypeDefinitionIndex)->GetStaticField(0x38B68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4A438F1B456B957__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_467* Method_1_010D09F1E5622D85(::RPG::GameCore::StageType a1, ::RPG::GameCore::RogueMode a2)
	{
		return ((::Class_0_16E4307DCC419505_467*(*)(::RPG::GameCore::StageType, ::RPG::GameCore::RogueMode))((::PBYTE)hIl2Cpp + CLASS_1_D4A438F1B456B957_METHOD_1_010D09F1E5622D85_OFFSET))(a1, a2);
	}
};
