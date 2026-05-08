#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_5.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_6.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_DED36D60477F658C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A02943B64FE8EBE5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143F4210)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_0C5533347437DEBF_OFFSET UNITYSDK_OFFSET(0x143F7EB0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_13B61572EF8DDB90_OFFSET UNITYSDK_OFFSET(0x143F60A0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_218124418542E081_OFFSET UNITYSDK_OFFSET(0x143F45E0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_219F1A94B63A8139_OFFSET UNITYSDK_OFFSET(0x143F4580)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_2DB61051AB430605_OFFSET UNITYSDK_OFFSET(0x143F6350)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_2F7320AEAEF1B01C_OFFSET UNITYSDK_OFFSET(0x143F7E40)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x143F54A0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_3A08507C299C9176_OFFSET UNITYSDK_OFFSET(0x143F6050)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x143F5760)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x143F3C60)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_607EDCE411323F3E_OFFSET UNITYSDK_OFFSET(0x143F6F00)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x143F79F0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x143F58B0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x143F3E30)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_8420DC088664D618_OFFSET UNITYSDK_OFFSET(0x143F4A20)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0x143F51B0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_933CEED22A77CAC7_OFFSET UNITYSDK_OFFSET(0x143F63D0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_9F847E6C66FD045A_OFFSET UNITYSDK_OFFSET(0x143F6DD0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_BB4F3E29F39DF610_OFFSET UNITYSDK_OFFSET(0x143F4B30)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_C751D8659C0191AB_OFFSET UNITYSDK_OFFSET(0x143F59B0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143F4DA0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_D430F4530A98091D_OFFSET UNITYSDK_OFFSET(0x143F5090)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_DD8F6DED80A6D79E_OFFSET UNITYSDK_OFFSET(0x143F6D00)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_E5C8CCC7A4E8A34F_OFFSET UNITYSDK_OFFSET(0x143F7EF0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_E633A443AC0D3A42_OFFSET UNITYSDK_OFFSET(0x143F72E0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_EB77572BBCE0EE44_OFFSET UNITYSDK_OFFSET(0x143F5950)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_EF35140FAFF48EF9_OFFSET UNITYSDK_OFFSET(0x143F4DE0)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_F11FC6B94B14A312_OFFSET UNITYSDK_OFFSET(0x143F4D00)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_F40AAECBB3DEB1F9_OFFSET UNITYSDK_OFFSET(0x143F6300)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_F55DD6625EA390A2_OFFSET UNITYSDK_OFFSET(0x143F5C00)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_F88D2F6C9BDF2E16_OFFSET UNITYSDK_OFFSET(0x143F4900)
#define CLASS_3_A02943B64FE8EBE5_METHOD_3_FFE24DF54B83FB77_OFFSET UNITYSDK_OFFSET(0x143F7A40)
#define CLASS_3_A02943B64FE8EBE5_ONCREATE_OFFSET UNITYSDK_OFFSET(0x143F3BD0)
#define CLASS_3_A02943B64FE8EBE5_ONSTART_OFFSET UNITYSDK_OFFSET(0x143F3C10)
#define CLASS_3_A02943B64FE8EBE5_UPDATE_OFFSET UNITYSDK_OFFSET(0x143F3DD0)
#define CLASS_3_A02943B64FE8EBE5__CTOR_OFFSET UNITYSDK_OFFSET(0x143F42A0)

inline static constexpr unsigned int Class_3_A02943B64FE8EBE5_TypeDefinitionIndex = 66657;

class Class_3_A02943B64FE8EBE5 : public ::Foundation::GameManager_1<::Class_3_A02943B64FE8EBE5*>
{
public:
	// static const ::System::String* Field_3_11; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_6>*>* Field_3_10; // 0x20
	::Il2CppArray<::Class_1_DED36D60477F658C*>* Field_3_2; // 0x28
	::System::Collections::Generic::HashSet_1<::MoleMole::Config::InputGroup>* Field_3_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_8; // 0x38
	::System::String* Field_3_0; // 0x40
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputType, ::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_5>*>* Field_3_12; // 0x48
	::System::Boolean Field_3_4; // 0x50
	::System::Boolean Field_3_3; // 0x51
	::System::Boolean Field_3_1; // 0x52
	::System::Boolean Field_3_5; // 0x53

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_ONSTART_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_219F1A94B63A8139(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_219F1A94B63A8139_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_3_BB4F3E29F39DF610(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_BB4F3E29F39DF610_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_EF35140FAFF48EF9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_EF35140FAFF48EF9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D430F4530A98091D(::MoleMole::Config::InputType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_D430F4530A98091D_OFFSET))(this, a1);
	}

	::System::Void Method_3_84D2CF41A744CC73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_84D2CF41A744CC73_OFFSET))(this, a1);
	}

	::System::Void Method_3_F88D2F6C9BDF2E16(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_F88D2F6C9BDF2E16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_3_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_C751D8659C0191AB(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_C751D8659C0191AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_13B61572EF8DDB90(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_13B61572EF8DDB90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F40AAECBB3DEB1F9(::Il2CppArray<::Class_1_DED36D60477F658C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DED36D60477F658C*>*))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_F40AAECBB3DEB1F9_OFFSET))(this, a1);
	}

	::System::Void Method_3_8420DC088664D618(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_8420DC088664D618_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_2DB61051AB430605(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_2DB61051AB430605_OFFSET))(this, a1);
	}

	::System::Void Method_3_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_3_933CEED22A77CAC7(::System::String* a1, ::MoleMole::Config::InputGroup a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::UInt32 a6, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputGroup, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>*))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_933CEED22A77CAC7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_DD8F6DED80A6D79E(::System::String* a1, ::MoleMole::Config::InputType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_DD8F6DED80A6D79E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9F847E6C66FD045A(::System::String* a1, ::MoleMole::Config::InputType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_9F847E6C66FD045A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_607EDCE411323F3E(::MoleMole::Config::InputType a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_607EDCE411323F3E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E633A443AC0D3A42(::MoleMole::Config::InputGroup a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_E633A443AC0D3A42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F55DD6625EA390A2(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_F55DD6625EA390A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_EB77572BBCE0EE44(::System::Int32 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_EB77572BBCE0EE44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_3_FFE24DF54B83FB77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_FFE24DF54B83FB77_OFFSET))(this, a1);
	}

	::Class_1_DED36D60477F658C* Method_3_2F7320AEAEF1B01C(::MoleMole::Config::InputType a1)
	{
		return ((::Class_1_DED36D60477F658C*(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_2F7320AEAEF1B01C_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_DED36D60477F658C*>* Method_3_0C5533347437DEBF()
	{
		return ((::Il2CppArray<::Class_1_DED36D60477F658C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_0C5533347437DEBF_OFFSET))(this);
	}

	::System::Void Method_3_F11FC6B94B14A312(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_F11FC6B94B14A312_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_E5C8CCC7A4E8A34F(::MoleMole::Config::InputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_E5C8CCC7A4E8A34F_OFFSET))(this, a1);
	}

	::MoleMole::Config::InputGroup Method_3_3A08507C299C9176(::MoleMole::Config::InputType a1)
	{
		return ((::MoleMole::Config::InputGroup(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_A02943B64FE8EBE5_METHOD_3_3A08507C299C9176_OFFSET))(this, a1);
	}
};
