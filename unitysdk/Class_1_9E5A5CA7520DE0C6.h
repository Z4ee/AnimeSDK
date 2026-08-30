#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"

class Class_1_80CE1F3AD61937D0;
namespace RPG::GameCore { class CharacterSomatoCommonConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E5A5CA7520DE0C6_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1997E810)
#define CLASS_1_9E5A5CA7520DE0C6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1997EC30)
#define CLASS_1_9E5A5CA7520DE0C6_METHOD_1_C25915EA4337085E_OFFSET UNITYSDK_OFFSET(0x1997ECE0)

inline static constexpr unsigned int Class_1_9E5A5CA7520DE0C6_TypeDefinitionIndex = 56676;

class Class_1_9E5A5CA7520DE0C6 : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterSomatoCommonConfig** StaticGet_KCDHNPFJLME()
	{
		return (::RPG::GameCore::CharacterSomatoCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E5A5CA7520DE0C6_TypeDefinitionIndex)->GetStaticField(0x60920);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterSomatoType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_80CE1F3AD61937D0*>*>** StaticGet_OKOOADMMAFO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterSomatoType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_80CE1F3AD61937D0*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E5A5CA7520DE0C6_TypeDefinitionIndex)->GetStaticField(0x60928);
	}

	static ::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E5A5CA7520DE0C6_METHOD_1_2566AD459572DFC3_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E5A5CA7520DE0C6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_C25915EA4337085E(::RPG::GameCore::CharacterSomatoType a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::RPG::GameCore::CharacterSomatoType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E5A5CA7520DE0C6_METHOD_1_C25915EA4337085E_OFFSET))(a1, a2);
	}
};
