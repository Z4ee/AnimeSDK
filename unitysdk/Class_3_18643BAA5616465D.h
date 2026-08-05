#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"

class Class_0_16E4307DCC419505_198;
class Class_1_1F80ACDC6C476D82;
class Class_1_4BCD36557F46EA58;
class Class_1_5845D5E7E3311DD9;
class Class_1_9E991A4C7A8D236B;
class Class_1_B85817849BC6CF88;
class Class_1_BE29B49AC03370B6;
class Class_1_C7DB129893133198;
class Class_1_FE7E81DE5EE6F03B;
class Class_2_A4D62D05D5EA8464;
namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_18643BAA5616465D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C5A180)
#define CLASS_3_18643BAA5616465D_METHOD_3_215A7334ADB4375F_OFFSET UNITYSDK_OFFSET(0x17C5C7D0)
#define CLASS_3_18643BAA5616465D_METHOD_3_29753DB3C8C934FE_OFFSET UNITYSDK_OFFSET(0x17C5A600)
#define CLASS_3_18643BAA5616465D_METHOD_3_3CB8E9BFE50932EF_OFFSET UNITYSDK_OFFSET(0x17C5A9A0)
#define CLASS_3_18643BAA5616465D_METHOD_3_3EA29F49F785C3F1_1_OFFSET UNITYSDK_OFFSET(0x17C5BF80)
#define CLASS_3_18643BAA5616465D_METHOD_3_3EA29F49F785C3F1_2_OFFSET UNITYSDK_OFFSET(0x17C5CA40)
#define CLASS_3_18643BAA5616465D_METHOD_3_3EA29F49F785C3F1_OFFSET UNITYSDK_OFFSET(0x17C5AD30)
#define CLASS_3_18643BAA5616465D_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17C5C1C0)
#define CLASS_3_18643BAA5616465D_METHOD_3_4523FC0EFDFB2DB8_OFFSET UNITYSDK_OFFSET(0x17C5AF70)
#define CLASS_3_18643BAA5616465D_METHOD_3_4B1E26575F5F2545_OFFSET UNITYSDK_OFFSET(0x17C5B8F0)
#define CLASS_3_18643BAA5616465D_METHOD_3_69DCA4FC08F75A96_OFFSET UNITYSDK_OFFSET(0x17C5C640)
#define CLASS_3_18643BAA5616465D_METHOD_3_7DD77ED1A82B5E35_OFFSET UNITYSDK_OFFSET(0x17C5CDA0)
#define CLASS_3_18643BAA5616465D_METHOD_3_85801EFEE0C8F7E0_OFFSET UNITYSDK_OFFSET(0x17C5C980)
#define CLASS_3_18643BAA5616465D_METHOD_3_8DEADE064E5B32D3_OFFSET UNITYSDK_OFFSET(0x17C5D460)
#define CLASS_3_18643BAA5616465D_METHOD_3_95ADE8ED590C5559_OFFSET UNITYSDK_OFFSET(0x17C5BA10)
#define CLASS_3_18643BAA5616465D_METHOD_3_9CF501D9254476FC_OFFSET UNITYSDK_OFFSET(0x17C5BC00)
#define CLASS_3_18643BAA5616465D_METHOD_3_9E4892F53E76605F_OFFSET UNITYSDK_OFFSET(0x17C5B2B0)
#define CLASS_3_18643BAA5616465D_METHOD_3_AAE7E44F3D6018DC_OFFSET UNITYSDK_OFFSET(0x17C5ABE0)
#define CLASS_3_18643BAA5616465D_METHOD_3_CE2E9864426069F7_OFFSET UNITYSDK_OFFSET(0x17C5C2D0)
#define CLASS_3_18643BAA5616465D_METHOD_3_DAD756773AF09C3F_OFFSET UNITYSDK_OFFSET(0x17C5B130)
#define CLASS_3_18643BAA5616465D_METHOD_3_DE708DAA1F7AFF21_OFFSET UNITYSDK_OFFSET(0x17C5B710)
#define CLASS_3_18643BAA5616465D_METHOD_3_E6CCA91F7F09FC4F_OFFSET UNITYSDK_OFFSET(0x17C5D2A0)
#define CLASS_3_18643BAA5616465D_METHOD_3_E9208CDD939F83B8_OFFSET UNITYSDK_OFFSET(0x17C5CC80)
#define CLASS_3_18643BAA5616465D_METHOD_3_F3E00F8496F3B43C_OFFSET UNITYSDK_OFFSET(0x17C5CDE0)
#define CLASS_3_18643BAA5616465D_ONCREATE_OFFSET UNITYSDK_OFFSET(0x17C5A0A0)
#define CLASS_3_18643BAA5616465D_ONSTART_OFFSET UNITYSDK_OFFSET(0x17C5A140)
#define CLASS_3_18643BAA5616465D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C59FC0)
#define CLASS_3_18643BAA5616465D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C5A810)

