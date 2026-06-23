#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54.h"
#include "unitysdk/Class_1_E87E347C649FDDBC_Struct_2_6819F1818667DEA3.h"
#include "unitysdk/Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BubbleReasonType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
class Class_1_0AEBFEBDADDA07AC;
class Class_1_80CEC7B990B4301D;
class Class_1_E87E347C649FDDBC_Class_1_463AB7E43829D2C0;
class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E87E347C649FDDBC_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x1AE97CF0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_12AE48B953BC1DB2_OFFSET UNITYSDK_OFFSET(0x1AE98190)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_1879CCA520D4179D_OFFSET UNITYSDK_OFFSET(0x1AE97FE0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_1E70D7813332F6EF_OFFSET UNITYSDK_OFFSET(0x1AE99B20)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_25B6EFC63CE6F337_OFFSET UNITYSDK_OFFSET(0x1AE992A0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1AE99870)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_2D95DBC40C7D5B7C_OFFSET UNITYSDK_OFFSET(0x1AE96DC0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_37B550022D3FB108_1_OFFSET UNITYSDK_OFFSET(0x1AE9A150)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_37B550022D3FB108_OFFSET UNITYSDK_OFFSET(0x1AE9A0F0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_55CC68C6668AB4E8_OFFSET UNITYSDK_OFFSET(0x1AE99F70)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_7813B04986E9626D_OFFSET UNITYSDK_OFFSET(0x1AE97C60)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x1AE97BF0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_7CA5834468760040_OFFSET UNITYSDK_OFFSET(0x1AE99320)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0x1AE97D90)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_7F262C79EE9C8402_OFFSET UNITYSDK_OFFSET(0x1AE98C50)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_87520EC42FE5E288_1_OFFSET UNITYSDK_OFFSET(0x1AE9A0D0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_87520EC42FE5E288_OFFSET UNITYSDK_OFFSET(0x1AE99850)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_8D22E5FC5B2BDE96_OFFSET UNITYSDK_OFFSET(0x1AE97EB0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_8D8CB3265E586D10_OFFSET UNITYSDK_OFFSET(0x1AE99A10)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x1AE99590)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AE97CB0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_CA46DFF8CF6EB34E_OFFSET UNITYSDK_OFFSET(0x1AE9A030)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_D4AC429705AA2031_OFFSET UNITYSDK_OFFSET(0x1AE99920)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_E09E032CB382AAAB_OFFSET UNITYSDK_OFFSET(0x1AE998C0)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_E12B43F728D22235_OFFSET UNITYSDK_OFFSET(0x1AE97420)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_E18EC271650208CD_OFFSET UNITYSDK_OFFSET(0x1AE98B00)
#define CLASS_1_E87E347C649FDDBC_METHOD_1_F187D79FFE75E02B_OFFSET UNITYSDK_OFFSET(0x1AE98F80)
#define CLASS_1_E87E347C649FDDBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE96AE0)

inline static constexpr unsigned int Class_1_E87E347C649FDDBC_TypeDefinitionIndex = 82350;

class Class_1_E87E347C649FDDBC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3>*>* Field_1_3; // 0x18
	::Class_5_FCAF801AC482D3B5* Field_1_0; // 0x20
	::Class_1_E87E347C649FDDBC_Class_1_463AB7E43829D2C0* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3>* Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D95DBC40C7D5B7C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_2D95DBC40C7D5B7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7813B04986E9626D(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_7813B04986E9626D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Boolean Method_1_8D22E5FC5B2BDE96(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_8D22E5FC5B2BDE96_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_1879CCA520D4179D(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3>* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3>*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_1879CCA520D4179D_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_1_12AE48B953BC1DB2(::Class_5_A6F8D19602712D95* a1, ::Class_1_0AEBFEBDADDA07AC* a2, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::Class_1_0AEBFEBDADDA07AC*, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_12AE48B953BC1DB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_25B6EFC63CE6F337(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_25B6EFC63CE6F337_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_7CA5834468760040(::System::UInt32 a1, ::Class_1_E87E347C649FDDBC_Struct_2_6819F1818667DEA3& a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::Class_1_E87E347C649FDDBC_Struct_2_6819F1818667DEA3&))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_7CA5834468760040_OFFSET))(a1, a2);
	}

	::System::Void Method_1_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Action_1<::Class_5_A6F8D19602712D95*>* Method_1_87520EC42FE5E288()
	{
		return ((::System::Action_1<::Class_5_A6F8D19602712D95*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_87520EC42FE5E288_OFFSET))(this);
	}

	::System::UInt32 Method_1_E12B43F728D22235(::Class_5_A6F8D19602712D95* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_E12B43F728D22235_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Boolean Method_1_E09E032CB382AAAB(::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BubbleReasonType))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_E09E032CB382AAAB_OFFSET))(this, a1);
	}

	::Class_1_0AEBFEBDADDA07AC* Method_1_E18EC271650208CD(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3& a2)
	{
		return ((::Class_1_0AEBFEBDADDA07AC*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_E87E347C649FDDBC_Struct_2_E90FE6C894CE36C3&))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_E18EC271650208CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D4AC429705AA2031(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_D4AC429705AA2031_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54> Method_1_8D8CB3265E586D10(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Nullable_1<::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54>(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_8D8CB3265E586D10_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E70D7813332F6EF(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_1E70D7813332F6EF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_55CC68C6668AB4E8(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_0AEBFEBDADDA07AC* a2, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_55CC68C6668AB4E8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D599D6C5F28E144(::Class_0_16E4307DCC419505_747* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_747*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA46DFF8CF6EB34E(::Class_1_80CEC7B990B4301D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80CEC7B990B4301D*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_CA46DFF8CF6EB34E_OFFSET))(this, a1);
	}

	::System::Action_1<::Class_5_A6F8D19602712D95*>* Method_1_87520EC42FE5E288_1()
	{
		return ((::System::Action_1<::Class_5_A6F8D19602712D95*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_87520EC42FE5E288_1_OFFSET))(this);
	}

	::System::Void Method_1_7F262C79EE9C8402(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_0AEBFEBDADDA07AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_7F262C79EE9C8402_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_37B550022D3FB108(::System::Action_1<::Class_5_A6F8D19602712D95*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_5_A6F8D19602712D95*>*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_37B550022D3FB108_OFFSET))(this, a1);
	}

	::System::Void Method_1_37B550022D3FB108_1(::System::Action_1<::Class_5_A6F8D19602712D95*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_5_A6F8D19602712D95*>*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_37B550022D3FB108_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F187D79FFE75E02B(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_0AEBFEBDADDA07AC* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_1_E87E347C649FDDBC_METHOD_1_F187D79FFE75E02B_OFFSET))(this, a1, a2);
	}
};
