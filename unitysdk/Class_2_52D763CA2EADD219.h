#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_1A05043E9AD1C5D3;

#define CLASS_2_52D763CA2EADD219_METHOD_2_042897DD9B0C1E7E_1_OFFSET UNITYSDK_OFFSET(0x14FE5310)
#define CLASS_2_52D763CA2EADD219_METHOD_2_042897DD9B0C1E7E_OFFSET UNITYSDK_OFFSET(0x14FE5270)
#define CLASS_2_52D763CA2EADD219_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x14FE5450)
#define CLASS_2_52D763CA2EADD219_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x14FE53B0)
#define CLASS_2_52D763CA2EADD219_METHOD_2_AD1987A7BCC0671D_OFFSET UNITYSDK_OFFSET(0x14FE54F0)
#define CLASS_2_52D763CA2EADD219__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE5260)

inline static constexpr unsigned int Class_2_52D763CA2EADD219_TypeDefinitionIndex = 62075;

class Class_2_52D763CA2EADD219 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_52D763CA2EADD219__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightNodeType Method_2_042897DD9B0C1E7E()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52D763CA2EADD219_METHOD_2_042897DD9B0C1E7E_OFFSET))(this);
	}

	::RPG::GameCore::GridFightNodeType Method_2_042897DD9B0C1E7E_1()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52D763CA2EADD219_METHOD_2_042897DD9B0C1E7E_1_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52D763CA2EADD219_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52D763CA2EADD219_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AD1987A7BCC0671D(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightNodeType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + CLASS_2_52D763CA2EADD219_METHOD_2_AD1987A7BCC0671D_OFFSET))(this, a1, a2, a3);
	}
};