inline static constexpr unsigned int Class_3_18643BAA5616465D_TypeDefinitionIndex = 44670;

class Class_3_18643BAA5616465D : public ::Foundation::GameManager_1<::Class_3_18643BAA5616465D*>
{
public:
	::Class_2_A4D62D05D5EA8464* Field_3_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1F80ACDC6C476D82*>* Field_3_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1F80ACDC6C476D82*>* Field_3_2; // 0x20
	::Foundation::ViewObject::Container::TSparseList_1<::Class_1_4BCD36557F46EA58*>* Field_3_0; // 0x28
	::System::Boolean Field_3_6; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_3CB8E9BFE50932EF(::System::String* a1, ::Class_1_5845D5E7E3311DD9* a2, ::Class_1_B85817849BC6CF88*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_5845D5E7E3311DD9*, ::Class_1_B85817849BC6CF88*&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_3CB8E9BFE50932EF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_AAE7E44F3D6018DC(::Struct_2_B4AA4B9F04BE3CFD a1, ::System::Int32 a2, ::Foundation::ViewObject::ViewObjectHandle& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B4AA4B9F04BE3CFD, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_AAE7E44F3D6018DC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DAD756773AF09C3F(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_DAD756773AF09C3F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DE708DAA1F7AFF21(::Struct_2_B4AA4B9F04BE3CFD a1, ::System::Int32 a2, ::Foundation::ViewObject::ViewObjectHandle& a3, ::Class_1_C7DB129893133198* a4, ::System::Action_1<::Class_1_BE29B49AC03370B6*>* a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B4AA4B9F04BE3CFD, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle&, ::Class_1_C7DB129893133198*, ::System::Action_1<::Class_1_BE29B49AC03370B6*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_DE708DAA1F7AFF21_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_3_4B1E26575F5F2545(::System::String* a1, ::Class_1_1F80ACDC6C476D82*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_1F80ACDC6C476D82*&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_4B1E26575F5F2545_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_3EA29F49F785C3F1(::System::String* a1, ::System::Int32 a2, ::Class_1_5845D5E7E3311DD9*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_1_5845D5E7E3311DD9*&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_3EA29F49F785C3F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_95ADE8ED590C5559(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_95ADE8ED590C5559_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9CF501D9254476FC(::System::String* a1, ::Class_1_9E991A4C7A8D236B* a2, ::System::Collections::Generic::List_1<::Class_1_5845D5E7E3311DD9*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_9E991A4C7A8D236B*, ::System::Collections::Generic::List_1<::Class_1_5845D5E7E3311DD9*>*&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_9CF501D9254476FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_3EA29F49F785C3F1_1(::System::String* a1, ::System::Int32 a2, ::Class_1_FE7E81DE5EE6F03B*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_1_FE7E81DE5EE6F03B*&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_3EA29F49F785C3F1_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_9E4892F53E76605F(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_9E4892F53E76605F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_69DCA4FC08F75A96(::System::Int32 a1, ::System::Action_1<::Struct_2_B4AA4B9F04BE3CFD>* a2, ::Class_0_16E4307DCC419505_198* a3, ::System::Action_1<::Class_1_BE29B49AC03370B6*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Struct_2_B4AA4B9F04BE3CFD>*, ::Class_0_16E4307DCC419505_198*, ::System::Action_1<::Class_1_BE29B49AC03370B6*>*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_69DCA4FC08F75A96_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_4BCD36557F46EA58* Method_3_85801EFEE0C8F7E0(::Foundation::ViewObject::Container::SparseElementHandle_1<::Class_1_4BCD36557F46EA58*> a1)
	{
		return ((::Class_1_4BCD36557F46EA58*(*)(::PVOID, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Class_1_4BCD36557F46EA58*>))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_85801EFEE0C8F7E0_OFFSET))(this, a1);
	}

	::Struct_2_B4AA4B9F04BE3CFD Method_3_215A7334ADB4375F(::System::Int32 a1, ::Class_1_B85817849BC6CF88* a2, ::Class_0_16E4307DCC419505_198* a3, ::System::Action_1<::Class_1_BE29B49AC03370B6*>* a4, ::System::Boolean a5)
	{
		return ((::Struct_2_B4AA4B9F04BE3CFD(*)(::PVOID, ::System::Int32, ::Class_1_B85817849BC6CF88*, ::Class_0_16E4307DCC419505_198*, ::System::Action_1<::Class_1_BE29B49AC03370B6*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_215A7334ADB4375F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_3_3EA29F49F785C3F1_2(::System::String* a1, ::System::Int32 a2, ::Class_1_B85817849BC6CF88*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_1_B85817849BC6CF88*&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_3EA29F49F785C3F1_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E9208CDD939F83B8(::System::String* a1, ::System::Int32 a2, ::System::Action_1<::Struct_2_B4AA4B9F04BE3CFD>* a3, ::Class_0_16E4307DCC419505_198* a4, ::System::Action_1<::Class_1_BE29B49AC03370B6*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Action_1<::Struct_2_B4AA4B9F04BE3CFD>*, ::Class_0_16E4307DCC419505_198*, ::System::Action_1<::Class_1_BE29B49AC03370B6*>*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_E9208CDD939F83B8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_4BCD36557F46EA58*>* Method_3_7DD77ED1A82B5E35()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_4BCD36557F46EA58*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_7DD77ED1A82B5E35_OFFSET))(this);
	}

	::System::Void Method_3_29753DB3C8C934FE(::Struct_2_B4AA4B9F04BE3CFD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B4AA4B9F04BE3CFD))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_29753DB3C8C934FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F3E00F8496F3B43C(::Struct_2_B4AA4B9F04BE3CFD a1, ::System::String* a2, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B4AA4B9F04BE3CFD, ::System::String*, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_F3E00F8496F3B43C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_CE2E9864426069F7(::System::String* a1, ::System::Action_1<::Class_1_1F80ACDC6C476D82*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_1F80ACDC6C476D82*>*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_CE2E9864426069F7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4523FC0EFDFB2DB8(::Struct_2_B4AA4B9F04BE3CFD a1, ::Class_1_5845D5E7E3311DD9* a2, ::Foundation::ViewObject::ViewObjectHandle& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B4AA4B9F04BE3CFD, ::Class_1_5845D5E7E3311DD9*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_4523FC0EFDFB2DB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E6CCA91F7F09FC4F(::Struct_2_B4AA4B9F04BE3CFD a1, ::Foundation::ViewObject::ViewObjectHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B4AA4B9F04BE3CFD, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_E6CCA91F7F09FC4F_OFFSET))(this, a1, a2);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_3_8DEADE064E5B32D3(::Struct_2_B4AA4B9F04BE3CFD a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::Struct_2_B4AA4B9F04BE3CFD))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_METHOD_3_8DEADE064E5B32D3_OFFSET))(this, a1);
	}
};
