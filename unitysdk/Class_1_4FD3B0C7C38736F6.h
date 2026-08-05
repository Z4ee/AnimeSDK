#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5430DDABF48F9EFB.h"
#include "unitysdk/Enum_3_9F8D47E52A1FBE0C.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_186797E34BDAB9E2.h"
#include "unitysdk/Struct_2_433EAFD16930C7BA.h"
#include "unitysdk/Struct_2_4D2A06FEA755870D.h"
#include "unitysdk/Struct_2_9D13B292E62F3FA8.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_2.h"
#include "unitysdk/System/Object.h"

class Class_1_66C4D81440373C6E;
class Class_1_B7E341C5F1A6F199;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_430D60B7258267AD;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { template <typename T> class QuickList_1; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_00C7D3AFCD0F18DD_OFFSET UNITYSDK_OFFSET(0x14682E70)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_03BECA41F284B408_OFFSET UNITYSDK_OFFSET(0x14682540)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_0708847C69FEFF5C_OFFSET UNITYSDK_OFFSET(0x14681EB0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_07A1CFD9A2DAC97F_OFFSET UNITYSDK_OFFSET(0x1467D5D0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_1_OFFSET UNITYSDK_OFFSET(0x1467D090)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_OFFSET UNITYSDK_OFFSET(0x1467BEE0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_0AC83E6040F3949A_OFFSET UNITYSDK_OFFSET(0x1467D310)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_0C1D4A9C7FAC9FD1_OFFSET UNITYSDK_OFFSET(0x1467DA90)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_1_OFFSET UNITYSDK_OFFSET(0x146815B0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_OFFSET UNITYSDK_OFFSET(0x1467CEA0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_1AB396F5D25B6697_OFFSET UNITYSDK_OFFSET(0x14680AE0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_215F2C13B3FF8C7D_OFFSET UNITYSDK_OFFSET(0x1467E730)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_2C665C7E25748AF9_OFFSET UNITYSDK_OFFSET(0x1467DF80)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_3131EF12E5588A4D_OFFSET UNITYSDK_OFFSET(0x1467E3A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_37AA59030FE123E5_OFFSET UNITYSDK_OFFSET(0x1467E200)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_3D6D9F6CE09D1A31_OFFSET UNITYSDK_OFFSET(0x14681DA0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_3F0E5EFC076CB51E_OFFSET UNITYSDK_OFFSET(0x1467ED70)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_42265A35F1B27CCF_OFFSET UNITYSDK_OFFSET(0x1467F3A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_4BAAB717F8FFE448_OFFSET UNITYSDK_OFFSET(0x1467CC70)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_57432BF2FD00D99A_OFFSET UNITYSDK_OFFSET(0x14682940)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_5924CD94D69CD853_OFFSET UNITYSDK_OFFSET(0x146795D0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_5BFB594B065344E0_OFFSET UNITYSDK_OFFSET(0x1467DB40)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_67325AE31E3FD6F7_OFFSET UNITYSDK_OFFSET(0x1467EA80)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_674C0670CF2AC9E6_OFFSET UNITYSDK_OFFSET(0x146807F0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_681530664C71F924_OFFSET UNITYSDK_OFFSET(0x146821F0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_68180F0A91B82372_OFFSET UNITYSDK_OFFSET(0x1467C690)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_6CEE14D53969C6D2_OFFSET UNITYSDK_OFFSET(0x14680300)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_793C4850FCF612BC_OFFSET UNITYSDK_OFFSET(0x1467C0A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F486210FE987B80_1_OFFSET UNITYSDK_OFFSET(0x14682D70)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F486210FE987B80_OFFSET UNITYSDK_OFFSET(0x146809E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_1_OFFSET UNITYSDK_OFFSET(0x1467C970)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_2_OFFSET UNITYSDK_OFFSET(0x1467DDB0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_3_OFFSET UNITYSDK_OFFSET(0x1467F5B0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_4_OFFSET UNITYSDK_OFFSET(0x14680010)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_OFFSET UNITYSDK_OFFSET(0x1467C730)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_861121DD67B298C2_OFFSET UNITYSDK_OFFSET(0x1467D4D0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_1_OFFSET UNITYSDK_OFFSET(0x14682070)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_OFFSET UNITYSDK_OFFSET(0x14681D40)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8B9AC1AC493E1FBE_OFFSET UNITYSDK_OFFSET(0x1467C120)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_946F9F937429D7F3_OFFSET UNITYSDK_OFFSET(0x14657D30)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_956E6AF642FE5DCE_OFFSET UNITYSDK_OFFSET(0x14682AB0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_96006819B31A9F49_OFFSET UNITYSDK_OFFSET(0x14682340)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_99C5ADD45D9E8A3C_OFFSET UNITYSDK_OFFSET(0x1467CB40)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_1_OFFSET UNITYSDK_OFFSET(0x1467F140)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_2_OFFSET UNITYSDK_OFFSET(0x146820D0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_3_OFFSET UNITYSDK_OFFSET(0x14682C30)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_OFFSET UNITYSDK_OFFSET(0x1467C1B0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_A46F11332710C636_OFFSET UNITYSDK_OFFSET(0x1467E920)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_ADB9CAE7731998DE_OFFSET UNITYSDK_OFFSET(0x14682760)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_AED79AC0293F2CDF_OFFSET UNITYSDK_OFFSET(0x1467C8E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_BC46A74DF805F47F_OFFSET UNITYSDK_OFFSET(0x1467D860)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_BDAA9E1338420CEE_OFFSET UNITYSDK_OFFSET(0x1467C2F0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C0357636811F207B_OFFSET UNITYSDK_OFFSET(0x1467DC30)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_1_OFFSET UNITYSDK_OFFSET(0x146817A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_2_OFFSET UNITYSDK_OFFSET(0x14682800)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_3_OFFSET UNITYSDK_OFFSET(0x14682990)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_OFFSET UNITYSDK_OFFSET(0x1467F780)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C6000A6C42E4078A_OFFSET UNITYSDK_OFFSET(0x1467F8A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C6EDE7C446C8EB9B_OFFSET UNITYSDK_OFFSET(0x14682600)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_CB2342617EEF34D5_OFFSET UNITYSDK_OFFSET(0x1467EA30)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_CE3296D2DCAE5252_OFFSET UNITYSDK_OFFSET(0x1467FB60)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_1_OFFSET UNITYSDK_OFFSET(0x14680980)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_OFFSET UNITYSDK_OFFSET(0x1467FFB0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D1DDFAE5712F6A68_OFFSET UNITYSDK_OFFSET(0x1467D270)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_1_OFFSET UNITYSDK_OFFSET(0x146806B0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_OFFSET UNITYSDK_OFFSET(0x1467F260)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D7AE3ADCEC0977AB_OFFSET UNITYSDK_OFFSET(0x146801E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_E35A1433578E4979_OFFSET UNITYSDK_OFFSET(0x146818E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_E3B592547FB706FD_OFFSET UNITYSDK_OFFSET(0x14681FE0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_1_OFFSET UNITYSDK_OFFSET(0x14681B50)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_OFFSET UNITYSDK_OFFSET(0x1467EB80)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_FB8A0D7682787C48_OFFSET UNITYSDK_OFFSET(0x1467F9D0)

inline static constexpr unsigned int Class_1_4FD3B0C7C38736F6_TypeDefinitionIndex = 47991;

class Class_1_4FD3B0C7C38736F6 : public ::System::Object
{
public:
	static ::System::Void Method_1_07CB65322854512A(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678 a3, ::Struct_2_186797E34BDAB9E2 a4)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678, ::Struct_2_186797E34BDAB9E2))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_793C4850FCF612BC(::MoleMole::EntityHandle a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_793C4850FCF612BC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D77C0C3DEDA130E(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDAA9E1338420CEE(::Nap::NapECS::QuickList_1<::Struct_2_4D2A06FEA755870D>* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_B7E341C5F1A6F199* a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::QuickList_1<::Struct_2_4D2A06FEA755870D>*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_BDAA9E1338420CEE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_68180F0A91B82372(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_68180F0A91B82372_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_186797E34BDAB9E2 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_186797E34BDAB9E2))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_1_AED79AC0293F2CDF()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_AED79AC0293F2CDF_OFFSET))();
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_9D13B292E62F3FA8 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_9D13B292E62F3FA8))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_99C5ADD45D9E8A3C(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_99C5ADD45D9E8A3C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4BAAB717F8FFE448(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_4BAAB717F8FFE448_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_13372D0D46A0DFC2(::System::Delegate* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07CB65322854512A_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678 a3, ::Struct_2_9D13B292E62F3FA8 a4)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678, ::Struct_2_9D13B292E62F3FA8))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D1DDFAE5712F6A68(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D1DDFAE5712F6A68_OFFSET))(a1);
	}

	static ::System::Void Method_1_861121DD67B298C2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_861121DD67B298C2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_07A1CFD9A2DAC97F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_07A1CFD9A2DAC97F_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC46A74DF805F47F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_BC46A74DF805F47F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5BFB594B065344E0(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_5BFB594B065344E0_OFFSET))(a1);
	}

	static ::System::Void Method_1_C0357636811F207B(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678 a3)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_B7E341C5F1A6F199*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C0357636811F207B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_2(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_9D13B292E62F3FA8 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_9D13B292E62F3FA8))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2C665C7E25748AF9(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_2C665C7E25748AF9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_37AA59030FE123E5(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_37AA59030FE123E5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3131EF12E5588A4D(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_3131EF12E5588A4D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0C1D4A9C7FAC9FD1(::MoleMole::Battle::Entity* a1, ::Class_3_430D60B7258267AD*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_3_430D60B7258267AD*&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_0C1D4A9C7FAC9FD1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A46F11332710C636(::MoleMole::EntityHandle a1, ::MoleMole::Config::BaseProperty a2, ::Struct_2_F213AC3D3FBF57B9_2& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9_2&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_A46F11332710C636_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_CB2342617EEF34D5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_CB2342617EEF34D5_OFFSET))(a1);
	}

	static ::System::Void Method_1_67325AE31E3FD6F7(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_B7E341C5F1A6F199*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_67325AE31E3FD6F7_OFFSET))(a1);
	}

	static ::System::Void Method_1_E9B6D8E5B61BBD16(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5924CD94D69CD853(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_5924CD94D69CD853_OFFSET))(a1);
	}

	static ::System::Void Method_1_3F0E5EFC076CB51E(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_3F0E5EFC076CB51E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D77C0C3DEDA130E_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4E92F2DE5F84390(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_3(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_9D13B292E62F3FA8 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_9D13B292E62F3FA8))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C46977A118D3AE7E(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C6000A6C42E4078A(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678& a2, ::Struct_2_9E75F47F2670B678& a3)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678&, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C6000A6C42E4078A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FB8A0D7682787C48(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_FB8A0D7682787C48_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CE3296D2DCAE5252(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_CE3296D2DCAE5252_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_4(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_9D13B292E62F3FA8 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_9D13B292E62F3FA8))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D7AE3ADCEC0977AB(::MoleMole::Battle::Entity* a1, ::Struct_2_433EAFD16930C7BA a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_433EAFD16930C7BA))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D7AE3ADCEC0977AB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6CEE14D53969C6D2(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_6CEE14D53969C6D2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_OFFSET))(a1);
	}

	static ::System::Void Method_1_D4E92F2DE5F84390_1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_674C0670CF2AC9E6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_674C0670CF2AC9E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F486210FE987B80(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F486210FE987B80_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1AB396F5D25B6697(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::Enum_3_5430DDABF48F9EFB a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_1AB396F5D25B6697_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_215F2C13B3FF8C7D(::MoleMole::Battle::Entity* a1, ::MoleMole::GameplayTag a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_215F2C13B3FF8C7D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13372D0D46A0DFC2_1(::System::Delegate* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C46977A118D3AE7E_1(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E35A1433578E4979(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_E35A1433578E4979_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9B6D8E5B61BBD16_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8856EAF4107B25FF(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_OFFSET))(a1);
	}

	static ::Class_1_66C4D81440373C6E* Method_1_8B9AC1AC493E1FBE(::MoleMole::EntityHandle a1)
	{
		return ((::Class_1_66C4D81440373C6E*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8B9AC1AC493E1FBE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3D6D9F6CE09D1A31(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_3D6D9F6CE09D1A31_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0708847C69FEFF5C(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_0708847C69FEFF5C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E3B592547FB706FD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_E3B592547FB706FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8856EAF4107B25FF_1(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D77C0C3DEDA130E_2(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0AC83E6040F3949A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_0AC83E6040F3949A_OFFSET))(a1);
	}

	static ::System::Void Method_1_681530664C71F924(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Nap::NapECS::EcsFilter* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Nap::NapECS::EcsFilter*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_681530664C71F924_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_946F9F937429D7F3(::Nap::NapECS::EcsEntity* a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_946F9F937429D7F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_42265A35F1B27CCF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_42265A35F1B27CCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96006819B31A9F49(::MoleMole::Battle::Entity* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_96006819B31A9F49_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03BECA41F284B408(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_03BECA41F284B408_OFFSET))(a1);
	}

	static ::System::Void Method_1_C6EDE7C446C8EB9B(::Nap::NapECS::EcsEntity* a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C6EDE7C446C8EB9B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ADB9CAE7731998DE(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_ADB9CAE7731998DE_OFFSET))(a1);
	}

	static ::System::Void Method_1_C46977A118D3AE7E_2(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_57432BF2FD00D99A(::MoleMole::Battle::Entity* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_57432BF2FD00D99A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C46977A118D3AE7E_3(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C46977A118D3AE7E_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_956E6AF642FE5DCE(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_B7E341C5F1A6F199*>*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_956E6AF642FE5DCE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9D77C0C3DEDA130E_3(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_9D77C0C3DEDA130E_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F486210FE987B80_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F486210FE987B80_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_00C7D3AFCD0F18DD(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_00C7D3AFCD0F18DD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_1_OFFSET))(a1);
	}
};
