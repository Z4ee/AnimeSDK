#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleRightTopShortHintType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_8771DEDD2FBCE1AB_METHOD_3_0EA31FDFD4AC3DFF_OFFSET UNITYSDK_OFFSET(0x1CE2C930)
#define CLASS_3_8771DEDD2FBCE1AB_METHOD_3_953B57F1CC8DAE52_OFFSET UNITYSDK_OFFSET(0x1CE2C8F0)
#define CLASS_3_8771DEDD2FBCE1AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2C920)

inline static constexpr unsigned int Class_3_8771DEDD2FBCE1AB_TypeDefinitionIndex = 23246;

class Class_3_8771DEDD2FBCE1AB : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 AALPICLABCO; // 0x18
	::RPG::GameCore::BattleRightTopShortHintType GMPGDEINODK; // 0x1C
	::RPG::Client::TextID PJHMJKEIGOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8771DEDD2FBCE1AB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_953B57F1CC8DAE52(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8771DEDD2FBCE1AB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8771DEDD2FBCE1AB*&))((::PBYTE)hIl2Cpp + CLASS_3_8771DEDD2FBCE1AB_METHOD_3_953B57F1CC8DAE52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0EA31FDFD4AC3DFF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8771DEDD2FBCE1AB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8771DEDD2FBCE1AB*))((::PBYTE)hIl2Cpp + CLASS_3_8771DEDD2FBCE1AB_METHOD_3_0EA31FDFD4AC3DFF_OFFSET))(a1, a2);
	}
};
