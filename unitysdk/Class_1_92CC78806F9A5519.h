#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterLodConfig; }
namespace RPG::GameCore { class CharacterLodMaterialPropertyList; }
namespace RPG::GameCore { class EntityLodLoadingArtData; }
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefabConfig; }
namespace System { class String; }

#define CLASS_1_92CC78806F9A5519_METHOD_1_0F3B83E8B242C33B_OFFSET UNITYSDK_OFFSET(0x1A00F820)
#define CLASS_1_92CC78806F9A5519_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1A00F760)
#define CLASS_1_92CC78806F9A5519_METHOD_1_AB87AA9F40D3796C_OFFSET UNITYSDK_OFFSET(0x1A00FDC0)
#define CLASS_1_92CC78806F9A5519_METHOD_1_B85C288F4D6EB0E9_OFFSET UNITYSDK_OFFSET(0x1A00FB20)
#define CLASS_1_92CC78806F9A5519_METHOD_1_ED0FF1ACB789218B_OFFSET UNITYSDK_OFFSET(0x1A010040)
#define CLASS_1_92CC78806F9A5519__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A010240)

inline static constexpr unsigned int Class_1_92CC78806F9A5519_TypeDefinitionIndex = 69725;

class Class_1_92CC78806F9A5519 : public ::System::Object
{
public:
	static ::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig** StaticGet_PJMJBNAGAAP()
	{
		return (::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92CC78806F9A5519_TypeDefinitionIndex)->GetStaticField(0x659C0);
	}
	static ::RPG::GameCore::CharacterLodConfig** StaticGet_GBPIBEILGLJ()
	{
		return (::RPG::GameCore::CharacterLodConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92CC78806F9A5519_TypeDefinitionIndex)->GetStaticField(0x659C8);
	}
	static ::System::Int32* StaticGet_GGKBDIMDCEL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_92CC78806F9A5519_TypeDefinitionIndex)->GetStaticField(0x150B0);
	}
	// static const ::System::String* PLNHFAKJEKH; // 0x0
	// static const ::System::String* AADFDNPPDHK; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92CC78806F9A5519__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92CC78806F9A5519_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::System::String* Method_1_0F3B83E8B242C33B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92CC78806F9A5519_METHOD_1_0F3B83E8B242C33B_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_B85C288F4D6EB0E9(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92CC78806F9A5519_METHOD_1_B85C288F4D6EB0E9_OFFSET))(a1);
	}

	static ::RPG::GameCore::CharacterLodMaterialPropertyList* Method_1_AB87AA9F40D3796C(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPG::GameCore::CharacterLodMaterialPropertyList*(*)(::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_92CC78806F9A5519_METHOD_1_AB87AA9F40D3796C_OFFSET))(a1);
	}

	static ::RPG::GameCore::EntityLodLoadingArtData* Method_1_ED0FF1ACB789218B(::System::Int32 a1)
	{
		return ((::RPG::GameCore::EntityLodLoadingArtData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92CC78806F9A5519_METHOD_1_ED0FF1ACB789218B_OFFSET))(a1);
	}
};
