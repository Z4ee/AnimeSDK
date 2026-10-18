#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1875175C63DD46EA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9AB900)
#define CLASS_1_1875175C63DD46EA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AB940)
#define CLASS_1_1875175C63DD46EA___C__GETDICESURFACEDISPLAYDATALIST_B__15_0_OFFSET UNITYSDK_OFFSET(0xB9AB950)

inline static constexpr unsigned int Class_1_1875175C63DD46EA___c_TypeDefinitionIndex = 66947;

class Class_1_1875175C63DD46EA___c : public ::System::Object
{
public:
	static ::Class_1_1875175C63DD46EA___c** StaticGet___9()
	{
		return (::Class_1_1875175C63DD46EA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1875175C63DD46EA___c_TypeDefinitionIndex)->GetStaticField(0xC5D0);
	}
	static ::System::Comparison_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1875175C63DD46EA___c_TypeDefinitionIndex)->GetStaticField(0xC5D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1875175C63DD46EA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1875175C63DD46EA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetDiceSurfaceDisplayDataList_b__15_0(::RPG::Client::ChessRogueDiceSurfaceDisplayData* a1, ::RPG::Client::ChessRogueDiceSurfaceDisplayData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChessRogueDiceSurfaceDisplayData*, ::RPG::Client::ChessRogueDiceSurfaceDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_1875175C63DD46EA___C__GETDICESURFACEDISPLAYDATALIST_B__15_0_OFFSET))(this, a1, a2);
	}
};
