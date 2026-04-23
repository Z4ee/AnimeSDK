#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2FA61DF2EE4D4708.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CCDD9DFB0D3EBBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9598FE0)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x9598E30)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x95992E0)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_F15BB39D73E654DD_OFFSET UNITYSDK_OFFSET(0x95991E0)
#define CLASS_1_9CCDD9DFB0D3EBBA_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x9599030)
#define CLASS_1_9CCDD9DFB0D3EBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x9598E00)

inline static constexpr unsigned int Class_1_9CCDD9DFB0D3EBBA_TypeDefinitionIndex = 55582;

class Class_1_9CCDD9DFB0D3EBBA : public ::System::Object
{
public:
	::Struct_2_2FA61DF2EE4D4708 Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x38
	::RPG::GameCore::GameEntity* Field_1_1; // 0x40
	::System::Boolean Field_1_3; // 0x48
	::System::Int32 Field_1_4; // 0x4C

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
