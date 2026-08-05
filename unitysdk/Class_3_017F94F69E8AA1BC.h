#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_017F94F69E8AA1BC_Struct_2_B7FF36AE863DA93A.h"
#include "unitysdk/Class_3_017F94F69E8AA1BC_Struct_2_D339CCD811B55B3A.h"
#include "unitysdk/Class_3_017F94F69E8AA1BC_Struct_2_ED8FE57BB39388AE.h"
#include "unitysdk/Class_3_017F94F69E8AA1BC_Struct_2_F7C243F317D8E44A_2.h"
#include "unitysdk/Enum_3_299B9A89FD285FC5.h"
#include "unitysdk/Enum_3_A1B8ECBDB49D9ED8.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10;
class Class_1_B7E341C5F1A6F199;
class Class_2_186B4E1BC116EFF3;
class Class_2_208CC9941471731A_992;
class Class_2_23D4664E72852A15;
class Class_2_3EB92686D65E00AD;
class Class_2_4D85B3519CEC3065;
class Class_2_8CCD896F955E811E_2;
class Class_2_B1F96C97C5B88AFC;
class Class_2_BA85E4525E7A6838;
class Class_2_CA022A8FB45786E8;
class Class_2_E275F6568FBD98FA;
class Class_3_B9B508A677D967D3;
class Class_3_B9B508A677D967D3_Class_1_4BBC7C5446F593D1;
class Class_3_BE75AAF0F7C40C75;
class Class_3_F6C28A889504BEF6;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_017F94F69E8AA1BC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14631740)
#define CLASS_3_017F94F69E8AA1BC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14632330)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_02C00608BDDA63CD_OFFSET UNITYSDK_OFFSET(0x11788D00)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_0457CB9A7044F240_OFFSET UNITYSDK_OFFSET(0x11787F70)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_0D111E7B8D83D20B_OFFSET UNITYSDK_OFFSET(0x11785FB0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_14588B9EF32611C7_OFFSET UNITYSDK_OFFSET(0x1178C7F0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_14D8592A39F1EF7B_OFFSET UNITYSDK_OFFSET(0x1178A630)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_16E6765A9A0E5E69_OFFSET UNITYSDK_OFFSET(0x117895F0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_1DA6758ECD89D23D_OFFSET UNITYSDK_OFFSET(0x11782390)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_1FBC343CC72D3455_OFFSET UNITYSDK_OFFSET(0x1178AED0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_25F7C9CEE46BD1E5_1_OFFSET UNITYSDK_OFFSET(0x1178A9B0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_25F7C9CEE46BD1E5_OFFSET UNITYSDK_OFFSET(0x11789130)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_289DF29CCB9F65FF_OFFSET UNITYSDK_OFFSET(0x11783630)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_29048AA12B607F32_OFFSET UNITYSDK_OFFSET(0x117841C0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_2F858567F248A08A_OFFSET UNITYSDK_OFFSET(0x1178A070)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_319143D3217AB77D_OFFSET UNITYSDK_OFFSET(0x117866C0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_374CB4C4A0EA9EE3_OFFSET UNITYSDK_OFFSET(0x11784340)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_3888E56711574D82_OFFSET UNITYSDK_OFFSET(0x1178CCB0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_3D44F1AF46A43012_OFFSET UNITYSDK_OFFSET(0x1178BF80)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_3FE862FF7A0095C0_OFFSET UNITYSDK_OFFSET(0x11784F90)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_42D0F605EDCC4ED7_OFFSET UNITYSDK_OFFSET(0x11786850)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_55C409F94CDFD05F_OFFSET UNITYSDK_OFFSET(0x11789260)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_5623BF90400AEC55_1_OFFSET UNITYSDK_OFFSET(0x1178B060)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_5623BF90400AEC55_OFFSET UNITYSDK_OFFSET(0x11788AC0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1178D220)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1178B580)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_5EBBA7A67202F836_OFFSET UNITYSDK_OFFSET(0x117876F0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_60C9357C663663B4_OFFSET UNITYSDK_OFFSET(0x117878E0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_64768AC28E15975E_OFFSET UNITYSDK_OFFSET(0x1178B2B0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_664E66E508CC28A4_OFFSET UNITYSDK_OFFSET(0x11782D80)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_67FFD3F46C2F4965_OFFSET UNITYSDK_OFFSET(0x117862A0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_6D899D6DEED60934_OFFSET UNITYSDK_OFFSET(0x1178AC50)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_6F11D76F0EBD31C4_OFFSET UNITYSDK_OFFSET(0x11782910)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_714FFEFA2562757B_OFFSET UNITYSDK_OFFSET(0x11785540)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_741C644F7BDA6CC5_OFFSET UNITYSDK_OFFSET(0x146323C0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_771093D3B38BE157_OFFSET UNITYSDK_OFFSET(0x11787010)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_79209E8C5FFDC9F8_OFFSET UNITYSDK_OFFSET(0x11782880)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x1178BE00)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_92EEB198074DA183_1_OFFSET UNITYSDK_OFFSET(0x1178B800)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0x11789310)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_9321A09401BCB6C8_OFFSET UNITYSDK_OFFSET(0x11782720)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_949A72DF1E49ACD0_OFFSET UNITYSDK_OFFSET(0x1178B840)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_9C7805966F67E8C5_OFFSET UNITYSDK_OFFSET(0x1178C500)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_9DCC884372DD114E_OFFSET UNITYSDK_OFFSET(0x11789FF0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_A10184AA04817ED7_OFFSET UNITYSDK_OFFSET(0x11788EC0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_A79803D27B870AE8_OFFSET UNITYSDK_OFFSET(0x11787170)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x1178BDC0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_AA78F900383EB570_OFFSET UNITYSDK_OFFSET(0x117899E0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x1178C5D0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_ACD1F22BD02FDD17_OFFSET UNITYSDK_OFFSET(0x11783C20)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_AD0FD4FE14A854BB_OFFSET UNITYSDK_OFFSET(0x117879F0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x117894D0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_B2C376ACCC22AD69_OFFSET UNITYSDK_OFFSET(0x11788650)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_BA9F98B46FD896F5_OFFSET UNITYSDK_OFFSET(0x11788770)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11789560)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_BDAEA205627AF268_OFFSET UNITYSDK_OFFSET(0x11787510)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_BF28F9C00500DE7A_OFFSET UNITYSDK_OFFSET(0x11789180)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_C0D33447FFF7D143_OFFSET UNITYSDK_OFFSET(0x11783E00)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_C24532C3E3AB853C_OFFSET UNITYSDK_OFFSET(0x11789F30)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_C3F081B79E7B9798_OFFSET UNITYSDK_OFFSET(0x11783B90)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_C46DBC1D9719905F_OFFSET UNITYSDK_OFFSET(0x11783140)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1178D2F0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1178D260)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_CF8461F5E6FB77B0_OFFSET UNITYSDK_OFFSET(0x1178D0B0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_DAA95A3E9203ECE4_OFFSET UNITYSDK_OFFSET(0x11784B20)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_DDB1F49F4423A0C7_OFFSET UNITYSDK_OFFSET(0x11786E80)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_E12239F58C5458F5_OFFSET UNITYSDK_OFFSET(0x1178A4A0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_E32F31D305471A57_OFFSET UNITYSDK_OFFSET(0x1178B5C0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_E3914FE00A447955_OFFSET UNITYSDK_OFFSET(0x11783FB0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_E7580ECED8D03E1C_OFFSET UNITYSDK_OFFSET(0x1178C0E0)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_ED1D80C7EEE032BA_OFFSET UNITYSDK_OFFSET(0x11789350)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_FE2F02BCAD55C529_OFFSET UNITYSDK_OFFSET(0x1178AA00)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_FF8DFFDCCAB9F666_1_OFFSET UNITYSDK_OFFSET(0x11785490)
#define CLASS_3_017F94F69E8AA1BC_METHOD_3_FF8DFFDCCAB9F666_OFFSET UNITYSDK_OFFSET(0x11784110)
#define CLASS_3_017F94F69E8AA1BC_UPDATE_OFFSET UNITYSDK_OFFSET(0x146321D0)
#define CLASS_3_017F94F69E8AA1BC__CTOR_OFFSET UNITYSDK_OFFSET(0x14632370)

