#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartySingleDoubleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleDoubleStartPattern; }
namespace System { class String; }

#define CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x15A84B50)
#define CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15A84B60)
#define CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_DOUBLESELECTIONS_OFFSET UNITYSDK_OFFSET(0x15A84B90)
#define CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_SELECTIONKEY_OFFSET UNITYSDK_OFFSET(0x15A84B70)
#define CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_STARTPATTERNS_OFFSET UNITYSDK_OFFSET(0x15A84B80)
#define CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049__CTOR_OFFSET UNITYSDK_OFFSET(0x15A83580)

inline static constexpr unsigned int Class_1_D1544713579C243D_Class_1_D934CC02A6EBE049_TypeDefinitionIndex = 53530;

class Class_1_D1544713579C243D_Class_1_D934CC02A6EBE049 : public ::System::Object
{
public:
	::RPG::GameCore::PetPartySingleDoubleCombinationConfig* _Config_k__BackingField; // 0x10
	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B*>* _DoubleSelections_k__BackingField; // 0x18
	::System::String* _SelectionKey_k__BackingField; // 0x20
	::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* _StartPatterns_k__BackingField; // 0x28
	::RPG::GameCore::PetPartyInteractionCategoryConfig* _Category_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig* a2, ::System::String* a3, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* a4, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig*, ::System::String*, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>*, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::PetPartyInteractionCategoryConfig* get_Category()
	{
		return ((::RPG::GameCore::PetPartyInteractionCategoryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_CATEGORY_OFFSET))(this);
	}

	::RPG::GameCore::PetPartySingleDoubleCombinationConfig* get_Config()
	{
		return ((::RPG::GameCore::PetPartySingleDoubleCombinationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_CONFIG_OFFSET))(this);
	}

	::System::String* get_SelectionKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_SELECTIONKEY_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* get_StartPatterns()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_STARTPATTERNS_OFFSET))(this);
	}

	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B*>* get_DoubleSelections()
	{
		return ((::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_D934CC02A6EBE049_GET_DOUBLESELECTIONS_OFFSET))(this);
	}
};
