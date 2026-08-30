#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;

#define CLASS_1_3944BB4E8D54A4E2_1_METHOD_1_6D38A288B76C7EDD_OFFSET UNITYSDK_OFFSET(0x1AF22D00)
#define CLASS_1_3944BB4E8D54A4E2_1_METHOD_1_742C5F75B6A79647_OFFSET UNITYSDK_OFFSET(0x1AF22C70)
#define CLASS_1_3944BB4E8D54A4E2_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AF22D60)
#define CLASS_1_3944BB4E8D54A4E2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF22C60)

inline static constexpr unsigned int Class_1_3944BB4E8D54A4E2_1_TypeDefinitionIndex = 62614;

class Class_1_3944BB4E8D54A4E2_1 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_742C5F75B6A79647(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2_1_METHOD_1_742C5F75B6A79647_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_758* Method_1_6D38A288B76C7EDD(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2_1_METHOD_1_6D38A288B76C7EDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
