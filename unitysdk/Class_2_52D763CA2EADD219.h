#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_B8E6D5AD8534D123;

#define CLASS_2_52D763CA2EADD219_METHOD_2_042897DD9B0C1E7E_1_OFFSET UNITYSDK_OFFSET(0xB2CAB30)
#define CLASS_2_52D763CA2EADD219_METHOD_2_042897DD9B0C1E7E_OFFSET UNITYSDK_OFFSET(0xB2CAA90)
#define CLASS_2_52D763CA2EADD219_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0xB2CAC70)
#define CLASS_2_52D763CA2EADD219_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0xB2CABD0)
#define CLASS_2_52D763CA2EADD219_METHOD_2_AD1987A7BCC0671D_OFFSET UNITYSDK_OFFSET(0xB2CAD10)
#define CLASS_2_52D763CA2EADD219__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CAA80)

inline static constexpr unsigned int Class_2_52D763CA2EADD219_TypeDefinitionIndex = 60781;

class Class_2_52D763CA2EADD219 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_52D763CA2EADD219__CTOR_OFFSET))(this, a1);
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
