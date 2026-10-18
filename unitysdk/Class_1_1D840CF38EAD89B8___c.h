#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_89120A467F7A010D_2;
class Class_1_C5CEA8DD589BD643;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1D840CF38EAD89B8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159762E0)
#define CLASS_1_1D840CF38EAD89B8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15976320)
#define CLASS_1_1D840CF38EAD89B8___C__GETRANKENTRIES_B__27_0_OFFSET UNITYSDK_OFFSET(0x15976350)
#define CLASS_1_1D840CF38EAD89B8___C___GETDRIVERPANELICONSTATE_B__20_0_OFFSET UNITYSDK_OFFSET(0x15976330)

inline static constexpr unsigned int Class_1_1D840CF38EAD89B8___c_TypeDefinitionIndex = 81955;

class Class_1_1D840CF38EAD89B8___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_89120A467F7A010D_2*, ::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::Class_1_89120A467F7A010D_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D840CF38EAD89B8___c_TypeDefinitionIndex)->GetStaticField(0x5AFF0);
	}
	static ::Class_1_1D840CF38EAD89B8___c** StaticGet___9()
	{
		return (::Class_1_1D840CF38EAD89B8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D840CF38EAD89B8___c_TypeDefinitionIndex)->GetStaticField(0x5AFF8);
	}
	static ::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>** StaticGet___9__27_0()
	{
		return (::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D840CF38EAD89B8___c_TypeDefinitionIndex)->GetStaticField(0x5B000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D840CF38EAD89B8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D840CF38EAD89B8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetDriverPanelIconState_b__20_0(::Class_1_89120A467F7A010D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_89120A467F7A010D_2*))((::PBYTE)hIl2Cpp + CLASS_1_1D840CF38EAD89B8___C___GETDRIVERPANELICONSTATE_B__20_0_OFFSET))(this, a1);
	}

	::System::Int32 _GetRankEntries_b__27_0(::Class_1_C5CEA8DD589BD643* a1, ::Class_1_C5CEA8DD589BD643* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C5CEA8DD589BD643*, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_1_1D840CF38EAD89B8___C__GETRANKENTRIES_B__27_0_OFFSET))(this, a1, a2);
	}
};
