#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2CC6EFEAC1D76722_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D7AFA0)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_161BB21D09A261BD_OFFSET UNITYSDK_OFFSET(0x8D7B240)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_1CEE96620E431E7A_OFFSET UNITYSDK_OFFSET(0x8D7B030)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_41CB8B43C58E8E95_OFFSET UNITYSDK_OFFSET(0x8D7B250)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D7AFF0)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_E855A974FE0C8866_OFFSET UNITYSDK_OFFSET(0x8D7B140)
#define CLASS_2_2CC6EFEAC1D76722__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7B330)

inline static constexpr unsigned int Class_2_2CC6EFEAC1D76722_TypeDefinitionIndex = 46380;

class Class_2_2CC6EFEAC1D76722 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Action_1<::System::Boolean>* Field_2_1; // 0x18
	::System::Action_2<::RPG::GameCore::UnitStatus, ::RPG::GameCore::UnitStatus>* Field_2_0; // 0x20
	::RPG::GameCore::UnitStatus Field_2_3; // 0x28
	::System::Boolean Field_2_2; // 0x2C
	::System::Boolean Field_2_4; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1CEE96620E431E7A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_METHOD_2_1CEE96620E431E7A_OFFSET))(this);
	}

	::System::Void Method_2_E855A974FE0C8866()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_METHOD_2_E855A974FE0C8866_OFFSET))(this);
	}

	::RPG::GameCore::UnitStatus Method_2_161BB21D09A261BD()
	{
		return ((::RPG::GameCore::UnitStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_METHOD_2_161BB21D09A261BD_OFFSET))(this);
	}

	::System::Void Method_2_41CB8B43C58E8E95(::RPG::GameCore::UnitStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnitStatus))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_METHOD_2_41CB8B43C58E8E95_OFFSET))(this, a1);
	}
};
