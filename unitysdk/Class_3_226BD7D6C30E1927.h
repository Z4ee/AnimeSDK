#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"

namespace RPG::GameCore { class ChessCharacterConfig; }
namespace RPG::GameCore { class ChessUnitRow; }

#define CLASS_3_226BD7D6C30E1927_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xDE40BE0)
#define CLASS_3_226BD7D6C30E1927_METHOD_3_40DA08EA52D7E5BC_OFFSET UNITYSDK_OFFSET(0xDE40B70)
#define CLASS_3_226BD7D6C30E1927_METHOD_3_857D3ECBD7D7482E_OFFSET UNITYSDK_OFFSET(0xDE404B0)
#define CLASS_3_226BD7D6C30E1927_METHOD_3_A4721EA11E2E747A_OFFSET UNITYSDK_OFFSET(0xDE40C40)
#define CLASS_3_226BD7D6C30E1927_METHOD_3_DB78E51803572E12_OFFSET UNITYSDK_OFFSET(0xDE40B80)
#define CLASS_3_226BD7D6C30E1927_METHOD_3_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xDE40540)
#define CLASS_3_226BD7D6C30E1927__CTOR_OFFSET UNITYSDK_OFFSET(0xDE40CB0)
#define CLASS_3_226BD7D6C30E1927___IFIXBASEPROXY_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xDE40CC0)

inline static constexpr unsigned int Class_3_226BD7D6C30E1927_TypeDefinitionIndex = 45239;

class Class_3_226BD7D6C30E1927 : public ::RPG::GameCore::CharacterDataComponent
{
public:
	::RPG::GameCore::ChessCharacterConfig* Field_3_1; // 0x110
	::RPG::GameCore::ChessUnitRow* Field_3_2; // 0x118
	::System::UInt32 Field_3_0; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_857D3ECBD7D7482E(::System::UInt32 a1, ::RPG::GameCore::ChessCharacterConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChessCharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927_METHOD_3_857D3ECBD7D7482E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927_METHOD_3_E69AA2E64A20143D_OFFSET))(this);
	}

	::RPG::GameCore::ChessCharacterConfig* Method_3_40DA08EA52D7E5BC()
	{
		return ((::RPG::GameCore::ChessCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927_METHOD_3_40DA08EA52D7E5BC_OFFSET))(this);
	}

	::RPG::GameCore::AvatarBaseType Method_3_DB78E51803572E12()
	{
		return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927_METHOD_3_DB78E51803572E12_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927_GET_DAMAGETYPE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AttackDamageType>* Method_3_A4721EA11E2E747A()
	{
		return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927_METHOD_3_A4721EA11E2E747A_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType __iFixBaseProxy_get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_226BD7D6C30E1927___IFIXBASEPROXY_GET_DAMAGETYPE_OFFSET))(this);
	}
};
