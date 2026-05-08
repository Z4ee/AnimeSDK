#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_989A6D192437423E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPageCamera; }
namespace MoleMole::Config { class ConfigUICameraStretch; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E16AAB011063882E_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xEFF5500)
#define CLASS_1_E16AAB011063882E_METHOD_1_08C5265FFA615F64_OFFSET UNITYSDK_OFFSET(0xEFF3B10)
#define CLASS_1_E16AAB011063882E_METHOD_1_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0xEFF5D70)
#define CLASS_1_E16AAB011063882E_METHOD_1_189C865264480324_OFFSET UNITYSDK_OFFSET(0xEFF49D0)
#define CLASS_1_E16AAB011063882E_METHOD_1_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0xEFF5BC0)
#define CLASS_1_E16AAB011063882E_METHOD_1_3261ACC0A77DB356_OFFSET UNITYSDK_OFFSET(0xEFF4020)
#define CLASS_1_E16AAB011063882E_METHOD_1_368E9DBFB1C31641_OFFSET UNITYSDK_OFFSET(0xEFF44A0)
#define CLASS_1_E16AAB011063882E_METHOD_1_397374046D61F348_OFFSET UNITYSDK_OFFSET(0xEFF45E0)
#define CLASS_1_E16AAB011063882E_METHOD_1_3AE2D05F86AD3482_OFFSET UNITYSDK_OFFSET(0xEFF48E0)
#define CLASS_1_E16AAB011063882E_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xEFF5FD0)
#define CLASS_1_E16AAB011063882E_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0xEFF4720)
#define CLASS_1_E16AAB011063882E_METHOD_1_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0xEFF4BF0)
#define CLASS_1_E16AAB011063882E_METHOD_1_5999C0A31182E676_OFFSET UNITYSDK_OFFSET(0xEFF5040)
#define CLASS_1_E16AAB011063882E_METHOD_1_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0xEFF3960)
#define CLASS_1_E16AAB011063882E_METHOD_1_71F22CAF6FED41FA_OFFSET UNITYSDK_OFFSET(0xEFF50C0)
#define CLASS_1_E16AAB011063882E_METHOD_1_8FDEF3B765067D41_OFFSET UNITYSDK_OFFSET(0xEFF3BA0)
#define CLASS_1_E16AAB011063882E_METHOD_1_963A1C53DC95800B_1_OFFSET UNITYSDK_OFFSET(0xEFF59B0)
#define CLASS_1_E16AAB011063882E_METHOD_1_963A1C53DC95800B_OFFSET UNITYSDK_OFFSET(0xEFF2F40)
#define CLASS_1_E16AAB011063882E_METHOD_1_A1BD06E062DB0D24_OFFSET UNITYSDK_OFFSET(0xEFF32F0)
#define CLASS_1_E16AAB011063882E_METHOD_1_A3BBE4D24F1C2B1F_OFFSET UNITYSDK_OFFSET(0xEFF36E0)
#define CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xEFF32E0)
#define CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xEFF5780)
#define CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0xEFF5D60)
#define CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xEFF32D0)
#define CLASS_1_E16AAB011063882E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xEFF5690)
#define CLASS_1_E16AAB011063882E_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xEFF5790)
#define CLASS_1_E16AAB011063882E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEFF4890)
#define CLASS_1_E16AAB011063882E_METHOD_1_D24C4294507BECB4_OFFSET UNITYSDK_OFFSET(0xEFF5870)
#define CLASS_1_E16AAB011063882E_METHOD_1_D91156C8F43A4C56_OFFSET UNITYSDK_OFFSET(0xEFF56D0)
#define CLASS_1_E16AAB011063882E_METHOD_1_E48E9BAF92F39881_OFFSET UNITYSDK_OFFSET(0xEFF4AA0)
#define CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xEFF4710)
#define CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xEFF4A90)
#define CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xEFF5FC0)
#define CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xEFF32C0)
#define CLASS_1_E16AAB011063882E_METHOD_1_F011550615816B89_OFFSET UNITYSDK_OFFSET(0xEFF5560)
#define CLASS_1_E16AAB011063882E_METHOD_1_F434636093AEB743_OFFSET UNITYSDK_OFFSET(0xEFF3150)
#define CLASS_1_E16AAB011063882E__CTOR_OFFSET UNITYSDK_OFFSET(0xEFF2B70)

inline static constexpr unsigned int Class_1_E16AAB011063882E_TypeDefinitionIndex = 58357;

