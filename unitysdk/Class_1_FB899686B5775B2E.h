#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_115_Struct_2_0A33320B2F65B0F7.h"
#include "unitysdk/Class_1_FB899686B5775B2E_LevelConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_9EC03A9F7918F95D;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FB899686B5775B2E_METHOD_1_089FB5FEF7019958_OFFSET UNITYSDK_OFFSET(0x143C5D30)
#define CLASS_1_FB899686B5775B2E_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x143C6930)
#define CLASS_1_FB899686B5775B2E_METHOD_1_2759BEB287BA573A_OFFSET UNITYSDK_OFFSET(0x143C6380)
#define CLASS_1_FB899686B5775B2E_METHOD_1_293295AD1C73433D_OFFSET UNITYSDK_OFFSET(0x143C5390)
#define CLASS_1_FB899686B5775B2E_METHOD_1_2AEA817372865947_OFFSET UNITYSDK_OFFSET(0x143C66A0)
#define CLASS_1_FB899686B5775B2E_METHOD_1_3264637B4DFC99D1_OFFSET UNITYSDK_OFFSET(0x143C6480)
#define CLASS_1_FB899686B5775B2E_METHOD_1_3266C67951D93A81_OFFSET UNITYSDK_OFFSET(0x143C59E0)
#define CLASS_1_FB899686B5775B2E_METHOD_1_34EA46C0739BC855_OFFSET UNITYSDK_OFFSET(0x143C6F10)
#define CLASS_1_FB899686B5775B2E_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x143C6270)
#define CLASS_1_FB899686B5775B2E_METHOD_1_3C245D46492933A5_OFFSET UNITYSDK_OFFSET(0x143C6430)
#define CLASS_1_FB899686B5775B2E_METHOD_1_43CB3F4F72E9EC39_OFFSET UNITYSDK_OFFSET(0x143C6CD0)
#define CLASS_1_FB899686B5775B2E_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x143C6FB0)
#define CLASS_1_FB899686B5775B2E_METHOD_1_700A864E4332B765_OFFSET UNITYSDK_OFFSET(0x143C5500)
#define CLASS_1_FB899686B5775B2E_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x143C5670)
#define CLASS_1_FB899686B5775B2E_METHOD_1_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x143C6540)
#define CLASS_1_FB899686B5775B2E_METHOD_1_939E8528C5A82B7C_OFFSET UNITYSDK_OFFSET(0x143C62E0)
#define CLASS_1_FB899686B5775B2E_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x143C5890)
#define CLASS_1_FB899686B5775B2E_METHOD_1_B7711D67B612F246_OFFSET UNITYSDK_OFFSET(0x143C61E0)
#define CLASS_1_FB899686B5775B2E_METHOD_1_D23574724C84E522_OFFSET UNITYSDK_OFFSET(0x143C6A10)
#define CLASS_1_FB899686B5775B2E_METHOD_1_D55012C783AD2363_OFFSET UNITYSDK_OFFSET(0x143C5F70)
#define CLASS_1_FB899686B5775B2E_METHOD_1_F5110E31ADF163E3_OFFSET UNITYSDK_OFFSET(0x143C6760)
#define CLASS_1_FB899686B5775B2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x143C7040)
#define CLASS_1_FB899686B5775B2E__CTOR_OFFSET UNITYSDK_OFFSET(0x143C5280)
#define CLASS_1_FB899686B5775B2E__FILTERLIGHTSBYTARGET_B__32_0_OFFSET UNITYSDK_OFFSET(0x143C7050)
#define CLASS_1_FB899686B5775B2E__FILTERLIGHTSBYTARGET_B__32_1_OFFSET UNITYSDK_OFFSET(0x143C7080)
#define CLASS_1_FB899686B5775B2E__FILTERLIGHTSBYTARGET_B__32_2_OFFSET UNITYSDK_OFFSET(0x143C70B0)

inline static constexpr unsigned int Class_1_FB899686B5775B2E_TypeDefinitionIndex = 48438;

class Class_1_FB899686B5775B2E : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB899686B5775B2E_TypeDefinitionIndex)->GetStaticField(0xA700);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB899686B5775B2E_TypeDefinitionIndex)->GetStaticField(0xA704);
	}
	::Class_1_9EC03A9F7918F95D* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x30
	::System::Int32 Field_1_7; // 0x38
	::System::Int32 Field_1_8; // 0x3C
	::Class_1_FB899686B5775B2E_LevelConfig Field_1_9; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_293295AD1C73433D(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::Class_1_FB899686B5775B2E_LevelConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::Class_1_FB899686B5775B2E_LevelConfig))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_293295AD1C73433D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_700A864E4332B765(::System::Collections::Generic::List_1<::System::Int32>* a1, ::Class_1_FB899686B5775B2E_LevelConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::Class_1_FB899686B5775B2E_LevelConfig))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_700A864E4332B765_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_3266C67951D93A81(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_3266C67951D93A81_OFFSET))(this, a1);
	}

	::System::Void Method_1_089FB5FEF7019958(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_089FB5FEF7019958_OFFSET))(this, a1);
	}

	::System::Void Method_1_D55012C783AD2363(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_D55012C783AD2363_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B7711D67B612F246(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_B7711D67B612F246_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_1_939E8528C5A82B7C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_939E8528C5A82B7C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_2759BEB287BA573A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_2759BEB287BA573A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C245D46492933A5(::Class_1_FB899686B5775B2E_LevelConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB899686B5775B2E_LevelConfig))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_3C245D46492933A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3264637B4DFC99D1(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_3264637B4DFC99D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AEA817372865947(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_2AEA817372865947_OFFSET))(this, a1);
	}

	::System::String* Method_1_F5110E31ADF163E3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_F5110E31ADF163E3_OFFSET))(this);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Void Method_1_D23574724C84E522(::Class_1_43BD383C98B4C0C5_115_Struct_2_0A33320B2F65B0F7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_115_Struct_2_0A33320B2F65B0F7))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_D23574724C84E522_OFFSET))(this, a1);
	}

	::System::Void Method_1_34EA46C0739BC855(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_34EA46C0739BC855_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_43CB3F4F72E9EC39(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_43CB3F4F72E9EC39_OFFSET))(this, a1);
	}

	::System::Void Method_1_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_METHOD_1_8894E534FED3129C_OFFSET))(this);
	}

	::System::Boolean _FilterLightsByTarget_b__32_0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E__FILTERLIGHTSBYTARGET_B__32_0_OFFSET))(this, a1);
	}

	::System::Boolean _FilterLightsByTarget_b__32_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E__FILTERLIGHTSBYTARGET_B__32_1_OFFSET))(this, a1);
	}

	::System::Boolean _FilterLightsByTarget_b__32_2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E__FILTERLIGHTSBYTARGET_B__32_2_OFFSET))(this, a1);
	}
};
