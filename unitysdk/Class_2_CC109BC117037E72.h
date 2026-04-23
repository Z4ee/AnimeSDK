#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_199;
class Class_1_05049EC44BA8980C;
class Class_1_0EA099C7D681B6D6;
class Class_1_43BD383C98B4C0C5_86;
class Class_1_43BD383C98B4C0C5_87;
class Class_1_5BE136E515AF9A61_1;
class Class_1_6DE8726ADEF173A7_5;
class Class_1_83665B095F1535B5_13;
class Class_1_83665B095F1535B5_14;
class Class_1_E0231B607CD65186_6;
class Class_2_E1DC3D0DDD796244;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_1_OFFSET UNITYSDK_OFFSET(0x17FBE320)
#define CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_OFFSET UNITYSDK_OFFSET(0x17FBD5E0)
#define CLASS_2_CC109BC117037E72_METHOD_2_1234F4047BF0EEAD_OFFSET UNITYSDK_OFFSET(0x17FBD360)
#define CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x17FBFAC0)
#define CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_2_OFFSET UNITYSDK_OFFSET(0x17FBFBA0)
#define CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x17FBF8C0)
#define CLASS_2_CC109BC117037E72_METHOD_2_4EB596AAB49EA53D_OFFSET UNITYSDK_OFFSET(0x17FBEEF0)
#define CLASS_2_CC109BC117037E72_METHOD_2_504C4F5E132A8FA6_OFFSET UNITYSDK_OFFSET(0x17FBD960)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_1_OFFSET UNITYSDK_OFFSET(0x17FBD440)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_2_OFFSET UNITYSDK_OFFSET(0x17FBD7C0)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_3_OFFSET UNITYSDK_OFFSET(0x17FBE180)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_4_OFFSET UNITYSDK_OFFSET(0x17FBE500)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_5_OFFSET UNITYSDK_OFFSET(0x17F98EA0)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_6_OFFSET UNITYSDK_OFFSET(0x17FBF980)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_7_OFFSET UNITYSDK_OFFSET(0x17F99660)
#define CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_OFFSET UNITYSDK_OFFSET(0x17FBCF40)
#define CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_1_OFFSET UNITYSDK_OFFSET(0x17FBD760)
#define CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_2_OFFSET UNITYSDK_OFFSET(0x17FBE120)
#define CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_3_OFFSET UNITYSDK_OFFSET(0x17FBE4A0)
#define CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_4_OFFSET UNITYSDK_OFFSET(0x17FBF840)
#define CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_OFFSET UNITYSDK_OFFSET(0x17FBD3E0)
#define CLASS_2_CC109BC117037E72_METHOD_2_8B6F7312CC5BADA1_OFFSET UNITYSDK_OFFSET(0x17FBDD80)
#define CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_1_OFFSET UNITYSDK_OFFSET(0x17FBD560)
#define CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_2_OFFSET UNITYSDK_OFFSET(0x17FBD8E0)
#define CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_3_OFFSET UNITYSDK_OFFSET(0x17FBE2A0)
#define CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_4_OFFSET UNITYSDK_OFFSET(0x17F98FC0)
#define CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x17FBD060)
#define CLASS_2_CC109BC117037E72_METHOD_2_E2A4A5B8A0477758_OFFSET UNITYSDK_OFFSET(0x17FBE640)
#define CLASS_2_CC109BC117037E72_METHOD_2_EA3E6149A827C9F5_1_OFFSET UNITYSDK_OFFSET(0x17FBE430)
#define CLASS_2_CC109BC117037E72_METHOD_2_EA3E6149A827C9F5_OFFSET UNITYSDK_OFFSET(0x17FBD6F0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17FBD5C0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x17FBD940)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x17FBE300)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x17FBE620)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x17FBF8A0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x17FBFAA0)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x17FBFB80)
#define CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FBD0C0)
#define CLASS_2_CC109BC117037E72_METHOD_2_FF028C31884BFA3B_OFFSET UNITYSDK_OFFSET(0x17FBD0E0)
#define CLASS_2_CC109BC117037E72__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBFC60)

inline static constexpr unsigned int Class_2_CC109BC117037E72_TypeDefinitionIndex = 38363;

