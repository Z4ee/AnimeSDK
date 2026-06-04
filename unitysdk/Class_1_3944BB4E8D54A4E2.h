#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;

#define CLASS_1_3944BB4E8D54A4E2_METHOD_1_6D38A288B76C7EDD_OFFSET UNITYSDK_OFFSET(0x1432D5E0)
#define CLASS_1_3944BB4E8D54A4E2_METHOD_1_C8E65DC92079827A_OFFSET UNITYSDK_OFFSET(0x1432D590)
#define CLASS_1_3944BB4E8D54A4E2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1432D640)
#define CLASS_1_3944BB4E8D54A4E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1432D580)

inline static constexpr unsigned int Class_1_3944BB4E8D54A4E2_TypeDefinitionIndex = 58496;

class Class_1_3944BB4E8D54A4E2 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_C8E65DC92079827A(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2_METHOD_1_C8E65DC92079827A_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_684* Method_1_6D38A288B76C7EDD(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2_METHOD_1_6D38A288B76C7EDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3944BB4E8D54A4E2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
