#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3.h"
#include "unitysdk/Class_5_2572AF054200F54C.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_11A58A840528E5B2;
class Class_1_2EF69FD7F867E7F6;
class Class_3_0672DFF434E78344_1;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboardObservation; }

#define CLASS_6_8CF11EFF245B43BA_METHOD_6_7E24A56AEB8784E9_OFFSET UNITYSDK_OFFSET(0x1759D040)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1759D4B0)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1759D4A0)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_DB0820ABB8FC2ECF_OFFSET UNITYSDK_OFFSET(0x1759C910)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1759D410)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_EA844D0D02713D5C_OFFSET UNITYSDK_OFFSET(0x1759D0B0)
#define CLASS_6_8CF11EFF245B43BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1759D0A0)
#define CLASS_6_8CF11EFF245B43BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1759C870)

inline static constexpr unsigned int Class_6_8CF11EFF245B43BA_TypeDefinitionIndex = 61419;

class Class_6_8CF11EFF245B43BA : public ::Class_5_2572AF054200F54C<::Class_3_0672DFF434E78344_1*>
{
public:
	static ::Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3* StaticGet_Field_6_0()
	{
		return (::Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3*)Il2CppClass::FromTypeDefinitionIndex(Class_6_8CF11EFF245B43BA_TypeDefinitionIndex)->GetStaticField(0xF7F0);
	}
	::MoleMole::UIHollowMainPageController* Field_6_1; // 0x30

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA__CCTOR_OFFSET))();
	}

	::System::Void Method_6_DB0820ABB8FC2ECF(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_DB0820ABB8FC2ECF_OFFSET))(this, a1);
	}

	::System::Void Method_6_EA844D0D02713D5C(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_EA844D0D02713D5C_OFFSET))(this, a1);
	}

	::System::Void Method_6_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_6_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigHollowChessboardObservation* Method_6_7E24A56AEB8784E9()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardObservation*(*)())((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_7E24A56AEB8784E9_OFFSET))();
	}

	::System::Void Method_6_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_1_OFFSET))(this);
	}
};
