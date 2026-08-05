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

#define CLASS_3_07B9E7F623F2FF6C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13E840B0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_13B61572EF8DDB90_OFFSET UNITYSDK_OFFSET(0x13E84990)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_1406233DB71BFF0A_OFFSET UNITYSDK_OFFSET(0x13E85B40)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_218124418542E081_OFFSET UNITYSDK_OFFSET(0x13E84C50)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_219F1A94B63A8139_OFFSET UNITYSDK_OFFSET(0x13E84BF0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_2DB61051AB430605_OFFSET UNITYSDK_OFFSET(0x13E87DA0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_2F7320AEAEF1B01C_OFFSET UNITYSDK_OFFSET(0x13E86180)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x13E86D00)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_39C3C8989229221B_OFFSET UNITYSDK_OFFSET(0x13E87C40)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_3A08507C299C9176_OFFSET UNITYSDK_OFFSET(0x13E85AF0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13E85360)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x13E85260)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x13E83CC0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0x13E84F70)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_8AD069334F5E0AC7_OFFSET UNITYSDK_OFFSET(0x13E87E20)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_933CEED22A77CAC7_OFFSET UNITYSDK_OFFSET(0x13E87210)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_9F847E6C66FD045A_OFFSET UNITYSDK_OFFSET(0x13E870E0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x13E83AF0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x13E87BF0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_BB4F3E29F39DF610_OFFSET UNITYSDK_OFFSET(0x13E857B0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_BD3B7CB515DC7084_OFFSET UNITYSDK_OFFSET(0x13E87D50)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_C80A89E89CF235A2_OFFSET UNITYSDK_OFFSET(0x13E854B0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_C9AD3F65D2EC0551_OFFSET UNITYSDK_OFFSET(0x13E84540)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13E88220)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_D430F4530A98091D_OFFSET UNITYSDK_OFFSET(0x13E84420)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_DD8F6DED80A6D79E_OFFSET UNITYSDK_OFFSET(0x13E85A20)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_E5C8CCC7A4E8A34F_OFFSET UNITYSDK_OFFSET(0x13E861F0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_E633A443AC0D3A42_OFFSET UNITYSDK_OFFSET(0x13E86580)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_EB77572BBCE0EE44_OFFSET UNITYSDK_OFFSET(0x13E85300)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_EF35140FAFF48EF9_OFFSET UNITYSDK_OFFSET(0x13E854F0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_F11FC6B94B14A312_OFFSET UNITYSDK_OFFSET(0x13E85980)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_F88D2F6C9BDF2E16_OFFSET UNITYSDK_OFFSET(0x13E86FC0)
#define CLASS_3_07B9E7F623F2FF6C_METHOD_3_FFE24DF54B83FB77_OFFSET UNITYSDK_OFFSET(0x13E85D90)
#define CLASS_3_07B9E7F623F2FF6C_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13E83A60)
#define CLASS_3_07B9E7F623F2FF6C_ONSTART_OFFSET UNITYSDK_OFFSET(0x13E83AA0)
#define CLASS_3_07B9E7F623F2FF6C_UPDATE_OFFSET UNITYSDK_OFFSET(0x13E83C60)
#define CLASS_3_07B9E7F623F2FF6C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E84140)

inline static constexpr unsigned int Class_3_07B9E7F623F2FF6C_TypeDefinitionIndex = 72389;

class Class_3_07B9E7F623F2FF6C : public ::Foundation::GameManager_1<::Class_3_07B9E7F623F2FF6C*>
{
public:
	// static const ::System::String* Field_3_8; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputType, ::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_5>*>* Field_3_15; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_11; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::Config::InputGroup>* Field_3_5; // 0x20
	::System::String* Field_3_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_10; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_6>*>* Field_3_9; // 0x40
	::Il2CppArray<::Class_1_DED36D60477F658C*>* Field_3_1; // 0x48
	::System::Boolean Field_3_2; // 0x50
	::System::Boolean Field_3_6; // 0x51
	::System::Boolean Field_3_0; // 0x52
	::System::Boolean Field_3_7; // 0x53

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_ONSTART_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_D430F4530A98091D(::MoleMole::Config::InputType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_D430F4530A98091D_OFFSET))(this, a1);
	}

	::System::Void Method_3_C9AD3F65D2EC0551(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_C9AD3F65D2EC0551_OFFSET))(this, a1);
	}

	::System::Void Method_3_13B61572EF8DDB90(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_13B61572EF8DDB90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_84D2CF41A744CC73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_84D2CF41A744CC73_OFFSET))(this, a1);
	}

	::System::Void Method_3_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_DED36D60477F658C*>* Method_3_C80A89E89CF235A2()
	{
		return ((::Il2CppArray<::Class_1_DED36D60477F658C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_C80A89E89CF235A2_OFFSET))(this);
	}

	::System::Void Method_3_EF35140FAFF48EF9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_EF35140FAFF48EF9_OFFSET))(this, a1);
	}

	::System::Void Method_3_EB77572BBCE0EE44(::System::Int32 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_EB77572BBCE0EE44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BB4F3E29F39DF610(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_BB4F3E29F39DF610_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_DD8F6DED80A6D79E(::System::String* a1, ::MoleMole::Config::InputType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_DD8F6DED80A6D79E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FFE24DF54B83FB77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_FFE24DF54B83FB77_OFFSET))(this, a1);
	}

	::Class_1_DED36D60477F658C* Method_3_2F7320AEAEF1B01C(::MoleMole::Config::InputType a1)
	{
		return ((::Class_1_DED36D60477F658C*(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_2F7320AEAEF1B01C_OFFSET))(this, a1);
	}

	::System::Void Method_3_E5C8CCC7A4E8A34F(::MoleMole::Config::InputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_E5C8CCC7A4E8A34F_OFFSET))(this, a1);
	}

	::System::Void Method_3_E633A443AC0D3A42(::MoleMole::Config::InputGroup a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_E633A443AC0D3A42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_3_9F847E6C66FD045A(::System::String* a1, ::MoleMole::Config::InputType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_9F847E6C66FD045A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Config::InputGroup Method_3_3A08507C299C9176(::MoleMole::Config::InputType a1)
	{
		return ((::MoleMole::Config::InputGroup(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_3A08507C299C9176_OFFSET))(this, a1);
	}

	::System::Void Method_3_F11FC6B94B14A312(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_F11FC6B94B14A312_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Boolean Method_3_219F1A94B63A8139(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_219F1A94B63A8139_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_3_39C3C8989229221B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_39C3C8989229221B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD3B7CB515DC7084(::Il2CppArray<::Class_1_DED36D60477F658C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DED36D60477F658C*>*))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_BD3B7CB515DC7084_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_2DB61051AB430605(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_2DB61051AB430605_OFFSET))(this, a1);
	}

	::System::Void Method_3_1406233DB71BFF0A(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_1406233DB71BFF0A_OFFSET))(this, a1);
	}

	::System::Void Method_3_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_3_8AD069334F5E0AC7(::MoleMole::Config::InputType a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_8AD069334F5E0AC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F88D2F6C9BDF2E16(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_F88D2F6C9BDF2E16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_933CEED22A77CAC7(::System::String* a1, ::MoleMole::Config::InputGroup a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::UInt32 a6, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputGroup, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>*))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_933CEED22A77CAC7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B9E7F623F2FF6C_METHOD_3_218124418542E081_OFFSET))(this);
	}
};
