#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_79FCB3A8A7A93901___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189F2C10)
#define CLASS_2_79FCB3A8A7A93901___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189F2C50)
#define CLASS_2_79FCB3A8A7A93901___C__TRYSHOWBOSSPERSISTENTTIPSPERFORMANCE_B__48_0_OFFSET UNITYSDK_OFFSET(0x189F2C60)

inline static constexpr unsigned int Class_2_79FCB3A8A7A93901___c_TypeDefinitionIndex = 34552;

class Class_2_79FCB3A8A7A93901___c : public ::System::Object
{
public:
	static ::Class_2_79FCB3A8A7A93901___c** StaticGet___9()
	{
		return (::Class_2_79FCB3A8A7A93901___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_79FCB3A8A7A93901___c_TypeDefinitionIndex)->GetStaticField(0x53AA0);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__48_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_79FCB3A8A7A93901___c_TypeDefinitionIndex)->GetStaticField(0x53AA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_79FCB3A8A7A93901___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79FCB3A8A7A93901___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint _TryShowBossPersistentTipsPerformance_b__48_0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_79FCB3A8A7A93901___C__TRYSHOWBOSSPERSISTENTTIPSPERFORMANCE_B__48_0_OFFSET))(this, a1);
	}
};
