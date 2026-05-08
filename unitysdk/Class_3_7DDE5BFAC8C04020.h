#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CEC393DDA7BD65D6.h"
#include "unitysdk/Enum_3_8664E76D40232F76.h"
#include "unitysdk/Struct_2_276321B6B122C69C_1.h"
#include "unitysdk/Struct_2_96AF1FF555C6D2CD.h"

class Class_1_E85C6B6436A9E3DA;
class Class_1_EBE4EC615642D335;
class Class_2_785FDC7D0DA58280;
class Class_3_412776396A6B9A05_1;
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7DDE5BFAC8C04020_METHOD_3_14D21ECC74A64B76_OFFSET UNITYSDK_OFFSET(0x1A723740)
#define CLASS_3_7DDE5BFAC8C04020_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1A723D10)
#define CLASS_3_7DDE5BFAC8C04020_METHOD_3_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1A723630)
#define CLASS_3_7DDE5BFAC8C04020_METHOD_3_80E865940D51EC54_OFFSET UNITYSDK_OFFSET(0x1A723DB0)
#define CLASS_3_7DDE5BFAC8C04020_METHOD_3_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x1A724030)
#define CLASS_3_7DDE5BFAC8C04020_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1A723FA0)
#define CLASS_3_7DDE5BFAC8C04020_METHOD_3_FDC04BEF68D4E086_OFFSET UNITYSDK_OFFSET(0x1A723540)
#define CLASS_3_7DDE5BFAC8C04020__CTOR_OFFSET UNITYSDK_OFFSET(0x1A723BC0)

inline static constexpr unsigned int Class_3_7DDE5BFAC8C04020_TypeDefinitionIndex = 83464;

class Class_3_7DDE5BFAC8C04020 : public ::Class_2_CEC393DDA7BD65D6
{
public:
	::System::Collections::Generic::List_1<::Class_1_EBE4EC615642D335*>* Field_3_2; // 0x28
	::Class_3_412776396A6B9A05_1* Field_3_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::Enum_3_8664E76D40232F76, ::System::Func_4<::Class_2_785FDC7D0DA58280*, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::Struct_2_96AF1FF555C6D2CD, ::Class_1_EBE4EC615642D335*>*>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FDC04BEF68D4E086(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020_METHOD_3_FDC04BEF68D4E086_OFFSET))(this, a1);
	}

	::System::Void Method_3_5022DB1DC5AA8CB4(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020_METHOD_3_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_3_14D21ECC74A64B76(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020_METHOD_3_14D21ECC74A64B76_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_80E865940D51EC54(::Struct_2_276321B6B122C69C_1<::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::Struct_2_96AF1FF555C6D2CD> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_1<::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::Struct_2_96AF1FF555C6D2CD>))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020_METHOD_3_80E865940D51EC54_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9_1(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_7DDE5BFAC8C04020_METHOD_3_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}
};
