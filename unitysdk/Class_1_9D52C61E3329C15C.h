#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterLodConfig; }
namespace RPG::GameCore { class CharacterLodMaterialPropertyList; }
namespace RPG::GameCore { class EntityLodLoadingArtData; }
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefabConfig; }
namespace System { class String; }

#define CLASS_1_9D52C61E3329C15C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13638C50)
#define CLASS_1_9D52C61E3329C15C_METHOD_1_AB87AA9F40D3796C_OFFSET UNITYSDK_OFFSET(0x136392D0)
#define CLASS_1_9D52C61E3329C15C_METHOD_1_B1693D7758162EE0_OFFSET UNITYSDK_OFFSET(0x13638D10)
#define CLASS_1_9D52C61E3329C15C_METHOD_1_B85C288F4D6EB0E9_OFFSET UNITYSDK_OFFSET(0x13639030)
#define CLASS_1_9D52C61E3329C15C_METHOD_1_ED0FF1ACB789218B_OFFSET UNITYSDK_OFFSET(0x13639550)
#define CLASS_1_9D52C61E3329C15C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13639750)

inline static constexpr unsigned int Class_1_9D52C61E3329C15C_TypeDefinitionIndex = 65217;

class Class_1_9D52C61E3329C15C : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterLodConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterLodConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D52C61E3329C15C_TypeDefinitionIndex)->GetStaticField(0x49BF0);
	}
	static ::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D52C61E3329C15C_TypeDefinitionIndex)->GetStaticField(0x49BF8);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D52C61E3329C15C_TypeDefinitionIndex)->GetStaticField(0xDCD0);
	}
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D52C61E3329C15C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D52C61E3329C15C_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::System::String* Method_1_B1693D7758162EE0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D52C61E3329C15C_METHOD_1_B1693D7758162EE0_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_B85C288F4D6EB0E9(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D52C61E3329C15C_METHOD_1_B85C288F4D6EB0E9_OFFSET))(a1);
	}

	static ::RPG::GameCore::CharacterLodMaterialPropertyList* Method_1_AB87AA9F40D3796C(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPG::GameCore::CharacterLodMaterialPropertyList*(*)(::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_9D52C61E3329C15C_METHOD_1_AB87AA9F40D3796C_OFFSET))(a1);
	}

	static ::RPG::GameCore::EntityLodLoadingArtData* Method_1_ED0FF1ACB789218B(::System::Int32 a1)
	{
		return ((::RPG::GameCore::EntityLodLoadingArtData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9D52C61E3329C15C_METHOD_1_ED0FF1ACB789218B_OFFSET))(a1);
	}
};
