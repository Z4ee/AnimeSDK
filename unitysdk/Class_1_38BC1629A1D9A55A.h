#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_623FA07AC87B7A23.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_38EE0169AA9CE03E;
class Class_1_6D1045A276B3030B;
namespace MoleMole::DisplayCase { class DisplayItemData; }
namespace System { class String; }

#define CLASS_1_38BC1629A1D9A55A_METHOD_1_14F265F5FFA8FAF9_OFFSET UNITYSDK_OFFSET(0x11AB0CF0)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_B362935A698CA48E_OFFSET UNITYSDK_OFFSET(0x11AB1080)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_BD9E910C153DC0B2_OFFSET UNITYSDK_OFFSET(0x11AB12C0)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_CAFE6CD3C037C178_OFFSET UNITYSDK_OFFSET(0x11AB1140)
#define CLASS_1_38BC1629A1D9A55A_METHOD_1_FA798E3CC59E9D4E_OFFSET UNITYSDK_OFFSET(0x11AB0F20)

inline static constexpr unsigned int Class_1_38BC1629A1D9A55A_TypeDefinitionIndex = 67120;

class Class_1_38BC1629A1D9A55A : public ::System::Object
{
public:
	static ::Class_1_38EE0169AA9CE03E* Method_1_14F265F5FFA8FAF9(::System::Int32 a1, ::MoleMole::DisplayCase::DisplayBaseTransformData a2)
	{
		return ((::Class_1_38EE0169AA9CE03E*(*)(::System::Int32, ::MoleMole::DisplayCase::DisplayBaseTransformData))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_14F265F5FFA8FAF9_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_B362935A698CA48E(::MoleMole::DisplayCase::EDisplayItemSubType a1)
	{
		return ((::System::String*(*)(::MoleMole::DisplayCase::EDisplayItemSubType))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_B362935A698CA48E_OFFSET))(a1);
	}

	static ::Class_1_6D1045A276B3030B* Method_1_CAFE6CD3C037C178(::Class_1_38EE0169AA9CE03E* a1)
	{
		return ((::Class_1_6D1045A276B3030B*(*)(::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_CAFE6CD3C037C178_OFFSET))(a1);
	}

	static ::System::String* Method_1_BD9E910C153DC0B2(::Enum_3_623FA07AC87B7A23 a1)
	{
		return ((::System::String*(*)(::Enum_3_623FA07AC87B7A23))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_BD9E910C153DC0B2_OFFSET))(a1);
	}

	static ::System::Void Method_1_FA798E3CC59E9D4E(::Class_1_38EE0169AA9CE03E* a1, ::MoleMole::DisplayCase::DisplayItemData* a2)
	{
		return ((::System::Void(*)(::Class_1_38EE0169AA9CE03E*, ::MoleMole::DisplayCase::DisplayItemData*))((::PBYTE)hIl2Cpp + CLASS_1_38BC1629A1D9A55A_METHOD_1_FA798E3CC59E9D4E_OFFSET))(a1, a2);
	}
};