class Class_2_CC109BC117037E72 : public ::Entitas::Context_1<::Class_2_E1DC3D0DDD796244*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72__CTOR_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_6* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_E0231B607CD65186_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_FF028C31884BFA3B(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>* a1, ::System::Collections::Generic::List_1<::Class_1_05049EC44BA8980C*>* a2)
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>*, ::System::Collections::Generic::List_1<::Class_1_05049EC44BA8980C*>*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_FF028C31884BFA3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1234F4047BF0EEAD(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>* a1, ::System::Collections::Generic::List_1<::Class_1_05049EC44BA8980C*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61_1*>*, ::System::Collections::Generic::List_1<::Class_1_05049EC44BA8980C*>*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1234F4047BF0EEAD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7183C790EA8096D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE_1()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_1_OFFSET))(this);
	}

	::Class_1_83665B095F1535B5_13* Method_2_E14A7FCF78650419_1()
	{
		return ((::Class_1_83665B095F1535B5_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_02FEC85D170BFFFD(::System::Boolean a1)
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA3E6149A827C9F5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_EA3E6149A827C9F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7183C790EA8096D2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_1_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE_2()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_2_OFFSET))(this);
	}

	::Class_1_6DE8726ADEF173A7_5* Method_2_E14A7FCF78650419_2()
	{
		return ((::Class_1_6DE8726ADEF173A7_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_504C4F5E132A8FA6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_504C4F5E132A8FA6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_8B6F7312CC5BADA1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_8B6F7312CC5BADA1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7183C790EA8096D2_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_2_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE_3()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_3_OFFSET))(this);
	}

	::Class_1_83665B095F1535B5_14* Method_2_E14A7FCF78650419_3()
	{
		return ((::Class_1_83665B095F1535B5_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_3_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_02FEC85D170BFFFD_1(::System::Boolean a1)
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_02FEC85D170BFFFD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA3E6149A827C9F5_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_EA3E6149A827C9F5_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7183C790EA8096D2_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_3_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE_4()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_4_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_86* Method_2_E14A7FCF78650419_4()
	{
		return ((::Class_1_43BD383C98B4C0C5_86*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_E14A7FCF78650419_4_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_E2A4A5B8A0477758(::RPG::Client::LittleGame::TRFPhase a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E1DC3D0DDD796244*>* a4, ::System::Collections::Generic::List_1<::Class_2_E1DC3D0DDD796244*>* a5, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>* a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::Class_0_16E4307DCC419505_199* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::System::Single a17, ::System::Boolean a18, ::System::String* a19, ::System::Boolean a20, ::System::Boolean a21, ::System::Boolean a22, ::Class_1_43BD383C98B4C0C5_87* a23)
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID, ::RPG::Client::LittleGame::TRFPhase, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E1DC3D0DDD796244*>*, ::System::Collections::Generic::List_1<::Class_2_E1DC3D0DDD796244*>*, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_199*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Class_1_43BD383C98B4C0C5_87*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_E2A4A5B8A0477758_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
	}

	::System::Void Method_2_4EB596AAB49EA53D(::RPG::Client::LittleGame::TRFPhase a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E1DC3D0DDD796244*>* a4, ::System::Collections::Generic::List_1<::Class_2_E1DC3D0DDD796244*>* a5, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>* a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::Class_0_16E4307DCC419505_199* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::System::Single a17, ::System::Boolean a18, ::System::String* a19, ::System::Boolean a20, ::System::Boolean a21, ::System::Boolean a22, ::Class_1_43BD383C98B4C0C5_87* a23)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFPhase, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E1DC3D0DDD796244*>*, ::System::Collections::Generic::List_1<::Class_2_E1DC3D0DDD796244*>*, ::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_199*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Class_1_43BD383C98B4C0C5_87*))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_4EB596AAB49EA53D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
	}

	::System::Void Method_2_7183C790EA8096D2_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_7183C790EA8096D2_4_OFFSET))(this);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE_5()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_5_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE_6()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_6_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::Class_2_E1DC3D0DDD796244* Method_2_58EA5F4E77C0F4AE_7()
	{
		return ((::Class_2_E1DC3D0DDD796244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC109BC117037E72_METHOD_2_58EA5F4E77C0F4AE_7_OFFSET))(this);
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
