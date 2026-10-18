#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2CC6EFEAC1D76722_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB77EB60)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xB77ED00)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB77EBF0)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_161BB21D09A261BD_OFFSET UNITYSDK_OFFSET(0xB77EE10)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_41CB8B43C58E8E95_OFFSET UNITYSDK_OFFSET(0xB77EE20)
#define CLASS_2_2CC6EFEAC1D76722_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB77EBB0)
#define CLASS_2_2CC6EFEAC1D76722__CTOR_OFFSET UNITYSDK_OFFSET(0xB77EF00)

inline static constexpr unsigned int Class_2_2CC6EFEAC1D76722_TypeDefinitionIndex = 57556;

class Class_2_2CC6EFEAC1D76722 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Action_1<::System::Boolean>* HDMPDMAPKJP; // 0x18
	::System::Action_2<::RPG::GameCore::UnitStatus, ::RPG::GameCore::UnitStatus>* JIJMALNHDOG; // 0x20
	::RPG::GameCore::UnitStatus CPPNFCBEJLK; // 0x28
	::System::Boolean COFDOHGGLCG; // 0x2C
	::System::Boolean KIBOPOOCEPL; // 0x2D

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

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CC6EFEAC1D76722_METHOD_2_1290EA767C459179_1_OFFSET))(this);
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
