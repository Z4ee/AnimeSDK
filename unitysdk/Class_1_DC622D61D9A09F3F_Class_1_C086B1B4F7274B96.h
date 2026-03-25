#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x8BB2D70)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_GET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x8BB2DB0)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x8BB2D90)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_METHOD_1_3283BD1F84002841_OFFSET UNITYSDK_OFFSET(0x8BB1E50)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_METHOD_1_C9558C8A9125AC29_OFFSET UNITYSDK_OFFSET(0x8BB24A0)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_METHOD_1_E6D6109882E594B8_OFFSET UNITYSDK_OFFSET(0x8BB22E0)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_SET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x8BB2D80)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_SET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x8BB2DC0)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x8BB2DA0)
#define CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB1C20)

inline static constexpr unsigned int Class_1_DC622D61D9A09F3F_Class_1_C086B1B4F7274B96_TypeDefinitionIndex = 45114;

class Class_1_DC622D61D9A09F3F_Class_1_C086B1B4F7274B96 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::RPG::GameCore::FixPoint _CurValue_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _ExRatio_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _MaxValue_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_CurValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_GET_CURVALUE_OFFSET))(this);
	}

	::System::Void set_CurValue(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_SET_CURVALUE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MaxValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_GET_MAXVALUE_OFFSET))(this);
	}

	::System::Void set_MaxValue(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_SET_MAXVALUE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_ExRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_GET_EXRATIO_OFFSET))(this);
	}

	::System::Void set_ExRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_SET_EXRATIO_OFFSET))(this, value);
	}

	::System::Boolean Method_1_3283BD1F84002841(::RPG::GameCore::VersusBarPropertyType a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_METHOD_1_3283BD1F84002841_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9558C8A9125AC29(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_METHOD_1_C9558C8A9125AC29_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6D6109882E594B8(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_CLASS_1_C086B1B4F7274B96_METHOD_1_E6D6109882E594B8_OFFSET))(this, a1);
	}
};
