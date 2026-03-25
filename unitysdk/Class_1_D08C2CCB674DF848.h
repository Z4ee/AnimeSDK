#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_103_Struct_2_0A33320B2F65B0F7.h"
#include "unitysdk/Class_1_D08C2CCB674DF848_LevelConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_9EC03A9F7918F95D;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D08C2CCB674DF848_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x8757480)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_2759BEB287BA573A_OFFSET UNITYSDK_OFFSET(0x8756ED0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_2988BB1DC0169FA1_OFFSET UNITYSDK_OFFSET(0x87560A0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x87570A0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_34EA46C0739BC855_OFFSET UNITYSDK_OFFSET(0x8757A60)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x8756DC0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_3A3BFAD286D18424_OFFSET UNITYSDK_OFFSET(0x8756FD0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_3BDC2F6B92EAC269_OFFSET UNITYSDK_OFFSET(0x8756890)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_3C245D46492933A5_OFFSET UNITYSDK_OFFSET(0x8756F80)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_43CB3F4F72E9EC39_OFFSET UNITYSDK_OFFSET(0x8757820)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x8757B00)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x8756200)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_7C5877265904EA7F_OFFSET UNITYSDK_OFFSET(0x8756550)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_939E8528C5A82B7C_OFFSET UNITYSDK_OFFSET(0x8756E30)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_A64088E961005579_OFFSET UNITYSDK_OFFSET(0x8756AD0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_B5B0C534025E2156_OFFSET UNITYSDK_OFFSET(0x87571E0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_B7711D67B612F246_OFFSET UNITYSDK_OFFSET(0x8756D30)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x8756400)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_D23574724C84E522_OFFSET UNITYSDK_OFFSET(0x8757560)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_F5110E31ADF163E3_OFFSET UNITYSDK_OFFSET(0x87572B0)
#define CLASS_1_D08C2CCB674DF848_METHOD_1_FFFDDB5F298227E9_OFFSET UNITYSDK_OFFSET(0x8755F40)
#define CLASS_1_D08C2CCB674DF848__CCTOR_OFFSET UNITYSDK_OFFSET(0x8757B90)
#define CLASS_1_D08C2CCB674DF848__CTOR_OFFSET UNITYSDK_OFFSET(0x8755E30)
#define CLASS_1_D08C2CCB674DF848__FILTERLIGHTSBYTARGET_B__32_0_OFFSET UNITYSDK_OFFSET(0x8757BD0)
#define CLASS_1_D08C2CCB674DF848__FILTERLIGHTSBYTARGET_B__32_1_OFFSET UNITYSDK_OFFSET(0x8757C00)
#define CLASS_1_D08C2CCB674DF848__FILTERLIGHTSBYTARGET_B__32_2_OFFSET UNITYSDK_OFFSET(0x8757C30)

inline static constexpr unsigned int Class_1_D08C2CCB674DF848_TypeDefinitionIndex = 41848;

class Class_1_D08C2CCB674DF848 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D08C2CCB674DF848_TypeDefinitionIndex)->GetStaticField(0x7E70);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D08C2CCB674DF848_TypeDefinitionIndex)->GetStaticField(0x7E74);
	}
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x10
	::Class_1_9EC03A9F7918F95D* Field_1_8; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_9; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_2; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::Class_1_D08C2CCB674DF848_LevelConfig Field_1_7; // 0x3C
	::System::Int32 Field_1_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FFFDDB5F298227E9(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::Class_1_D08C2CCB674DF848_LevelConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::Class_1_D08C2CCB674DF848_LevelConfig))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_FFFDDB5F298227E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2988BB1DC0169FA1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::Class_1_D08C2CCB674DF848_LevelConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::Class_1_D08C2CCB674DF848_LevelConfig))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_2988BB1DC0169FA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_7C5877265904EA7F(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_7C5877265904EA7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BDC2F6B92EAC269(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_3BDC2F6B92EAC269_OFFSET))(this, a1);
	}

	::System::Void Method_1_A64088E961005579(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_A64088E961005579_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B7711D67B612F246(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_B7711D67B612F246_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_1_939E8528C5A82B7C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_939E8528C5A82B7C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_2759BEB287BA573A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_2759BEB287BA573A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C245D46492933A5(::Class_1_D08C2CCB674DF848_LevelConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D08C2CCB674DF848_LevelConfig))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_3C245D46492933A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3A3BFAD286D18424(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_3A3BFAD286D18424_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5B0C534025E2156(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_B5B0C534025E2156_OFFSET))(this, a1);
	}

	::System::String* Method_1_F5110E31ADF163E3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_F5110E31ADF163E3_OFFSET))(this);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Void Method_1_D23574724C84E522(::Class_1_43BD383C98B4C0C5_103_Struct_2_0A33320B2F65B0F7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_103_Struct_2_0A33320B2F65B0F7))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_D23574724C84E522_OFFSET))(this, a1);
	}

	::System::Void Method_1_34EA46C0739BC855(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_34EA46C0739BC855_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_43CB3F4F72E9EC39(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_43CB3F4F72E9EC39_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_METHOD_1_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::System::Boolean _FilterLightsByTarget_b__32_0(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848__FILTERLIGHTSBYTARGET_B__32_0_OFFSET))(this, id);
	}

	::System::Boolean _FilterLightsByTarget_b__32_1(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848__FILTERLIGHTSBYTARGET_B__32_1_OFFSET))(this, id);
	}

	::System::Boolean _FilterLightsByTarget_b__32_2(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848__FILTERLIGHTSBYTARGET_B__32_2_OFFSET))(this, id);
	}
};
