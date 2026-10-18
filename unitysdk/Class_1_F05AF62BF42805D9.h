#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E0103A0EA6CD0F4C;
class Class_1_F05AF62BF42805D9_Class_1_60FD03160B03F7FD;
class Class_2_4EEAD21E873B5A41;
class Class_3_912CC478F2B21832;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_F05AF62BF42805D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC46F570)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_0501746CF8CCEFB4_OFFSET UNITYSDK_OFFSET(0xC46FED0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xC1BD040)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xC471390)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xC46F7B0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_1E6FCCFAAAA27510_OFFSET UNITYSDK_OFFSET(0xC4727B0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xC4713F0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0xC46FD50)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_2AC0614C2C70C9D9_OFFSET UNITYSDK_OFFSET(0xC4725E0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC46F2B0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_44B5B58117455F4C_OFFSET UNITYSDK_OFFSET(0xC472430)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0xC472870)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_4842CD3F21E04643_OFFSET UNITYSDK_OFFSET(0xC472C20)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_4897955D906CA93C_OFFSET UNITYSDK_OFFSET(0xC4701F0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_4D9E14678AF2C699_OFFSET UNITYSDK_OFFSET(0xC472910)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xC472100)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_5D2C76B9A51C9650_OFFSET UNITYSDK_OFFSET(0xC470F50)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_67092B198ADCB2A8_OFFSET UNITYSDK_OFFSET(0xC470120)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_685EA12A8439ED7E_OFFSET UNITYSDK_OFFSET(0xC471070)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_6CE3658623BE8932_OFFSET UNITYSDK_OFFSET(0xC46EC00)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xC472350)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_7F11B604F3AE037D_OFFSET UNITYSDK_OFFSET(0xC470B00)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xC471940)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xC470890)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC46F370)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xC46FCE0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xC46FDA0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_B646DBE6BD5FA947_OFFSET UNITYSDK_OFFSET(0xC470640)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_B931DB9EE891755B_OFFSET UNITYSDK_OFFSET(0xC472200)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0xC471F80)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC472810)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xC46F3D0)
#define CLASS_1_F05AF62BF42805D9_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xC471030)
#define CLASS_1_F05AF62BF42805D9__CCTOR_OFFSET UNITYSDK_OFFSET(0xC472F80)
#define CLASS_1_F05AF62BF42805D9__CTOR_OFFSET UNITYSDK_OFFSET(0xC46EAB0)
#define CLASS_1_F05AF62BF42805D9___OPENUI_B__15_0_OFFSET UNITYSDK_OFFSET(0xC473090)

inline static constexpr unsigned int Class_1_F05AF62BF42805D9_TypeDefinitionIndex = 60559;

class Class_1_F05AF62BF42805D9 : public ::System::Object
{
public:
	static ::RPG::GameCore::HoyoTag** StaticGet_GIMINDMIKDO()
	{
		return (::RPG::GameCore::HoyoTag**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9_TypeDefinitionIndex)->GetStaticField(0x104D0);
	}
	static ::System::Boolean* StaticGet_NBHODGBJHIG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9_TypeDefinitionIndex)->GetStaticField(0x35E0);
	}
	static ::System::Boolean* StaticGet_BOGECBNOKKI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9_TypeDefinitionIndex)->GetStaticField(0x35E1);
	}
	static ::System::Boolean* StaticGet_FMODKOLAKOF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9_TypeDefinitionIndex)->GetStaticField(0x35E2);
	}
	static ::System::Boolean* StaticGet_PAOBCEGEFEK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F05AF62BF42805D9_TypeDefinitionIndex)->GetStaticField(0x35E3);
	}
	::Class_3_912CC478F2B21832* EDKOLBIBJPJ; // 0x10
	::RPG::GameCore::GameEntity* PBDLPHFMOEH; // 0x18
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
	::System::String* AMNAGGJIGDH; // 0x28
	::System::Action* JLOANCFBAEO; // 0x30
	::System::String* DINOJGIGOKA; // 0x38
	::System::String* KKAHKEOBAAF; // 0x40
	::Class_1_E0103A0EA6CD0F4C* PACHDCGDDLF; // 0x48
	::RPG::GameCore::FiveDimPortalTarget* ILPMJIENGFH; // 0x50
	::System::Collections::Generic::Stack_1<::Class_1_F05AF62BF42805D9_Class_1_60FD03160B03F7FD*>* JHDNEEMFLLB; // 0x58
	::RPG::Client::UIController* EPDGEGCONCE; // 0x60
	::System::Action* CPHCBDFBAEK; // 0x68
	::System::Action* AMIDPANDGOG; // 0x70
	::System::Boolean OCADGKINKON; // 0x78
	::System::Boolean PHCDAOBHPHE; // 0x79
	::System::Boolean ALBGENABAKM; // 0x7A
	::System::Boolean BDENIMANKIC; // 0x7B
	::UnityEngine::Vector3 JHEBOOJAOPB; // 0x7C
	::System::Int32 BAMCKCBKODH; // 0x88
	::System::UInt32 CEKCPNAPBIE; // 0x8C
	::System::Boolean NJEDJENCHOJ; // 0x90
	::System::Boolean OFAHFICIFEJ; // 0x91
	::System::Boolean HOHAMGIMOCF; // 0x92
	::System::Boolean HIOODHNPLJA; // 0x93
	::System::Boolean POHEELFNCOM; // 0x94
	::System::Boolean NJLMCLGFELB; // 0x95
	::System::Boolean MNDOMICJGAD; // 0x96
	::System::Boolean DIAFNIICPKM; // 0x97
	::System::Int32 CFHHHLCABGJ; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9__CCTOR_OFFSET))();
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_1_6CE3658623BE8932(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_6CE3658623BE8932_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0501746CF8CCEFB4(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_0501746CF8CCEFB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4897955D906CA93C(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::System::Boolean a7, ::System::UInt32 a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_4897955D906CA93C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_B646DBE6BD5FA947(::System::Action* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_B646DBE6BD5FA947_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_67092B198ADCB2A8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_67092B198ADCB2A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D2C76B9A51C9650(::RPG::GameCore::FiveDimPortalTarget* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalTarget*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_5D2C76B9A51C9650_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::Class_1_E0103A0EA6CD0F4C* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E0103A0EA6CD0F4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_1_685EA12A8439ED7E(::System::UInt32 a1, ::System::UInt32 a2, ::Class_2_4EEAD21E873B5A41*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_2_4EEAD21E873B5A41*&))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_685EA12A8439ED7E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_7F11B604F3AE037D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_7F11B604F3AE037D_OFFSET))(this, a1);
	}

	::System::Void Method_1_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Boolean Method_1_B931DB9EE891755B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_B931DB9EE891755B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_1E6FCCFAAAA27510(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_1E6FCCFAAAA27510_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2AC0614C2C70C9D9(::System::UInt32 a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_2AC0614C2C70C9D9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_44B5B58117455F4C(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_44B5B58117455F4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::System::UInt32 Method_1_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_4628F59881B23161_OFFSET))(this);
	}

	::System::Boolean Method_1_4D9E14678AF2C699(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_4D9E14678AF2C699_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4842CD3F21E04643(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9_METHOD_1_4842CD3F21E04643_OFFSET))(this, a1);
	}

	::System::Void __OpenUI_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05AF62BF42805D9___OPENUI_B__15_0_OFFSET))(this);
	}
};
