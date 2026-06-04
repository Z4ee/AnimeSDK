#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_209;
class Class_1_0EA099C7D681B6D6;
class Class_1_43BD383C98B4C0C5_95;
class Class_1_43BD383C98B4C0C5_96;
class Class_1_5BE136E515AF9A61_1;
class Class_1_6DE8726ADEF173A7_5;
class Class_1_83665B095F1535B5_13;
class Class_1_83665B095F1535B5_14;
class Class_1_B2291C9F4421FAE0;
class Class_1_E0231B607CD65186_6;
class Class_2_037EA204E69EBC75;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_1_OFFSET UNITYSDK_OFFSET(0x18D61AC0)
#define CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_OFFSET UNITYSDK_OFFSET(0x18D61390)
#define CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_1_OFFSET UNITYSDK_OFFSET(0x18D61310)
#define CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_2_OFFSET UNITYSDK_OFFSET(0x18D34D10)
#define CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_3_OFFSET UNITYSDK_OFFSET(0x18D61A40)
#define CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_4_OFFSET UNITYSDK_OFFSET(0x18D40440)
#define CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x18D60A70)
#define CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x18D62700)
#define CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_2_OFFSET UNITYSDK_OFFSET(0x18D627E0)
#define CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x18D62620)
#define CLASS_2_CC109BC117037E72_METHOD_2_3B360169B5FE0FA1_1_OFFSET UNITYSDK_OFFSET(0x18D61BD0)
#define CLASS_2_CC109BC117037E72_METHOD_2_3B360169B5FE0FA1_OFFSET UNITYSDK_OFFSET(0x18D614A0)
#define CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x18D61510)
#define CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0x18D619E0)
#define CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_3_OFFSET UNITYSDK_OFFSET(0x18D61C40)
#define CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_4_OFFSET UNITYSDK_OFFSET(0x18D625A0)
#define CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x18D612B0)
#define CLASS_2_CC109BC117037E72_METHOD_2_4EB596AAB49EA53D_OFFSET UNITYSDK_OFFSET(0x18D620E0)
#define CLASS_2_CC109BC117037E72_METHOD_2_504C4F5E132A8FA6_OFFSET UNITYSDK_OFFSET(0x18D61670)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_1_OFFSET UNITYSDK_OFFSET(0x18D5A230)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_2_OFFSET UNITYSDK_OFFSET(0x18D61570)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_3_OFFSET UNITYSDK_OFFSET(0x18D46A20)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_4_OFFSET UNITYSDK_OFFSET(0x18D591B0)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_5_OFFSET UNITYSDK_OFFSET(0x18D40360)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_6_OFFSET UNITYSDK_OFFSET(0x18D459F0)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_7_OFFSET UNITYSDK_OFFSET(0x18D408D0)
#define CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_OFFSET UNITYSDK_OFFSET(0x18D61020)
#define CLASS_2_CC109BC117037E72_METHOD_2_7CDB06A5A53EE3C9_OFFSET UNITYSDK_OFFSET(0x18D61230)
#define CLASS_2_CC109BC117037E72_METHOD_2_8B6F7312CC5BADA1_OFFSET UNITYSDK_OFFSET(0x18D61860)
#define CLASS_2_CC109BC117037E72_METHOD_2_E2A4A5B8A0477758_OFFSET UNITYSDK_OFFSET(0x18D61CC0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x18D61370)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x18D61650)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x18D61AA0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x18D61CA0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x18D62600)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x18D626E0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x18D627C0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18D61100)
#define CLASS_2_CC109BC117037E72_METHOD_2_FF028C31884BFA3B_OFFSET UNITYSDK_OFFSET(0x18D61120)
#define CLASS_2_CC109BC117037E72__CTOR_OFFSET UNITYSDK_OFFSET(0x18D364F0)

inline static constexpr unsigned int Class_2_CC109BC117037E72_TypeDefinitionIndex = 39130;

class Class_2_CC109BC117037E72 : public ::Entitas::Context_1<::Class_2_037EA204E69EBC75*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72__CTOR_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_6* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_E0231B607CD65186_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_FF028C31884BFA3B(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>* a1, ::System::Collections::Generic::List_1<::Class_1_B2291C9F4421FAE0*>* a2)
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>*, ::System::Collections::Generic::List_1<::Class_1_B2291C9F4421FAE0*>*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_FF028C31884BFA3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7CDB06A5A53EE3C9(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>* a1, ::System::Collections::Generic::List_1<::Class_1_B2291C9F4421FAE0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>*, ::System::Collections::Generic::List_1<::Class_1_B2291C9F4421FAE0*>*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_7CDB06A5A53EE3C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423_1()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_1_OFFSET))(this);
	}

	::Class_1_83665B095F1535B5_13* Method_2_1561BFA77991A03A_1()
	{
		return ((::Class_1_83665B095F1535B5_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_02FEC85D170BFFFD(::System::Boolean a1)
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B360169B5FE0FA1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_3B360169B5FE0FA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_1_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423_2()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_2_OFFSET))(this);
	}

	::Class_1_6DE8726ADEF173A7_5* Method_2_1561BFA77991A03A_2()
	{
		return ((::Class_1_6DE8726ADEF173A7_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_504C4F5E132A8FA6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_504C4F5E132A8FA6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_8B6F7312CC5BADA1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_8B6F7312CC5BADA1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_2_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423_3()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_3_OFFSET))(this);
	}

	::Class_1_83665B095F1535B5_14* Method_2_1561BFA77991A03A_3()
	{
		return ((::Class_1_83665B095F1535B5_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_3_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_02FEC85D170BFFFD_1(::System::Boolean a1)
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B360169B5FE0FA1_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_3B360169B5FE0FA1_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_455E250D679F9642_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_3_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423_4()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_4_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_95* Method_2_1561BFA77991A03A_4()
	{
		return ((::Class_1_43BD383C98B4C0C5_95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1561BFA77991A03A_4_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_E2A4A5B8A0477758(::RPG::Client::LittleGame::TRFPhase a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_037EA204E69EBC75*>* a4, ::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>* a5, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>* a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::Class_0_16E4307DCC419505_209* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::System::Single a17, ::System::Boolean a18, ::System::String* a19, ::System::Boolean a20, ::System::Boolean a21, ::System::Boolean a22, ::Class_1_43BD383C98B4C0C5_96* a23)
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID, ::RPG::Client::LittleGame::TRFPhase, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_037EA204E69EBC75*>*, ::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>*, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_209*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Class_1_43BD383C98B4C0C5_96*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_E2A4A5B8A0477758_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
	}

	::System::Void Method_2_4EB596AAB49EA53D(::RPG::Client::LittleGame::TRFPhase a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_037EA204E69EBC75*>* a4, ::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>* a5, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>* a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::Class_0_16E4307DCC419505_209* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::System::Single a17, ::System::Boolean a18, ::System::String* a19, ::System::Boolean a20, ::System::Boolean a21, ::System::Boolean a22, ::Class_1_43BD383C98B4C0C5_96* a23)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFPhase, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_037EA204E69EBC75*>*, ::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>*, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_209*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Class_1_43BD383C98B4C0C5_96*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_4EB596AAB49EA53D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
	}

	::System::Void Method_2_455E250D679F9642_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_455E250D679F9642_4_OFFSET))(this);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423_5()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_5_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423_6()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_6_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::Class_2_037EA204E69EBC75* Method_2_673DE15674E18423_7()
	{
		return ((::Class_2_037EA204E69EBC75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_673DE15674E18423_7_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_2_OFFSET))(this, a1);
	}
};
