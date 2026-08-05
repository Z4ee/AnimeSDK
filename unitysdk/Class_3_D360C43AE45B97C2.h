#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"

#define CLASS_3_D360C43AE45B97C2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x169D9720)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x169D9800)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x169D9910)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_DDCC0DEB0EA2792E_OFFSET UNITYSDK_OFFSET(0x169D98C0)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_E3E77FC7EA8E9CC9_1_OFFSET UNITYSDK_OFFSET(0x169D99A0)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_E3E77FC7EA8E9CC9_OFFSET UNITYSDK_OFFSET(0x169D9890)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_E51E37F5648EE7C6_1_OFFSET UNITYSDK_OFFSET(0x169D98B0)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_E51E37F5648EE7C6_2_OFFSET UNITYSDK_OFFSET(0x169D9990)
#define CLASS_3_D360C43AE45B97C2_METHOD_3_E51E37F5648EE7C6_OFFSET UNITYSDK_OFFSET(0x169D98A0)
#define CLASS_3_D360C43AE45B97C2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x169D96D0)
#define CLASS_3_D360C43AE45B97C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x169D9770)
#define CLASS_3_D360C43AE45B97C2__CTOR_OFFSET UNITYSDK_OFFSET(0x169D97F0)

inline static constexpr unsigned int Class_3_D360C43AE45B97C2_TypeDefinitionIndex = 58027;

class Class_3_D360C43AE45B97C2 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x9A; // 0x0
	::MoleMole::Config::TerrainMatType Field_3_0; // 0x48
	::MoleMole::Config::TerrainMatType Field_3_1; // 0x4C
	::MoleMole::Config::TerrainMatType Field_3_7; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_E3E77FC7EA8E9CC9(::MoleMole::Config::TerrainMatType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TerrainMatType))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_E3E77FC7EA8E9CC9_OFFSET))(this, a1);
	}

	::MoleMole::Config::TerrainMatType Method_3_E51E37F5648EE7C6()
	{
		return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_E51E37F5648EE7C6_OFFSET))(this);
	}

	::MoleMole::Config::TerrainMatType Method_3_E51E37F5648EE7C6_1()
	{
		return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_E51E37F5648EE7C6_1_OFFSET))(this);
	}

	::System::Void Method_3_DDCC0DEB0EA2792E(::MoleMole::Config::TerrainMatType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TerrainMatType))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_DDCC0DEB0EA2792E_OFFSET))(this, a1);
	}

	static ::Class_3_D360C43AE45B97C2* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D360C43AE45B97C2*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Config::TerrainMatType Method_3_E51E37F5648EE7C6_2()
	{
		return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_E51E37F5648EE7C6_2_OFFSET))(this);
	}

	::System::Void Method_3_E3E77FC7EA8E9CC9_1(::MoleMole::Config::TerrainMatType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TerrainMatType))((::PBYTE)hIl2Cpp + CLASS_3_D360C43AE45B97C2_METHOD_3_E3E77FC7EA8E9CC9_1_OFFSET))(this, a1);
	}
};
