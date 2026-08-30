#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2FA61DF2EE4D4708.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CCDD9DFB0D3EBBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154D1630)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x154D1450)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x154D1960)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_F15BB39D73E654DD_OFFSET UNITYSDK_OFFSET(0x154D1860)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x154D1690)
#define CLASS_1_9CCDD9DFB0D3EBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x154D1420)

inline static constexpr unsigned int Class_1_9CCDD9DFB0D3EBBA_TypeDefinitionIndex = 60389;

class Class_1_9CCDD9DFB0D3EBBA : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
	::Struct_2_2FA61DF2EE4D4708 EJHODPJIFIN; // 0x18
	::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x40
	::System::Int32 APJNLBCCHPG; // 0x48
	::System::Boolean LANGKOOBONL; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_2FA61DF2EE4D4708 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Struct_2_2FA61DF2EE4D4708))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD9DFB0D3EBBA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD9DFB0D3EBBA_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F15BB39D73E654DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_F15BB39D73E654DD_OFFSET))(this);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}
};
