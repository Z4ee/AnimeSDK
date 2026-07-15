#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x17028570)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_GET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x170285B0)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x17028590)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_METHOD_1_3283BD1F84002841_OFFSET UNITYSDK_OFFSET(0x17027570)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_METHOD_1_77A0D9F57C8133DF_OFFSET UNITYSDK_OFFSET(0x17027C40)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_METHOD_1_B5E7CFC41DD26C3B_OFFSET UNITYSDK_OFFSET(0x17027AF0)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_SET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x17028580)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_SET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x170285C0)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x170285A0)
#define CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96__CTOR_OFFSET UNITYSDK_OFFSET(0x17027340)

inline static constexpr unsigned int Class_1_9CC2555EB23D9C1C_Class_1_C086B1B4F7274B96_TypeDefinitionIndex = 53749;

class Class_1_9CC2555EB23D9C1C_Class_1_C086B1B4F7274B96 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint _ExRatio_k__BackingField; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::RPG::GameCore::FixPoint _CurValue_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _MaxValue_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_CurValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_GET_CURVALUE_OFFSET))(this);
	}

	::System::Void set_CurValue(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_SET_CURVALUE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_GET_MAXVALUE_OFFSET))(this);
	}

	::System::Void set_MaxValue(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_SET_MAXVALUE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ExRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_GET_EXRATIO_OFFSET))(this);
	}

	::System::Void set_ExRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_SET_EXRATIO_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3283BD1F84002841(::RPG::GameCore::VersusBarPropertyType a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_METHOD_1_3283BD1F84002841_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77A0D9F57C8133DF(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_METHOD_1_77A0D9F57C8133DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5E7CFC41DD26C3B(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_CLASS_1_C086B1B4F7274B96_METHOD_1_B5E7CFC41DD26C3B_OFFSET))(this, a1);
	}
};