inline static constexpr unsigned int Class_3_017F94F69E8AA1BC_TypeDefinitionIndex = 72382;

class Class_3_017F94F69E8AA1BC : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::Int32 Field_3_0 = 0x5; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_741C644F7BDA6CC5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_741C644F7BDA6CC5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1DA6758ECD89D23D(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_1DA6758ECD89D23D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_79209E8C5FFDC9F8(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_79209E8C5FFDC9F8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_3_664E66E508CC28A4(::Enum_3_A1B8ECBDB49D9ED8 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Int32(*)(::Enum_3_A1B8ECBDB49D9ED8, ::System::Single, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_664E66E508CC28A4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_C3F081B79E7B9798(::System::Single a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_C3F081B79E7B9798_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_ACD1F22BD02FDD17(::Enum_3_299B9A89FD285FC5 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Enum_3_299B9A89FD285FC5, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_ACD1F22BD02FDD17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C0D33447FFF7D143(::Class_3_B9B508A677D967D3* a1)
	{
		return ((::System::Void(*)(::Class_3_B9B508A677D967D3*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_C0D33447FFF7D143_OFFSET))(a1);
	}

	static ::System::Void Method_3_E3914FE00A447955(::Class_3_B9B508A677D967D3* a1)
	{
		return ((::System::Void(*)(::Class_3_B9B508A677D967D3*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_E3914FE00A447955_OFFSET))(a1);
	}

	static ::System::Void Method_3_FF8DFFDCCAB9F666(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_FF8DFFDCCAB9F666_OFFSET))(a1);
	}

	static ::System::Void Method_3_29048AA12B607F32(::Class_3_B9B508A677D967D3* a1)
	{
		return ((::System::Void(*)(::Class_3_B9B508A677D967D3*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_29048AA12B607F32_OFFSET))(a1);
	}

	static ::System::Void Method_3_C46DBC1D9719905F(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_C46DBC1D9719905F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_9321A09401BCB6C8(::Enum_3_A1B8ECBDB49D9ED8 a1, ::MoleMole::Battle::Entity* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Boolean(*)(::Enum_3_A1B8ECBDB49D9ED8, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_9321A09401BCB6C8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3FE862FF7A0095C0(::Class_3_F6C28A889504BEF6* a1)
	{
		return ((::System::Void(*)(::Class_3_F6C28A889504BEF6*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_3FE862FF7A0095C0_OFFSET))(a1);
	}

	static ::System::Void Method_3_FF8DFFDCCAB9F666_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_FF8DFFDCCAB9F666_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_714FFEFA2562757B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_714FFEFA2562757B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BDAEA205627AF268(::Class_2_4D85B3519CEC3065* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_4D85B3519CEC3065*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_BDAEA205627AF268_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B2C376ACCC22AD69(::Class_3_B9B508A677D967D3* a1)
	{
		return ((::System::Void(*)(::Class_3_B9B508A677D967D3*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_B2C376ACCC22AD69_OFFSET))(a1);
	}

	static ::System::Void Method_3_5623BF90400AEC55(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_5623BF90400AEC55_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A10184AA04817ED7(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_A10184AA04817ED7_OFFSET))(a1);
	}

	static ::System::Void Method_3_25F7C9CEE46BD1E5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_25F7C9CEE46BD1E5_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_BF28F9C00500DE7A(::Class_2_208CC9941471731A_992* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_992*, ::System::Single, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_BF28F9C00500DE7A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_55C409F94CDFD05F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_55C409F94CDFD05F_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_ED1D80C7EEE032BA(::Enum_3_A1B8ECBDB49D9ED8 a1, ::System::UInt32 a2, ::System::Boolean a3, ::MoleMole::Battle::Entity* a4, ::Il2CppArray<::System::Int32>* a5)
	{
		return ((::System::Boolean(*)(::Enum_3_A1B8ECBDB49D9ED8, ::System::UInt32, ::System::Boolean, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_ED1D80C7EEE032BA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_BA9F98B46FD896F5(::Class_3_B9B508A677D967D3_Class_1_4BBC7C5446F593D1* a1)
	{
		return ((::System::Boolean(*)(::Class_3_B9B508A677D967D3_Class_1_4BBC7C5446F593D1*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_BA9F98B46FD896F5_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_16E6765A9A0E5E69(::Enum_3_A1B8ECBDB49D9ED8 a1, ::MoleMole::Battle::Entity* a2, ::System::Action_1<::System::Int32>* a3, ::Il2CppArray<::System::Int32>* a4)
	{
		return ((::System::Boolean(*)(::Enum_3_A1B8ECBDB49D9ED8, ::MoleMole::Battle::Entity*, ::System::Action_1<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_16E6765A9A0E5E69_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_771093D3B38BE157(::Enum_3_A1B8ECBDB49D9ED8 a1, ::System::UInt32 a2, ::MoleMole::Battle::Entity* a3, ::Il2CppArray<::System::Int32>* a4)
	{
		return ((::System::Boolean(*)(::Enum_3_A1B8ECBDB49D9ED8, ::System::UInt32, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_771093D3B38BE157_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_0457CB9A7044F240(::Class_2_E275F6568FBD98FA* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_E275F6568FBD98FA*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_0457CB9A7044F240_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DDB1F49F4423A0C7(::Class_2_23D4664E72852A15* a1)
	{
		return ((::System::Void(*)(::Class_2_23D4664E72852A15*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_DDB1F49F4423A0C7_OFFSET))(a1);
	}

	static ::System::Void Method_3_A79803D27B870AE8(::Class_2_186B4E1BC116EFF3* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_186B4E1BC116EFF3*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_A79803D27B870AE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C24532C3E3AB853C(::Class_2_8CCD896F955E811E_2* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_8CCD896F955E811E_2*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_C24532C3E3AB853C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_ADF4AD3331B4D7AD_OFFSET))(a1);
	}

	static ::System::Void Method_3_9DCC884372DD114E(::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_9DCC884372DD114E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2F858567F248A08A(::System::Single a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_2F858567F248A08A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_319143D3217AB77D(::Class_2_BA85E4525E7A6838* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_BA85E4525E7A6838*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_319143D3217AB77D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_02C00608BDDA63CD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_02C00608BDDA63CD_OFFSET))(a1);
	}

	static ::System::Void Method_3_289DF29CCB9F65FF(::Enum_3_A1B8ECBDB49D9ED8 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::Enum_3_A1B8ECBDB49D9ED8, ::System::Single, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_289DF29CCB9F65FF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_6D899D6DEED60934(::Class_2_CA022A8FB45786E8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_CA022A8FB45786E8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_6D899D6DEED60934_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1FBC343CC72D3455(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_1FBC343CC72D3455_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0D111E7B8D83D20B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_0D111E7B8D83D20B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_64768AC28E15975E(::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_64768AC28E15975E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_3_E32F31D305471A57(::Class_2_B1F96C97C5B88AFC* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B1F96C97C5B88AFC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_E32F31D305471A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_92EEB198074DA183_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_949A72DF1E49ACD0(::Enum_3_A1B8ECBDB49D9ED8 a1, ::MoleMole::Battle::Entity* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Enum_3_A1B8ECBDB49D9ED8, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_949A72DF1E49ACD0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_AA78F900383EB570(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_AA78F900383EB570_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_42D0F605EDCC4ED7(::Class_2_3EB92686D65E00AD* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3EB92686D65E00AD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_42D0F605EDCC4ED7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_BE75AAF0F7C40C75* a1)
	{
		return ((::System::Void(*)(::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_67FFD3F46C2F4965(::Class_3_B9B508A677D967D3* a1)
	{
		return ((::System::Void(*)(::Class_3_B9B508A677D967D3*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_67FFD3F46C2F4965_OFFSET))(a1);
	}

	static ::System::Void Method_3_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_9219C2A9E5905AEF_OFFSET))(a1);
	}

	static ::System::Void Method_3_E7580ECED8D03E1C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_E7580ECED8D03E1C_OFFSET))(a1);
	}

	static ::System::Void Method_3_9C7805966F67E8C5(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_9C7805966F67E8C5_OFFSET))(a1);
	}

	static ::System::Void Method_3_FE2F02BCAD55C529(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_FE2F02BCAD55C529_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3D44F1AF46A43012(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_3D44F1AF46A43012_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E12239F58C5458F5(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_E12239F58C5458F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AA7E3074254D484A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_AA7E3074254D484A_OFFSET))();
	}

	static ::System::Boolean Method_3_DAA95A3E9203ECE4(::Class_3_017F94F69E8AA1BC_Struct_2_B7FF36AE863DA93A a1, ::System::Action_1<::Class_3_017F94F69E8AA1BC_Struct_2_D339CCD811B55B3A>* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_017F94F69E8AA1BC_Struct_2_B7FF36AE863DA93A, ::System::Action_1<::Class_3_017F94F69E8AA1BC_Struct_2_D339CCD811B55B3A>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_DAA95A3E9203ECE4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6F11D76F0EBD31C4(::System::Int32 a1, ::Class_3_017F94F69E8AA1BC_Struct_2_F7C243F317D8E44A_2 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_3_017F94F69E8AA1BC_Struct_2_F7C243F317D8E44A_2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_6F11D76F0EBD31C4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5623BF90400AEC55_1(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_5623BF90400AEC55_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_AD0FD4FE14A854BB(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_AD0FD4FE14A854BB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14588B9EF32611C7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_14588B9EF32611C7_OFFSET))(a1);
	}

	static ::System::Void Method_3_25F7C9CEE46BD1E5_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_25F7C9CEE46BD1E5_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_3888E56711574D82(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_3888E56711574D82_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_14D8592A39F1EF7B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_14D8592A39F1EF7B_OFFSET))(a1);
	}

	static ::System::Void Method_3_5EBBA7A67202F836(::System::Boolean a1, ::System::Boolean a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_5EBBA7A67202F836_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_CF8461F5E6FB77B0(::Enum_3_A1B8ECBDB49D9ED8 a1, ::MoleMole::Battle::Entity* a2, ::Il2CppArray<::System::Int32>* a3, ::Class_3_017F94F69E8AA1BC_Struct_2_ED8FE57BB39388AE& a4)
	{
		return ((::System::Void(*)(::Enum_3_A1B8ECBDB49D9ED8, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*, ::Class_3_017F94F69E8AA1BC_Struct_2_ED8FE57BB39388AE&))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_CF8461F5E6FB77B0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_5790A55946AA509D_1_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_374CB4C4A0EA9EE3(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_374CB4C4A0EA9EE3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_60C9357C663663B4(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_METHOD_3_60C9357C663663B4_OFFSET))(a1, a2);
	}
};
