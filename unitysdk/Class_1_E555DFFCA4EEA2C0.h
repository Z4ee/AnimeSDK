#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_761;

#define CLASS_1_E555DFFCA4EEA2C0_METHOD_1_505594EF44B87658_OFFSET UNITYSDK_OFFSET(0x184B5CC0)
#define CLASS_1_E555DFFCA4EEA2C0_METHOD_1_F005C1349A09D61B_OFFSET UNITYSDK_OFFSET(0x184B63C0)
#define CLASS_1_E555DFFCA4EEA2C0__CTOR_OFFSET UNITYSDK_OFFSET(0x184B5C90)

inline static constexpr unsigned int Class_1_E555DFFCA4EEA2C0_TypeDefinitionIndex = 62604;

class Class_1_E555DFFCA4EEA2C0 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType GGKLKCAMNJK; // 0x10
	::RPG::GameCore::AvatarPropertyType GBPCKJBAAAA; // 0x14
	::RPG::GameCore::AvatarPropertyType ANPAHODBCOB; // 0x18
	::RPG::GameCore::AvatarPropertyType BFPOCEDAOMA; // 0x1C
	::RPG::GameCore::AvatarPropertyType GBKKAELNFAO; // 0x20
	::RPG::GameCore::AvatarPropertyType DJIPGJLJLDP; // 0x24
	::RPG::GameCore::AvatarPropertyType KNBEPFPCEBB; // 0x28

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3, ::RPG::GameCore::AvatarPropertyType a4, ::RPG::GameCore::AvatarPropertyType a5, ::RPG::GameCore::AvatarPropertyType a6, ::RPG::GameCore::AvatarPropertyType a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_E555DFFCA4EEA2C0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::GameCore::FixPoint Method_1_505594EF44B87658(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_761* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_E555DFFCA4EEA2C0_METHOD_1_505594EF44B87658_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_F005C1349A09D61B(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_761* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_E555DFFCA4EEA2C0_METHOD_1_F005C1349A09D61B_OFFSET))(this, a1, a2);
	}
};
