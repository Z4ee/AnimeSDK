#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F51ACE7B42C6C6EE_METHOD_1_B9F59316011C93DA_OFFSET UNITYSDK_OFFSET(0x10B47090)
#define CLASS_1_F51ACE7B42C6C6EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B46DF0)

inline static constexpr unsigned int Class_1_F51ACE7B42C6C6EE_TypeDefinitionIndex = 44875;

class Class_1_F51ACE7B42C6C6EE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::System::Type*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F51ACE7B42C6C6EE_TypeDefinitionIndex)->GetStaticField(0x47A40);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMode, ::System::Type*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMode, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F51ACE7B42C6C6EE_TypeDefinitionIndex)->GetStaticField(0x47A48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F51ACE7B42C6C6EE__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_382* Method_1_B9F59316011C93DA(::RPG::GameCore::StageType a1, ::RPG::GameCore::RogueMode a2)
	{
		return ((::Class_0_16E4307DCC419505_382*(*)(::RPG::GameCore::StageType, ::RPG::GameCore::RogueMode))((::PBYTE)hIl2Cpp + CLASS_1_F51ACE7B42C6C6EE_METHOD_1_B9F59316011C93DA_OFFSET))(a1, a2);
	}
};
