#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"
#include "unitysdk/System/Object.h"

class Class_1_11064A0D75F7D72B;
class Class_1_CC76D1702CC17C09_4;

#define CLASS_1_9D53176EF8570D3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16192C10)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x16192C60)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x16192CC0)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16192DC0)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16192D60)
#define CLASS_1_9D53176EF8570D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x16192E80)

inline static constexpr unsigned int Class_1_9D53176EF8570D3B_TypeDefinitionIndex = 71427;

class Class_1_9D53176EF8570D3B : public ::System::Object
{
public:
	::RPG::GameCore::SilverWolf999UltraPropType GMPGDEINODK; // 0x10
	::System::Single GHGGLAKNLAD; // 0x14
	::System::Single HJKJOLPBAOO; // 0x18
	::RPG::GameCore::SilverWolf999UltraPropState MEPFOEEGBEA; // 0x1C
	::System::Single KCLBCNGCLHJ; // 0x20
	::System::Single GDLCJLFBFPG; // 0x24
	::System::Single DMJFFCNBDMG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D53176EF8570D3B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D53176EF8570D3B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_11064A0D75F7D72B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11064A0D75F7D72B*))((::PBYTE)hIl2Cpp + CLASS_1_9D53176EF8570D3B_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_CC76D1702CC17C09_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC76D1702CC17C09_4*))((::PBYTE)hIl2Cpp + CLASS_1_9D53176EF8570D3B_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D53176EF8570D3B_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9D53176EF8570D3B_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
