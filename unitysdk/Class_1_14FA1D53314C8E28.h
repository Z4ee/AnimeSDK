#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8676A5D6BF139078;
namespace RPG::Client { class MonoInflatableFighter; }

#define CLASS_1_14FA1D53314C8E28_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188E8250)
#define CLASS_1_14FA1D53314C8E28_GET_ISOVERHIGHCUT_OFFSET UNITYSDK_OFFSET(0x188E7D00)
#define CLASS_1_14FA1D53314C8E28_GET_ISUNDERLOWCUT_OFFSET UNITYSDK_OFFSET(0x188E7CE0)
#define CLASS_1_14FA1D53314C8E28_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x188E7C30)
#define CLASS_1_14FA1D53314C8E28_METHOD_1_2D69DEA94F4D6D5B_OFFSET UNITYSDK_OFFSET(0x188E81C0)
#define CLASS_1_14FA1D53314C8E28_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x188E7C50)
#define CLASS_1_14FA1D53314C8E28_METHOD_1_45030DA3EF3AEF01_OFFSET UNITYSDK_OFFSET(0x188E80F0)
#define CLASS_1_14FA1D53314C8E28_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x188E7E80)
#define CLASS_1_14FA1D53314C8E28_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x188E7F60)
#define CLASS_1_14FA1D53314C8E28_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x188E7D50)
#define CLASS_1_14FA1D53314C8E28_METHOD_1_BB884C5174CE0D2A_OFFSET UNITYSDK_OFFSET(0x188E7FC0)
#define CLASS_1_14FA1D53314C8E28_SET_ISOVERHIGHCUT_OFFSET UNITYSDK_OFFSET(0x188E7D10)
#define CLASS_1_14FA1D53314C8E28_SET_ISUNDERLOWCUT_OFFSET UNITYSDK_OFFSET(0x188E7CF0)
#define CLASS_1_14FA1D53314C8E28_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x188E7C40)
#define CLASS_1_14FA1D53314C8E28__CTOR_OFFSET UNITYSDK_OFFSET(0x188E7D20)

inline static constexpr unsigned int Class_1_14FA1D53314C8E28_TypeDefinitionIndex = 68650;

class Class_1_14FA1D53314C8E28 : public ::System::Object
{
public:
	::Class_1_8676A5D6BF139078* CPIIOIPAAKK; // 0x10
	::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
	::System::Single GCOKDGBOEAH; // 0x20
	::System::Boolean _IsOverHighCut_k__BackingField; // 0x24
	::System::Boolean _IsUnderLowCut_k__BackingField; // 0x25
	::System::Single JOMGGELMAAL; // 0x28
	::System::Single _Pressure_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_8676A5D6BF139078* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8676A5D6BF139078*))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Pressure()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_GET_PRESSURE_OFFSET))(this);
	}

	::System::Void set_Pressure(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_SET_PRESSURE_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Boolean get_IsUnderLowCut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_GET_ISUNDERLOWCUT_OFFSET))(this);
	}

	::System::Void set_IsUnderLowCut(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_SET_ISUNDERLOWCUT_OFFSET))(this, a1);
	}

	::System::Boolean get_IsOverHighCut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_GET_ISOVERHIGHCUT_OFFSET))(this);
	}

	::System::Void set_IsOverHighCut(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_SET_ISOVERHIGHCUT_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_BB884C5174CE0D2A(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_METHOD_1_BB884C5174CE0D2A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_45030DA3EF3AEF01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_METHOD_1_45030DA3EF3AEF01_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D69DEA94F4D6D5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_METHOD_1_2D69DEA94F4D6D5B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14FA1D53314C8E28_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}
};
