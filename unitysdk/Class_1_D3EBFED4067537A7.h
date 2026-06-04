#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SaveCharacterStateMask.h"
#include "unitysdk/Struct_2_DF9778AC478FFF27.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_2;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3EBFED4067537A7_METHOD_1_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x134DE950)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_712EFB80FE27BB74_OFFSET UNITYSDK_OFFSET(0x134DCAE0)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_8CAE712CA4907C2B_OFFSET UNITYSDK_OFFSET(0x134DE820)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_90B222B995FC0D1A_OFFSET UNITYSDK_OFFSET(0x134DD6A0)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x134DD540)
#define CLASS_1_D3EBFED4067537A7__CTOR_OFFSET UNITYSDK_OFFSET(0x134DE9B0)

inline static constexpr unsigned int Class_1_D3EBFED4067537A7_TypeDefinitionIndex = 53202;

class Class_1_D3EBFED4067537A7 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarEnergyBarState* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_DF9778AC478FFF27>* Field_1_1; // 0x18
	::Class_1_70697F531F566942_2* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::RPG::GameCore::SaveCharacterStateMask Field_1_5; // 0x38
	::RPG::GameCore::EnumStatusTypeMask Field_1_6; // 0x3C
	::RPG::GameCore::FixPoint Field_1_7; // 0x40
	::RPG::GameCore::FixPoint Field_1_8; // 0x48
	::System::Int32 Field_1_9; // 0x50
	::System::Int32 Field_1_10; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_712EFB80FE27BB74(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SaveCharacterStateMask a2, ::RPG::GameCore::EnumStatusTypeMask a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SaveCharacterStateMask, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_712EFB80FE27BB74_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_1_90B222B995FC0D1A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_90B222B995FC0D1A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5F6398776E49CD87(::System::Int32& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_5F6398776E49CD87_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TurnBasedModifierConfig* Method_1_8CAE712CA4907C2B(::Class_2_1DB6C02CA182EEBA* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_8CAE712CA4907C2B_OFFSET))(this, a1, a2);
	}
};
