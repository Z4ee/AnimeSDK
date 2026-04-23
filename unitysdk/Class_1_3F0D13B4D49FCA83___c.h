#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3F0D13B4D49FCA83___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11986320)
#define CLASS_1_3F0D13B4D49FCA83___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11986360)
#define CLASS_1_3F0D13B4D49FCA83___C__GETDICESURFACEDISPLAYDATALIST_B__15_0_OFFSET UNITYSDK_OFFSET(0x11986370)

inline static constexpr unsigned int Class_1_3F0D13B4D49FCA83___c_TypeDefinitionIndex = 61654;

class Class_1_3F0D13B4D49FCA83___c : public ::System::Object
{
public:
	static ::Class_1_3F0D13B4D49FCA83___c** StaticGet___9()
	{
		return (::Class_1_3F0D13B4D49FCA83___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F0D13B4D49FCA83___c_TypeDefinitionIndex)->GetStaticField(0x2FB00);
	}
	static ::System::Comparison_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F0D13B4D49FCA83___c_TypeDefinitionIndex)->GetStaticField(0x2FB08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F0D13B4D49FCA83___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F0D13B4D49FCA83___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetDiceSurfaceDisplayDataList_b__15_0(::RPG::Client::ChessRogueDiceSurfaceDisplayData* a, ::RPG::Client::ChessRogueDiceSurfaceDisplayData* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChessRogueDiceSurfaceDisplayData*, ::RPG::Client::ChessRogueDiceSurfaceDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_3F0D13B4D49FCA83___C__GETDICESURFACEDISPLAYDATALIST_B__15_0_OFFSET))(this, a, b);
	}
};
