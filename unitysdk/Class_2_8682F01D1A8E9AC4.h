#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/Enum_3_01BE6AEDF4C525EC.h"
#include "unitysdk/Enum_3_2C81EAA18CFA0091.h"
#include "unitysdk/Enum_3_7BE7A0D08355D16D.h"
#include "unitysdk/Enum_3_B3E208AA3A944E42.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7637CFF22586878;
class Class_1_B7E341C5F1A6F199;
class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2F4CE9A3C30CD7F4;
class Class_2_4DB226BA3393390B;
class Class_3_707412604A129938;
class Class_3_B784205B00804B24_1;
class Class_3_CF26687E59A2AD49;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_00D57AE9ACEB1094_OFFSET UNITYSDK_OFFSET(0x13B098B0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_06975104FD75A14B_OFFSET UNITYSDK_OFFSET(0x13B06850)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_073C222069DD8502_OFFSET UNITYSDK_OFFSET(0x13B03480)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13B08AA0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x13B03CE0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_1A206FFA5EED1202_OFFSET UNITYSDK_OFFSET(0x13B09850)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_1B2B365114FA5289_OFFSET UNITYSDK_OFFSET(0x13B0A080)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13B09520)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x13B05160)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13B08A00)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_297CA11B14A9D499_OFFSET UNITYSDK_OFFSET(0x13B06A90)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x13B09730)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x13B04DA0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x13B09360)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x13B08120)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_385AA2E42A1A69EE_OFFSET UNITYSDK_OFFSET(0x13B03F80)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_4D75C32E324F70EA_OFFSET UNITYSDK_OFFSET(0x13B0CB60)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x13B09420)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_59D7DBD75B9EF7D2_OFFSET UNITYSDK_OFFSET(0x13B0AAD0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_633215D849B5096F_OFFSET UNITYSDK_OFFSET(0x13B04150)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_63391701C969E92B_OFFSET UNITYSDK_OFFSET(0x13B057F0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x13B038D0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_70050655D78BF3E8_OFFSET UNITYSDK_OFFSET(0x13B09C00)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_7D38146965857770_OFFSET UNITYSDK_OFFSET(0x13B04860)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_7FF33CDCBE9E821E_OFFSET UNITYSDK_OFFSET(0x13B07E50)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x13B08970)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_912DDD551220EEB0_OFFSET UNITYSDK_OFFSET(0x13B09580)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_9354D6FEDD28E66B_OFFSET UNITYSDK_OFFSET(0x13B0A1E0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x13B0A9B0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_9A52E8056B12A8AD_OFFSET UNITYSDK_OFFSET(0x13B08300)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x13B052E0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_A63C0AEBD2055D40_OFFSET UNITYSDK_OFFSET(0x13B0AE70)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x13B09ED0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_AAFF535392E27F32_OFFSET UNITYSDK_OFFSET(0x13B04A70)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_BF41BD9D94757083_OFFSET UNITYSDK_OFFSET(0x13B041D0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_C3A527740D5A99C7_OFFSET UNITYSDK_OFFSET(0x13B04390)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13B09E40)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x13B09FF0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x13B0AA40)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13B097C0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x13B04960)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_D1788DAA3A03D3D6_OFFSET UNITYSDK_OFFSET(0x13B06B00)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_DE58498F3B2634B7_OFFSET UNITYSDK_OFFSET(0x13B08DA0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_DE818692D9E885FB_OFFSET UNITYSDK_OFFSET(0x13B09370)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_E18C8D3F90D814C3_OFFSET UNITYSDK_OFFSET(0x13B03710)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_E77ECCE0C35CFCDB_OFFSET UNITYSDK_OFFSET(0x13B04DF0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_F2141DA88E673709_OFFSET UNITYSDK_OFFSET(0x13B050B0)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_F34DF28FFAAFA483_OFFSET UNITYSDK_OFFSET(0x13B0C830)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_F4FDA15C28A64059_OFFSET UNITYSDK_OFFSET(0x13B05100)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_FB972B09AE563CF5_1_OFFSET UNITYSDK_OFFSET(0x13B08B10)
#define CLASS_2_8682F01D1A8E9AC4_METHOD_2_FB972B09AE563CF5_OFFSET UNITYSDK_OFFSET(0x13B086D0)
#define CLASS_2_8682F01D1A8E9AC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B082F0)
#define CLASS_2_8682F01D1A8E9AC4__CTOR_OFFSET UNITYSDK_OFFSET(0x13B081B0)

inline static constexpr unsigned int Class_2_8682F01D1A8E9AC4_TypeDefinitionIndex = 49133;

class Class_2_8682F01D1A8E9AC4 : public ::Class_1_C836D00248E6EFFE
{
public:
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8682F01D1A8E9AC4_TypeDefinitionIndex)->GetStaticField(0xC880);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8682F01D1A8E9AC4_TypeDefinitionIndex)->GetStaticField(0xC881);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8682F01D1A8E9AC4_TypeDefinitionIndex)->GetStaticField(0xC882);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8682F01D1A8E9AC4_TypeDefinitionIndex)->GetStaticField(0xC883);
	}
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::Single Field_2_9; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_15; // 0x50
	::System::Collections::Generic::List_1<::Class_1_B7637CFF22586878*>* Field_2_13; // 0x58
	::System::String* Field_2_4; // 0x60
	::Class_3_F97B015544BE936B* Field_2_12; // 0x68
	::Class_3_707412604A129938* Field_2_19; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_2_18; // 0x78
	::System::Collections::Generic::List_1<::Class_2_2F4CE9A3C30CD7F4*>* Field_2_10; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_14; // 0x88
	::Class_3_B784205B00804B24_1* Field_2_8; // 0x90
	::System::Double Field_2_23; // 0x98
	::System::Double Field_2_22; // 0xA0
	::System::UInt32 Field_2_16; // 0xA8
	::System::Boolean Field_2_11; // 0xAC
	::System::UInt32 Field_2_17; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4__CCTOR_OFFSET))();
	}

	::System::Void Method_2_073C222069DD8502(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_073C222069DD8502_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_2_633215D849B5096F(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_633215D849B5096F_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D38146965857770(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_7D38146965857770_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CAB09625B03CCCA7(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::UInt16& Method_2_F2141DA88E673709()
	{
		return ((::System::UInt16&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_F2141DA88E673709_OFFSET))(this);
	}

	::System::Void Method_2_F4FDA15C28A64059(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_F4FDA15C28A64059_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_63391701C969E92B(::Class_2_4DB226BA3393390B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4DB226BA3393390B*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_63391701C969E92B_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_06975104FD75A14B(::Struct_2_FC595D1A561D8C6F_1& a1, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a2, ::Class_1_B7E341C5F1A6F199* a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::Struct_2_FC595D1A561D8C6F_1&, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_06975104FD75A14B_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_7FF33CDCBE9E821E(::Struct_2_FC595D1A561D8C6F_1& a1, ::Class_1_B7E341C5F1A6F199* a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::Struct_2_FC595D1A561D8C6F_1&, ::Class_1_B7E341C5F1A6F199*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_7FF33CDCBE9E821E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_9A52E8056B12A8AD(::Class_3_B784205B00804B24_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B784205B00804B24_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_9A52E8056B12A8AD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FB972B09AE563CF5(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_FB972B09AE563CF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_7C0C45934B7D5974& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7C0C45934B7D5974&))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_FB972B09AE563CF5_1(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_FB972B09AE563CF5_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_DE58498F3B2634B7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_DE58498F3B2634B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DE818692D9E885FB(::Struct_2_FC595D1A561D8C6F_1& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FC595D1A561D8C6F_1&))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_DE818692D9E885FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_E18C8D3F90D814C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_E18C8D3F90D814C3_OFFSET))(this);
	}

	::System::Void Method_2_912DDD551220EEB0(::Class_3_B784205B00804B24_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B784205B00804B24_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_912DDD551220EEB0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1A206FFA5EED1202(::Class_3_B784205B00804B24_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B784205B00804B24_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_1A206FFA5EED1202_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Rigidbody* Method_2_00D57AE9ACEB1094(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Rigidbody*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_00D57AE9ACEB1094_OFFSET))(a1, a2);
	}

	::System::Void Method_2_70050655D78BF3E8(::Class_3_B784205B00804B24_1* a1, ::MoleMole::Battle::Entity* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B784205B00804B24_1*, ::MoleMole::Battle::Entity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_70050655D78BF3E8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_BF41BD9D94757083(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_BF41BD9D94757083_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E77ECCE0C35CFCDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_E77ECCE0C35CFCDB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_2_1B2B365114FA5289(::Class_2_2F4CE9A3C30CD7F4* a1, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_1B2B365114FA5289_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9354D6FEDD28E66B(::Class_3_B784205B00804B24_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B784205B00804B24_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_9354D6FEDD28E66B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AAFF535392E27F32(::Class_3_CF26687E59A2AD49* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_CF26687E59A2AD49*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_AAFF535392E27F32_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_297CA11B14A9D499(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_297CA11B14A9D499_OFFSET))(this, a1, a2);
	}

	::MoleMole::Battle::Entity* Method_2_D1788DAA3A03D3D6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Struct_2_FC595D1A561D8C6F_1& a3, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Struct_2_FC595D1A561D8C6F_1&, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_D1788DAA3A03D3D6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::UInt16& Method_2_4D75C32E324F70EA()
	{
		return ((::System::UInt16&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_4D75C32E324F70EA_OFFSET))(this);
	}

	::System::Void Method_2_385AA2E42A1A69EE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_385AA2E42A1A69EE_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_A63C0AEBD2055D40(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::MoleMole::Config::ConfigMovement* a5, ::MoleMole::Config::ConfigRotation* a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Single a11, ::Enum_3_B3E208AA3A944E42 a12, ::Enum_3_2C81EAA18CFA0091 a13, ::Enum_3_01BE6AEDF4C525EC a14, ::System::Int32 a15, ::System::Single a16, ::Enum_3_7BE7A0D08355D16D a17, ::System::Boolean a18, ::System::Boolean a19, ::System::Boolean a20, ::System::Boolean a21, ::MoleMole::Config::ConfigEntityAnimEvent* a22, ::MoleMole::Config::ConfigEntityAnimEvent* a23, ::MoleMole::Battle::Entity* a24, ::System::String* a25, ::MoleMole::Config::AbilityTargetting a26, ::System::String* a27, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a28)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::Enum_3_B3E208AA3A944E42, ::Enum_3_2C81EAA18CFA0091, ::Enum_3_01BE6AEDF4C525EC, ::System::Int32, ::System::Single, ::Enum_3_7BE7A0D08355D16D, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigEntityAnimEvent*, ::MoleMole::Config::ConfigEntityAnimEvent*, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::AbilityTargetting, ::System::String*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_A63C0AEBD2055D40_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* Method_2_59D7DBD75B9EF7D2(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_59D7DBD75B9EF7D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C3A527740D5A99C7(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_C3A527740D5A99C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F34DF28FFAAFA483(::Class_3_B784205B00804B24_1* a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B784205B00804B24_1*, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4_METHOD_2_F34DF28FFAAFA483_OFFSET))(this, a1, a2, a3);
	}
};
