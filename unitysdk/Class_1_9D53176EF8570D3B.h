#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"
#include "unitysdk/System/Object.h"

class Class_1_11064A0D75F7D72B;
class Class_1_CC76D1702CC17C09_4;

#define CLASS_1_9D53176EF8570D3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E43D00)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x18E43D50)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x18E43DB0)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x18E43EB0)
#define CLASS_1_9D53176EF8570D3B_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x18E43E50)
#define CLASS_1_9D53176EF8570D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x18E43F70)

inline static constexpr unsigned int Class_1_9D53176EF8570D3B_TypeDefinitionIndex = 71426;

class Class_1_9D53176EF8570D3B : public ::System::Object
{
public:
	::RPG::GameCore::SilverWolf999UltraPropState MEPFOEEGBEA; // 0x10
	::System::Single DMJFFCNBDMG; // 0x14
	::System::Single GDLCJLFBFPG; // 0x18
	::System::Single KCLBCNGCLHJ; // 0x1C
	::System::Single HJKJOLPBAOO; // 0x20
	::RPG::GameCore::SilverWolf999UltraPropType GMPGDEINODK; // 0x24
	::System::Single GHGGLAKNLAD; // 0x28

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
