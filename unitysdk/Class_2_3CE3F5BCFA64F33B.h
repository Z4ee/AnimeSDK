#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_1.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_0F138252A5783001;
class Class_2_167BB37617B940E3;
class Class_2_8092EF5027021CFC;
class Class_2_E4A383A32564601B;
class Class_2_EA995402651EF7A9;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_2_F6579EDC26D1BFF1;
class Class_3_B784205B00804B24_1;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_0626B8FDDB3CCB92_OFFSET UNITYSDK_OFFSET(0x12DE2210)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_14C937AA8303DAAD_OFFSET UNITYSDK_OFFSET(0x12DDE680)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_281E8EA4B2E03B65_OFFSET UNITYSDK_OFFSET(0x12DE3E40)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x12DE1CD0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_3386315211B35D05_OFFSET UNITYSDK_OFFSET(0x12DE1840)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x12DE4850)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_4A958D3D056F27B7_OFFSET UNITYSDK_OFFSET(0x12DE0AC0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_63391701C969E92B_OFFSET UNITYSDK_OFFSET(0x12DE0CA0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_667A2BFF451EE388_OFFSET UNITYSDK_OFFSET(0x12DE1A50)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_6E10DBA521A04356_1_OFFSET UNITYSDK_OFFSET(0x12DDE840)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x12DDE1D0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_6FFC5F893DCB5406_OFFSET UNITYSDK_OFFSET(0x12DE31B0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_87B4CEACF44B1D5B_OFFSET UNITYSDK_OFFSET(0x12DDF250)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x12DE4730)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_8F30CF99561AFEA0_OFFSET UNITYSDK_OFFSET(0x12DE3DA0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_926A6229E864AA95_OFFSET UNITYSDK_OFFSET(0x12DDEC50)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x12DE1590)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x12DE47C0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x12DDE0E0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_A53B4C2D65196FE0_OFFSET UNITYSDK_OFFSET(0x12DE12D0)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x12DE0A70)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_B1640C6E4A3E6281_OFFSET UNITYSDK_OFFSET(0x12DE1D60)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_C4DD4CD768DE6AD5_OFFSET UNITYSDK_OFFSET(0x12DE0B90)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12DE3C80)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x12DE3D10)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12DE2180)
#define CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CEADE86C6485C6CB_OFFSET UNITYSDK_OFFSET(0x12DE1EA0)
#define CLASS_2_3CE3F5BCFA64F33B__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE1620)

inline static constexpr unsigned int Class_2_3CE3F5BCFA64F33B_TypeDefinitionIndex = 80331;

class Class_2_3CE3F5BCFA64F33B : public ::Class_1_C836D00248E6EFFE
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_31CE9F74ED7EF316_1>* Field_2_2; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* Field_2_1; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_4; // 0x60
	::Class_3_B784205B00804B24_1* Field_2_0; // 0x68
	::System::Collections::Generic::SortedList_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_2_6E10DBA521A04356_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_6E10DBA521A04356_1_OFFSET))(this);
	}

	::System::Void Method_2_926A6229E864AA95(::Class_2_E4A383A32564601B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E4A383A32564601B*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_926A6229E864AA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A958D3D056F27B7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_4A958D3D056F27B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4DD4CD768DE6AD5(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_C4DD4CD768DE6AD5_OFFSET))(this, a1);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_3386315211B35D05(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_3386315211B35D05_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_B1640C6E4A3E6281(::Class_3_DFD5D1FDB9D2A4AC* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_B1640C6E4A3E6281_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_14C937AA8303DAAD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_14C937AA8303DAAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0626B8FDDB3CCB92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_0626B8FDDB3CCB92_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FFC5F893DCB5406(::Class_3_DFD5D1FDB9D2A4AC* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_6FFC5F893DCB5406_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_8F30CF99561AFEA0(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_8F30CF99561AFEA0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_281E8EA4B2E03B65(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_281E8EA4B2E03B65_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Battle::Entity* Method_2_87B4CEACF44B1D5B(::UnityEngine::Vector3 a1, ::System::Single a2, ::Class_2_E4A383A32564601B* a3, ::System::Boolean a4, ::Class_2_F3CFF1AFF7EE7DCD* a5)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Class_2_E4A383A32564601B*, ::System::Boolean, ::Class_2_F3CFF1AFF7EE7DCD*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_87B4CEACF44B1D5B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_667A2BFF451EE388(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_667A2BFF451EE388_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_63391701C969E92B(::Class_2_8092EF5027021CFC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_8092EF5027021CFC*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_63391701C969E92B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_E4A383A32564601B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E4A383A32564601B*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_CEADE86C6485C6CB(::Class_3_DFD5D1FDB9D2A4AC* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_CEADE86C6485C6CB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_A53B4C2D65196FE0(::Class_2_F6579EDC26D1BFF1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_2_3CE3F5BCFA64F33B_METHOD_2_A53B4C2D65196FE0_OFFSET))(this, a1);
	}
};
