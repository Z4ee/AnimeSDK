#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7991050093A784B6.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"

class Class_1_26684305CEECE64E;
class Class_1_3E663F02593BDAF0;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_3E3C29A44DAC07BE_1_OFFSET UNITYSDK_OFFSET(0x18AFC320)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_3E3C29A44DAC07BE_OFFSET UNITYSDK_OFFSET(0x18AFC0E0)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_6BED711686BCC35C_1_OFFSET UNITYSDK_OFFSET(0x18AFC5C0)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_6BED711686BCC35C_OFFSET UNITYSDK_OFFSET(0x18AFC560)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_9CE62585340E1AD9_OFFSET UNITYSDK_OFFSET(0x18AFBFB0)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_AE1F022B53A2E977_OFFSET UNITYSDK_OFFSET(0x18AFC080)
#define CLASS_2_2EBAC67816CBA1E1__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFC050)

inline static constexpr unsigned int Class_2_2EBAC67816CBA1E1_TypeDefinitionIndex = 34882;

class Class_2_2EBAC67816CBA1E1 : public ::Class_1_7991050093A784B6
{
public:
	::Class_1_3E663F02593BDAF0* Field_2_0; // 0x40
	::Class_2_F3C45F1FC7349B6E* Field_2_1; // 0x48
	::Class_2_21AD365C113DC484* Field_2_2; // 0x50
	::Il2CppArray<::Class_1_26684305CEECE64E*>* Field_2_3; // 0x58
	::Il2CppArray<::Class_1_26684305CEECE64E*>* Field_2_4; // 0x60

	::System::Void _ctor(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAoeShowType, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_2EBAC67816CBA1E1* Method_2_9CE62585340E1AD9(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::Class_2_2EBAC67816CBA1E1*(*)(::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAoeShowType, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_9CE62585340E1AD9_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_21AD365C113DC484*>* Method_2_AE1F022B53A2E977()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_AE1F022B53A2E977_OFFSET))(this);
	}

	::System::Void Method_2_3E3C29A44DAC07BE(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_3E3C29A44DAC07BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E3C29A44DAC07BE_1(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_3E3C29A44DAC07BE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BED711686BCC35C(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_6BED711686BCC35C_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BED711686BCC35C_1(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_6BED711686BCC35C_1_OFFSET))(this, a1);
	}
};
