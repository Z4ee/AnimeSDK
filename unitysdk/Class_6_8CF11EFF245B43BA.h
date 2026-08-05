#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3.h"
#include "unitysdk/Class_5_2572AF054200F54C.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_11A58A840528E5B2;
class Class_1_E88275273EFBFE5C;
class Class_3_0672DFF434E78344_1;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboardObservation; }

#define CLASS_6_8CF11EFF245B43BA_METHOD_6_7EE8DA3A60412F74_OFFSET UNITYSDK_OFFSET(0x175DC840)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x175DD650)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x175DD640)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_E768C731309EEB0D_OFFSET UNITYSDK_OFFSET(0x175DD150)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x175DD250)
#define CLASS_6_8CF11EFF245B43BA_METHOD_6_EA844D0D02713D5C_OFFSET UNITYSDK_OFFSET(0x175DD2E0)
#define CLASS_6_8CF11EFF245B43BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x175DD240)
#define CLASS_6_8CF11EFF245B43BA__CTOR_OFFSET UNITYSDK_OFFSET(0x175DC7B0)

inline static constexpr unsigned int Class_6_8CF11EFF245B43BA_TypeDefinitionIndex = 86250;

class Class_6_8CF11EFF245B43BA : public ::Class_5_2572AF054200F54C<::Class_3_0672DFF434E78344_1*>
{
public:
	static ::Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3* StaticGet_Field_6_1()
	{
		return (::Class_1_A617B16EB30351B4_Enum_3_A99842A1E3D723C3*)Il2CppClass::FromTypeDefinitionIndex(Class_6_8CF11EFF245B43BA_TypeDefinitionIndex)->GetStaticField(0xFC60);
	}
	::MoleMole::UIHollowMainPageController* Field_6_0; // 0x30

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA__CCTOR_OFFSET))();
	}

	::System::Void Method_6_7EE8DA3A60412F74(::Class_1_E88275273EFBFE5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E88275273EFBFE5C*))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_7EE8DA3A60412F74_OFFSET))(this, a1);
	}

	::System::Void Method_6_E9A575D18A0748D9(::Class_1_E88275273EFBFE5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E88275273EFBFE5C*))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	static ::MoleMole::Config::ConfigHollowChessboardObservation* Method_6_E768C731309EEB0D()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardObservation*(*)())((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_E768C731309EEB0D_OFFSET))();
	}

	::System::Void Method_6_EA844D0D02713D5C(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_EA844D0D02713D5C_OFFSET))(this, a1);
	}

	::System::Void Method_6_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_6_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_8CF11EFF245B43BA_METHOD_6_832295EC279E5994_1_OFFSET))(this);
	}
};
