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

#define CLASS_1_74F7ACE84D01A3D2_METHOD_1_3AFB9161A312E02B_OFFSET UNITYSDK_OFFSET(0x1522BF60)
#define CLASS_1_74F7ACE84D01A3D2_METHOD_1_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x1522DD00)
#define CLASS_1_74F7ACE84D01A3D2_METHOD_1_8CAE712CA4907C2B_OFFSET UNITYSDK_OFFSET(0x1522DBD0)
#define CLASS_1_74F7ACE84D01A3D2_METHOD_1_90B222B995FC0D1A_OFFSET UNITYSDK_OFFSET(0x1522CA60)
#define CLASS_1_74F7ACE84D01A3D2_METHOD_1_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x1522C910)
#define CLASS_1_74F7ACE84D01A3D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1522DD60)

inline static constexpr unsigned int Class_1_74F7ACE84D01A3D2_TypeDefinitionIndex = 57138;

class Class_1_74F7ACE84D01A3D2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_DF9778AC478FFF27>* HFGCJNINKJH; // 0x10
	::System::String* MKGLDELKOJF; // 0x18
	::Class_1_70697F531F566942_2* DFGDPDPNPPL; // 0x20
	::RPG::GameCore::AvatarEnergyBarState* OKBLGLLJGPO; // 0x28
	::RPG::GameCore::FixPoint EMFGEFNHOIB; // 0x30
	::System::Int32 PKICDFAEPKE; // 0x38
	::RPG::GameCore::EnumStatusTypeMask JAPDAFFPAOE; // 0x3C
	::RPG::GameCore::FixPoint LCPFMGPBMMG; // 0x40
	::RPG::GameCore::FixPoint DLBPEEGBIBA; // 0x48
	::RPG::GameCore::SaveCharacterStateMask BHLJCGNGLMI; // 0x50
	::System::Int32 EDGGKIMJPOM; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7ACE84D01A3D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3AFB9161A312E02B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SaveCharacterStateMask a2, ::RPG::GameCore::EnumStatusTypeMask a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SaveCharacterStateMask, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_74F7ACE84D01A3D2_METHOD_1_3AFB9161A312E02B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7ACE84D01A3D2_METHOD_1_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_1_90B222B995FC0D1A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74F7ACE84D01A3D2_METHOD_1_90B222B995FC0D1A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5F6398776E49CD87(::System::Int32& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74F7ACE84D01A3D2_METHOD_1_5F6398776E49CD87_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TurnBasedModifierConfig* Method_1_8CAE712CA4907C2B(::Class_2_1DB6C02CA182EEBA* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74F7ACE84D01A3D2_METHOD_1_8CAE712CA4907C2B_OFFSET))(this, a1, a2);
	}
};
