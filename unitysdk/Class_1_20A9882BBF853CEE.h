#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPG/Client/EAirshipDriveType.h"
#include "unitysdk/RPG/Client/EAirshipMoorState.h"
#include "unitysdk/Struct_2_BBE13FFEB7E1D73E.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AirlineStation; }
namespace RPG::Client { class Airship; }
namespace RPG::Client { class AirshipAudio; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_20A9882BBF853CEE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA88A6C0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xA88FE30)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_0253F359144E289E_OFFSET UNITYSDK_OFFSET(0xA88C590)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_070E78F7BE10761C_OFFSET UNITYSDK_OFFSET(0xA88F500)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_08C5265FFA615F64_OFFSET UNITYSDK_OFFSET(0xA88EB60)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1165D15BFAF80CF0_OFFSET UNITYSDK_OFFSET(0xA88F1F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xA8902E0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA890340)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xA88C610)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA88A660)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_2B92BBB23D0FE690_OFFSET UNITYSDK_OFFSET(0xA88CE10)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xA890490)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_46F38B806BD98B70_OFFSET UNITYSDK_OFFSET(0xA890900)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xA8903B0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_4C1E8F7F7712A882_OFFSET UNITYSDK_OFFSET(0xA88CBC0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_4FEC3B4AE526B401_OFFSET UNITYSDK_OFFSET(0xA88A520)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xA8906B0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0xA890920)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xA8904E0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_60A8497E9F4D23B5_OFFSET UNITYSDK_OFFSET(0xA8906C0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_62BB36E1B63D890A_OFFSET UNITYSDK_OFFSET(0xA890480)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_675F8997EAD9936C_OFFSET UNITYSDK_OFFSET(0xA88E8F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_6D6EA29B8021E10A_OFFSET UNITYSDK_OFFSET(0xA88C9A0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_6F2456C76DDD8FEF_OFFSET UNITYSDK_OFFSET(0xA88F8F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_71491C77820F89D9_OFFSET UNITYSDK_OFFSET(0xA890930)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_768CE08CF973C3AE_OFFSET UNITYSDK_OFFSET(0xA88F630)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xA88EFC0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_81BBBB906810BF5A_OFFSET UNITYSDK_OFFSET(0xA88A9C0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_1_OFFSET UNITYSDK_OFFSET(0xA88FD90)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0xA88FCF0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xA88F850)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_92A9828296131A3C_OFFSET UNITYSDK_OFFSET(0xA88CE80)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_994AEE4DBD645811_OFFSET UNITYSDK_OFFSET(0xA88A840)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_A7A30E84C9695D06_OFFSET UNITYSDK_OFFSET(0xA8900F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_ACE1B76C3A7F6CE1_OFFSET UNITYSDK_OFFSET(0xA88F090)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_C19E9E281EA0E4DD_OFFSET UNITYSDK_OFFSET(0xA8909E0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA88C670)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xA88AD20)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xA890590)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_DBD08055DB7EB0F2_OFFSET UNITYSDK_OFFSET(0xA88C6C0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_EC7FB863D548C3EF_OFFSET UNITYSDK_OFFSET(0xA8903D0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA8903C0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xA890910)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA8903A0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xA890570)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0xA890690)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xA8904F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA88FC70)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0xA88E980)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xA890630)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA890510)
#define CLASS_1_20A9882BBF853CEE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA890B30)
#define CLASS_1_20A9882BBF853CEE__CTOR_OFFSET UNITYSDK_OFFSET(0xA88A4C0)

inline static constexpr unsigned int Class_1_20A9882BBF853CEE_TypeDefinitionIndex = 55889;

class Class_1_20A9882BBF853CEE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x13DE0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x13DE4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x13DE8);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x13DEC);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x13DF0);
	}
	::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Field_1_5; // 0x10
	::RPG::Client::Airship* Field_1_6; // 0x18
	::Struct_2_BBE13FFEB7E1D73E Field_1_7; // 0x20
	::Struct_2_BBE13FFEB7E1D73E Field_1_8; // 0x68
	::RPG::Client::AirshipAudio* Field_1_9; // 0xB0
	::System::Single Field_1_10; // 0xB8
	::System::Single Field_1_11; // 0xBC
	::System::Single Field_1_12; // 0xC0
	::System::Single Field_1_13; // 0xC4
	::RPG::Client::EAirshipDriveType Field_1_14; // 0xC8
	::RPG::Client::EAirshipMoorState Field_1_15; // 0xCC
	::System::Single Field_1_16; // 0xD0
	::System::Single Field_1_17; // 0xD4
	::UnityEngine::Vector3 Field_1_18; // 0xD8
	::System::Single Field_1_19; // 0xE4
	::System::Boolean Field_1_20; // 0xE8
	::System::Boolean Field_1_21; // 0xE9
	::System::Boolean Field_1_22; // 0xEA
	::System::Single Field_1_23; // 0xEC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_4FEC3B4AE526B401(::RPG::Client::Airship* a1, ::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Airship*, ::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>*))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_4FEC3B4AE526B401_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_994AEE4DBD645811(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_994AEE4DBD645811_OFFSET))(this, a1);
	}

	::System::Void Method_1_81BBBB906810BF5A(::Struct_2_F93DE209E992FF0D a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F93DE209E992FF0D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_81BBBB906810BF5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0253F359144E289E(::EAirshipWorkingState a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::EAirshipWorkingState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_0253F359144E289E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DBD08055DB7EB0F2(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_DBD08055DB7EB0F2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4C1E8F7F7712A882(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_4C1E8F7F7712A882_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2B92BBB23D0FE690(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_2B92BBB23D0FE690_OFFSET))(this, a1);
	}

	::System::Void Method_1_675F8997EAD9936C(::RPG::Client::AirlineStation* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineStation*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_675F8997EAD9936C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_92A9828296131A3C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_92A9828296131A3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08C5265FFA615F64(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_08C5265FFA615F64_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACE1B76C3A7F6CE1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_ACE1B76C3A7F6CE1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_1165D15BFAF80CF0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1165D15BFAF80CF0_OFFSET))(this);
	}

	::System::Void Method_1_070E78F7BE10761C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_070E78F7BE10761C_OFFSET))(this, a1);
	}

	::System::Void Method_1_768CE08CF973C3AE(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_768CE08CF973C3AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D6EA29B8021E10A(::System::Boolean a1, ::RPG::Client::EAirshipDriveType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::EAirshipDriveType))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_6D6EA29B8021E10A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F2456C76DDD8FEF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_6F2456C76DDD8FEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_A7A30E84C9695D06(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_A7A30E84C9695D06_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::AirlineStation* Method_1_EC7FB863D548C3EF()
	{
		return ((::RPG::Client::AirlineStation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_EC7FB863D548C3EF_OFFSET))(this);
	}

	::RPG::Client::Airship* Method_1_62BB36E1B63D890A()
	{
		return ((::RPG::Client::Airship*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_62BB36E1B63D890A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_2_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_60A8497E9F4D23B5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_60A8497E9F4D23B5_OFFSET))(this, a1);
	}

	::RPG::Client::AirshipAudio* Method_1_46F38B806BD98B70()
	{
		return ((::RPG::Client::AirshipAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_46F38B806BD98B70_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_71491C77820F89D9(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_71491C77820F89D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C19E9E281EA0E4DD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_C19E9E281EA0E4DD_OFFSET))(this, a1);
	}
};
