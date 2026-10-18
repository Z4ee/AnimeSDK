#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_858;

#define CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_22AFFD0A2717A562_OFFSET UNITYSDK_OFFSET(0xDFCCBF0)
#define CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_C62E9146672E4196_OFFSET UNITYSDK_OFFSET(0xDFCCB90)
#define CLASS_1_A90F67CF3F5F5D0E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDFCCB80)

inline static constexpr unsigned int Class_1_A90F67CF3F5F5D0E_1_TypeDefinitionIndex = 62518;

class Class_1_A90F67CF3F5F5D0E_1 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType BFPOCEDAOMA; // 0x10
	::RPG::GameCore::AvatarPropertyType IDAHMOONBCA; // 0x14

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_C62E9146672E4196(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_858* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_858*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_C62E9146672E4196_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_22AFFD0A2717A562(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_858* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_858*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_22AFFD0A2717A562_OFFSET))(this, a1, a2);
	}
};
