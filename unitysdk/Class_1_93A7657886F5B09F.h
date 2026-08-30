#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_93A7657886F5B09F_COMPARETO_OFFSET UNITYSDK_OFFSET(0x18F2F800)
#define CLASS_1_93A7657886F5B09F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18F2F760)
#define CLASS_1_93A7657886F5B09F_EQUALS_OFFSET UNITYSDK_OFFSET(0x18F2F6D0)
#define CLASS_1_93A7657886F5B09F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18F2F7C0)
#define CLASS_1_93A7657886F5B09F_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x18F2F6A0)
#define CLASS_1_93A7657886F5B09F_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x18F2F6B0)
#define CLASS_1_93A7657886F5B09F_SET_UISTATE_OFFSET UNITYSDK_OFFSET(0x18F2F6C0)
#define CLASS_1_93A7657886F5B09F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F2F8C0)
#define CLASS_1_93A7657886F5B09F__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2F690)

inline static constexpr unsigned int Class_1_93A7657886F5B09F_TypeDefinitionIndex = 79759;

class Class_1_93A7657886F5B09F : public ::System::Object
{
public:
	static ::Class_1_93A7657886F5B09F** StaticGet_IFDKFOGNOAN()
	{
		return (::Class_1_93A7657886F5B09F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93A7657886F5B09F_TypeDefinitionIndex)->GetStaticField(0x30E90);
	}
	::System::String* _UIState_k__BackingField; // 0x10
	::RPG::GameCore::FateRinHouguRarityType _Rarity_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::FateRinHouguRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguRarityType))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F__CCTOR_OFFSET))();
	}

	::RPG::GameCore::FateRinHouguRarityType get_Rarity()
	{
		return ((::RPG::GameCore::FateRinHouguRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F_GET_RARITY_OFFSET))(this);
	}

	::System::String* get_UIState()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F_GET_UISTATE_OFFSET))(this);
	}

	::System::Void set_UIState(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F_SET_UISTATE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_1(::Class_1_93A7657886F5B09F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93A7657886F5B09F*))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_93A7657886F5B09F* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_93A7657886F5B09F*))((::PBYTE)hIl2Cpp + CLASS_1_93A7657886F5B09F_COMPARETO_OFFSET))(this, a1);
	}
};