class Class_1_E16AAB011063882E : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPageCamera* Field_1_10; // 0x10
	::System::Action_1<::System::Single>* Field_1_8; // 0x18
	::System::Action* Field_1_26; // 0x20
	::System::Action* Field_1_25; // 0x28
	::System::Action* Field_1_36; // 0x30
	::System::Action* Field_1_13; // 0x38
	::MoleMole::Config::ConfigUICameraStretch* Field_1_11; // 0x40
	::UnityEngine::Transform* Field_1_5; // 0x48
	::UnityEngine::Camera* Field_1_9; // 0x50
	::UnityEngine::Vector3 Field_1_6; // 0x58
	::UnityEngine::Vector3 Field_1_17; // 0x64
	::System::Boolean Field_1_3; // 0x70
	::System::Boolean Field_1_1; // 0x71
	::System::Boolean Field_1_34; // 0x72
	::System::Single Field_1_31; // 0x74
	::System::Single Field_1_35; // 0x78
	::System::Single Field_1_28; // 0x7C
	::Struct_2_989A6D192437423E Field_1_4; // 0x80
	::System::Single Field_1_24; // 0xC8
	::System::Single Field_1_32; // 0xCC
	::System::Single Field_1_29; // 0xD0
	::UnityEngine::Vector3 Field_1_7; // 0xD4
	::UnityEngine::Vector3 Field_1_16; // 0xE0
	::UnityEngine::Vector3 Field_1_18; // 0xEC
	::System::Single Field_1_20; // 0xF8
	::System::Single Field_1_12; // 0xFC
	::System::Single Field_1_30; // 0x100
	::UnityEngine::Vector3 Field_1_33; // 0x104
	::UnityEngine::Vector3 Field_1_22; // 0x110
	::System::Boolean Field_1_0; // 0x11C
	::System::Boolean Field_1_27; // 0x11D
	::System::Boolean Field_1_2; // 0x11E
	::System::Boolean Field_1_14; // 0x11F
	::System::Single Field_1_15; // 0x120
	::System::Single Field_1_23; // 0x124
	::UnityEngine::Vector3 Field_1_19; // 0x128
	::System::Single Field_1_21; // 0x134

	::System::Void _ctor(::UnityEngine::Camera* a1, ::MoleMole::Config::ConfigPageCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::MoleMole::Config::ConfigPageCamera*))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_963A1C53DC95800B(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_963A1C53DC95800B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_A1BD06E062DB0D24(::UnityEngine::Vector3 a1, ::System::Action* a2, ::System::Action_1<::System::Single>* a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_A1BD06E062DB0D24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F434636093AEB743(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_F434636093AEB743_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_682FA2F0C959D8A1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_682FA2F0C959D8A1_OFFSET))(this);
	}

	::System::Void Method_1_08C5265FFA615F64(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_08C5265FFA615F64_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3BBE4D24F1C2B1F(::Struct_2_989A6D192437423E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_989A6D192437423E))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_A3BBE4D24F1C2B1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_397374046D61F348(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_397374046D61F348_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3AE2D05F86AD3482(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_3AE2D05F86AD3482_OFFSET))(this, a1);
	}

	::System::Void Method_1_189C865264480324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_189C865264480324_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_E48E9BAF92F39881(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_E48E9BAF92F39881_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8FDEF3B765067D41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_8FDEF3B765067D41_OFFSET))(this, a1);
	}

	::System::Void Method_1_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_71F22CAF6FED41FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_71F22CAF6FED41FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_3261ACC0A77DB356(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_3261ACC0A77DB356_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_F011550615816B89(::System::Action* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_F011550615816B89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5999C0A31182E676(::Struct_2_989A6D192437423E& a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_989A6D192437423E&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_5999C0A31182E676_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_D91156C8F43A4C56(::Struct_2_989A6D192437423E& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_989A6D192437423E&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_D91156C8F43A4C56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_368E9DBFB1C31641(::Struct_2_989A6D192437423E& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_989A6D192437423E&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_368E9DBFB1C31641_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_D24C4294507BECB4(::Struct_2_989A6D192437423E& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_989A6D192437423E&))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_D24C4294507BECB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_963A1C53DC95800B_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_963A1C53DC95800B_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_19F951B38D2C86E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_19F951B38D2C86E3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AD139A96804E15E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_0AD139A96804E15E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E16AAB011063882E_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
