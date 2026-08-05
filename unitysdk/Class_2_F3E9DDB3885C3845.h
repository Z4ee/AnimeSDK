#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2F4CE9A3C30CD7F4;
class Class_2_8092EF5027021CFC;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_2_F6579EDC26D1BFF1;
class Class_3_B784205B00804B24;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F3E9DDB3885C3845_METHOD_2_0626B8FDDB3CCB92_OFFSET UNITYSDK_OFFSET(0xD8755C0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_14ECFF16606BA3B3_OFFSET UNITYSDK_OFFSET(0xD873610)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_2A3147D844A2A79A_OFFSET UNITYSDK_OFFSET(0xD874B30)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xD8775B0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0xD874040)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0xD8738D0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_48DCA1C9DC4A4F56_OFFSET UNITYSDK_OFFSET(0xD876A30)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_4A841B9557CF92C7_OFFSET UNITYSDK_OFFSET(0xD876560)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_4A958D3D056F27B7_OFFSET UNITYSDK_OFFSET(0xD872DF0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_53A5ADE5DBF5FFC5_OFFSET UNITYSDK_OFFSET(0xD874050)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_63391701C969E92B_OFFSET UNITYSDK_OFFSET(0xD872FD0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_6E10DBA521A04356_1_OFFSET UNITYSDK_OFFSET(0xD870B30)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0xD8704C0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_8869C79A87CD95E9_OFFSET UNITYSDK_OFFSET(0xD871580)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xD876910)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_8F30CF99561AFEA0_OFFSET UNITYSDK_OFFSET(0xD8767E0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_926A6229E864AA95_OFFSET UNITYSDK_OFFSET(0xD870F40)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xD876880)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0xD8703D0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_A752A8EBB0AFCD9C_OFFSET UNITYSDK_OFFSET(0xD876C30)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0xD872DA0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_B1640C6E4A3E6281_OFFSET UNITYSDK_OFFSET(0xD873EF0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_C4DD4CD768DE6AD5_OFFSET UNITYSDK_OFFSET(0xD872EC0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD8769A0)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD877520)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD873B80)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_CEADE86C6485C6CB_OFFSET UNITYSDK_OFFSET(0xD873C10)
#define CLASS_2_F3E9DDB3885C3845_METHOD_2_E4AFA7B408FC48D0_OFFSET UNITYSDK_OFFSET(0xD870970)
#define CLASS_2_F3E9DDB3885C3845__CTOR_OFFSET UNITYSDK_OFFSET(0xD873960)

inline static constexpr unsigned int Class_2_F3E9DDB3885C3845_TypeDefinitionIndex = 43883;

class Class_2_F3E9DDB3885C3845 : public ::Class_1_C836D00248E6EFFE
{
public:
	::Class_3_B784205B00804B24* Field_2_2; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_31CE9F74ED7EF316>* Field_2_0; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x60
	::System::Collections::Generic::SortedList_2<::System::UInt32, ::System::UInt32>* Field_2_7; // 0x68
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* Field_2_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_2_6E10DBA521A04356_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_6E10DBA521A04356_1_OFFSET))(this);
	}

	::System::Void Method_2_926A6229E864AA95(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_926A6229E864AA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A958D3D056F27B7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_4A958D3D056F27B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4DD4CD768DE6AD5(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_C4DD4CD768DE6AD5_OFFSET))(this, a1);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_E4AFA7B408FC48D0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_E4AFA7B408FC48D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_CEADE86C6485C6CB(::Class_3_C93CC3D2C2AC4067* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_CEADE86C6485C6CB_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_B1640C6E4A3E6281(::Class_3_C93CC3D2C2AC4067* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_B1640C6E4A3E6281_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Battle::Entity* Method_2_8869C79A87CD95E9(::UnityEngine::Vector3 a1, ::System::Single a2, ::Class_2_2F4CE9A3C30CD7F4* a3, ::System::Boolean a4, ::Class_2_F3CFF1AFF7EE7DCD* a5)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Class_2_2F4CE9A3C30CD7F4*, ::System::Boolean, ::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_8869C79A87CD95E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_63391701C969E92B(::Class_2_8092EF5027021CFC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_8092EF5027021CFC*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_63391701C969E92B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_8F30CF99561AFEA0(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_8F30CF99561AFEA0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_14ECFF16606BA3B3(::Class_2_F6579EDC26D1BFF1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_14ECFF16606BA3B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_0626B8FDDB3CCB92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_0626B8FDDB3CCB92_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_53A5ADE5DBF5FFC5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_53A5ADE5DBF5FFC5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_48DCA1C9DC4A4F56(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_48DCA1C9DC4A4F56_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A752A8EBB0AFCD9C(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_A752A8EBB0AFCD9C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4A841B9557CF92C7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_4A841B9557CF92C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A3147D844A2A79A(::Class_3_C93CC3D2C2AC4067* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F3E9DDB3885C3845_METHOD_2_2A3147D844A2A79A_OFFSET))(this, a1, a2);
	}
};
