#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/Struct_2_5887222B9AE38D34.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_5.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_DED36D60477F658C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1D4CB7B6F9A8FF01_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF3D890)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_13B61572EF8DDB90_OFFSET UNITYSDK_OFFSET(0x1BF412A0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1BF3FED0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_219F1A94B63A8139_OFFSET UNITYSDK_OFFSET(0x1BF406C0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_2DB61051AB430605_OFFSET UNITYSDK_OFFSET(0x1BF40320)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_2F7320AEAEF1B01C_OFFSET UNITYSDK_OFFSET(0x1BF403A0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1BF40DF0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_39C3C8989229221B_OFFSET UNITYSDK_OFFSET(0x1BF3FDC0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_3A08507C299C9176_OFFSET UNITYSDK_OFFSET(0x1BF3E2C0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1BF410B0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x1BF3D2D0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_607EDCE411323F3E_OFFSET UNITYSDK_OFFSET(0x1BF40720)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_6179BAEB29E46041_OFFSET UNITYSDK_OFFSET(0x1BF3DD80)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1BF3DE10)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x1BF41200)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x1BF3D4A0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_7EF15A5377752227_OFFSET UNITYSDK_OFFSET(0x1BF3DDD0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0x1BF40B00)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_933CEED22A77CAC7_OFFSET UNITYSDK_OFFSET(0x1BF3F0C0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_9F847E6C66FD045A_OFFSET UNITYSDK_OFFSET(0x1BF401F0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_BB4F3E29F39DF610_OFFSET UNITYSDK_OFFSET(0x1BF40450)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_C751D8659C0191AB_OFFSET UNITYSDK_OFFSET(0x1BF3E310)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BF40410)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_D430F4530A98091D_OFFSET UNITYSDK_OFFSET(0x1BF3FCA0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_DD8F6DED80A6D79E_OFFSET UNITYSDK_OFFSET(0x1BF3E1F0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_E5C8CCC7A4E8A34F_OFFSET UNITYSDK_OFFSET(0x1BF3DE60)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_E633A443AC0D3A42_OFFSET UNITYSDK_OFFSET(0x1BF3E560)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_EB77572BBCE0EE44_OFFSET UNITYSDK_OFFSET(0x1BF3DC00)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_EF35140FAFF48EF9_OFFSET UNITYSDK_OFFSET(0x1BF3F9F0)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_F11FC6B94B14A312_OFFSET UNITYSDK_OFFSET(0x1BF40620)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_F55DD6625EA390A2_OFFSET UNITYSDK_OFFSET(0x1BF3EC70)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_F88D2F6C9BDF2E16_OFFSET UNITYSDK_OFFSET(0x1BF3DC60)
#define CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_FFE24DF54B83FB77_OFFSET UNITYSDK_OFFSET(0x1BF41500)
#define CLASS_3_1D4CB7B6F9A8FF01_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1BF3D240)
#define CLASS_3_1D4CB7B6F9A8FF01_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BF3D280)
#define CLASS_3_1D4CB7B6F9A8FF01_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BF3D440)
#define CLASS_3_1D4CB7B6F9A8FF01__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3D920)

inline static constexpr unsigned int Class_3_1D4CB7B6F9A8FF01_TypeDefinitionIndex = 56747;

class Class_3_1D4CB7B6F9A8FF01 : public ::Foundation::GameManager_1<::Class_3_1D4CB7B6F9A8FF01*>
{
public:
	// static const ::System::String* Field_3_11; // 0x0
	::System::Collections::Generic::HashSet_1<::MoleMole::Config::InputGroup>* Field_3_6; // 0x10
	::Il2CppArray<::Class_1_DED36D60477F658C*>* Field_3_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputType, ::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34>*>* Field_3_12; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_7; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_5>*>* Field_3_10; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_9; // 0x40
	::System::String* Field_3_0; // 0x48
	::System::Boolean Field_3_4; // 0x50
	::System::Boolean Field_3_1; // 0x51
	::System::Boolean Field_3_5; // 0x52
	::System::Boolean Field_3_3; // 0x53

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_ONSTART_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_EB77572BBCE0EE44(::System::Int32 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_EB77572BBCE0EE44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F88D2F6C9BDF2E16(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_F88D2F6C9BDF2E16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6179BAEB29E46041(::Il2CppArray<::Class_1_DED36D60477F658C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DED36D60477F658C*>*))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_6179BAEB29E46041_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_DED36D60477F658C*>* Method_3_7EF15A5377752227()
	{
		return ((::Il2CppArray<::Class_1_DED36D60477F658C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_7EF15A5377752227_OFFSET))(this);
	}

	::System::Void Method_3_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_3_E5C8CCC7A4E8A34F(::MoleMole::Config::InputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_E5C8CCC7A4E8A34F_OFFSET))(this, a1);
	}

	::System::Void Method_3_DD8F6DED80A6D79E(::System::String* a1, ::MoleMole::Config::InputType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_DD8F6DED80A6D79E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E633A443AC0D3A42(::MoleMole::Config::InputGroup a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_E633A443AC0D3A42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F55DD6625EA390A2(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_F55DD6625EA390A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_933CEED22A77CAC7(::System::String* a1, ::MoleMole::Config::InputGroup a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::UInt32 a6, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputGroup, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>*))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_933CEED22A77CAC7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_EF35140FAFF48EF9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_EF35140FAFF48EF9_OFFSET))(this, a1);
	}

	::System::Void Method_3_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Boolean Method_3_D430F4530A98091D(::MoleMole::Config::InputType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_D430F4530A98091D_OFFSET))(this, a1);
	}

	::System::Void Method_3_39C3C8989229221B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_39C3C8989229221B_OFFSET))(this, a1);
	}

	::System::Void Method_3_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_3_9F847E6C66FD045A(::System::String* a1, ::MoleMole::Config::InputType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_9F847E6C66FD045A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_3_2DB61051AB430605(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_2DB61051AB430605_OFFSET))(this, a1);
	}

	::Class_1_DED36D60477F658C* Method_3_2F7320AEAEF1B01C(::MoleMole::Config::InputType a1)
	{
		return ((::Class_1_DED36D60477F658C*(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_2F7320AEAEF1B01C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BB4F3E29F39DF610(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_BB4F3E29F39DF610_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_3_219F1A94B63A8139(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_219F1A94B63A8139_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_607EDCE411323F3E(::MoleMole::Config::InputType a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_607EDCE411323F3E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C751D8659C0191AB(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_C751D8659C0191AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_84D2CF41A744CC73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_84D2CF41A744CC73_OFFSET))(this, a1);
	}

	::System::Void Method_3_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_3_F11FC6B94B14A312(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_F11FC6B94B14A312_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_3_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_13B61572EF8DDB90(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_13B61572EF8DDB90_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::InputGroup Method_3_3A08507C299C9176(::MoleMole::Config::InputType a1)
	{
		return ((::MoleMole::Config::InputGroup(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_3A08507C299C9176_OFFSET))(this, a1);
	}

	::System::Void Method_3_FFE24DF54B83FB77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1D4CB7B6F9A8FF01_METHOD_3_FFE24DF54B83FB77_OFFSET))(this, a1);
	}
};
