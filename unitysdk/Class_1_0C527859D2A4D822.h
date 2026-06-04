#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0C527859D2A4D822_Class_1_222A701F7C5EBAAC;
class Class_1_0C527859D2A4D822_Class_1_7C9CCB80E1B5D6D9;
class Class_1_0C527859D2A4D822_Class_1_D8F4631EC8CFC015;
class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_1_86D6A61A4F68A5B8;
class Class_1_F3BE5FADB5DD266C;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::GameCore { class FourRotateVoxelRevertConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0C527859D2A4D822_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDE54160)
#define CLASS_1_0C527859D2A4D822_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDE535F0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_02C19192C3EFC3FA_OFFSET UNITYSDK_OFFSET(0xDE56690)
#define CLASS_1_0C527859D2A4D822_METHOD_1_2AF3A9FB6FC2B7D3_OFFSET UNITYSDK_OFFSET(0xDE589C0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xDE55B60)
#define CLASS_1_0C527859D2A4D822_METHOD_1_3AE139567F45F2CA_OFFSET UNITYSDK_OFFSET(0xDE57A10)
#define CLASS_1_0C527859D2A4D822_METHOD_1_3FCC4C002DC2D451_OFFSET UNITYSDK_OFFSET(0xDE55C20)
#define CLASS_1_0C527859D2A4D822_METHOD_1_411D8A50B429935B_OFFSET UNITYSDK_OFFSET(0xDE58450)
#define CLASS_1_0C527859D2A4D822_METHOD_1_4E0A24C845EC6FB4_OFFSET UNITYSDK_OFFSET(0xDE573A0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_5510AD63C455B78C_OFFSET UNITYSDK_OFFSET(0xDE58780)
#define CLASS_1_0C527859D2A4D822_METHOD_1_59493E05A11A51B6_OFFSET UNITYSDK_OFFSET(0xDE56CE0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_66F12D48C275BB66_OFFSET UNITYSDK_OFFSET(0xDE59320)
#define CLASS_1_0C527859D2A4D822_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xDE56640)
#define CLASS_1_0C527859D2A4D822_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0xDE572E0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_9D66BACF8DC0F570_OFFSET UNITYSDK_OFFSET(0xDE59050)
#define CLASS_1_0C527859D2A4D822_METHOD_1_A77870C566864FEA_OFFSET UNITYSDK_OFFSET(0xDE53880)
#define CLASS_1_0C527859D2A4D822_METHOD_1_AE60CA4DC1D191FA_OFFSET UNITYSDK_OFFSET(0xDE596F0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_AEEC2CD468679168_OFFSET UNITYSDK_OFFSET(0xDE58DC0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_B3D2B69EB51C0319_OFFSET UNITYSDK_OFFSET(0xDE57BC0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_BEF13FC990763FD7_OFFSET UNITYSDK_OFFSET(0xDE59CF0)
#define CLASS_1_0C527859D2A4D822_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xDE59E30)
#define CLASS_1_0C527859D2A4D822_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDE58910)
#define CLASS_1_0C527859D2A4D822_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE57B80)
#define CLASS_1_0C527859D2A4D822_METHOD_1_E1AA70E07AA740FC_OFFSET UNITYSDK_OFFSET(0xDE55F00)
#define CLASS_1_0C527859D2A4D822_METHOD_1_E224D5BA9A7D3068_OFFSET UNITYSDK_OFFSET(0xDE53E90)
#define CLASS_1_0C527859D2A4D822_METHOD_1_EC90259991730611_OFFSET UNITYSDK_OFFSET(0xDE53E40)
#define CLASS_1_0C527859D2A4D822_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xDE56C50)
#define CLASS_1_0C527859D2A4D822_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xDE537C0)
#define CLASS_1_0C527859D2A4D822__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE59E40)
#define CLASS_1_0C527859D2A4D822__CTOR_OFFSET UNITYSDK_OFFSET(0xDE534B0)

inline static constexpr unsigned int Class_1_0C527859D2A4D822_TypeDefinitionIndex = 71338;

class Class_1_0C527859D2A4D822 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C527859D2A4D822_TypeDefinitionIndex)->GetStaticField(0x68EB0);
	}
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_3; // 0x20
	::Class_1_2CDF619C23140440* Field_1_4; // 0x28
	::Class_1_0C527859D2A4D822_Class_1_7C9CCB80E1B5D6D9* Field_1_5; // 0x30
	::Class_1_0C527859D2A4D822_Class_1_D8F4631EC8CFC015* Field_1_6; // 0x38
	::Class_3_D6E9A038FA23103A* Field_1_7; // 0x40
	::Class_1_0C527859D2A4D822_Class_1_222A701F7C5EBAAC* Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x50
	::System::Int32 Field_1_10; // 0x54
	::System::Boolean Field_1_11; // 0x58
	::System::Boolean Field_1_12; // 0x59
	::System::Boolean Field_1_13; // 0x5A
	::System::Boolean Field_1_14; // 0x5B
	::System::Single Field_1_15; // 0x5C
	::System::Int32 Field_1_16; // 0x60
	::System::Single Field_1_17; // 0x64
	::System::Single Field_1_18; // 0x68
	::System::Single Field_1_19; // 0x6C
	::System::Boolean Field_1_20; // 0x70
	::System::Boolean Field_1_21; // 0x71
	::System::Boolean Field_1_22; // 0x72
	::System::Single Field_1_23; // 0x74

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_A77870C566864FEA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_A77870C566864FEA_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_E224D5BA9A7D3068(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_8385F95FFA7FAA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_E224D5BA9A7D3068_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E0A24C845EC6FB4(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_8385F95FFA7FAA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_4E0A24C845EC6FB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_02C19192C3EFC3FA(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_8385F95FFA7FAA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_02C19192C3EFC3FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3FCC4C002DC2D451(::Class_2_B8E38BF47138A2E5* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_3FCC4C002DC2D451_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC90259991730611(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_EC90259991730611_OFFSET))(this, a1);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_66F12D48C275BB66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_66F12D48C275BB66_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE60CA4DC1D191FA(::RPG::GameCore::FourRotateVoxelRevertConfig* a1, ::Class_1_8385F95FFA7FAA1C* a2, ::Class_1_F3BE5FADB5DD266C* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelRevertConfig*, ::Class_1_8385F95FFA7FAA1C*, ::Class_1_F3BE5FADB5DD266C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_AE60CA4DC1D191FA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B3D2B69EB51C0319(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_8385F95FFA7FAA1C* a2, ::Class_1_86D6A61A4F68A5B8* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_8385F95FFA7FAA1C*, ::Class_1_86D6A61A4F68A5B8*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_B3D2B69EB51C0319_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E1AA70E07AA740FC(::Class_1_8385F95FFA7FAA1C* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_E1AA70E07AA740FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_59493E05A11A51B6(::Class_1_8385F95FFA7FAA1C* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*, ::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_59493E05A11A51B6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_2AF3A9FB6FC2B7D3(::Class_1_8385F95FFA7FAA1C* a1, ::Cinemachine::CinemachineVirtualCamera* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_2AF3A9FB6FC2B7D3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_AEEC2CD468679168(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_AEEC2CD468679168_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D66BACF8DC0F570(::Class_1_8385F95FFA7FAA1C* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*, ::Cinemachine::CinemachineVirtualCamera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_9D66BACF8DC0F570_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3AE139567F45F2CA(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_3AE139567F45F2CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BEF13FC990763FD7(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_8385F95FFA7FAA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_BEF13FC990763FD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5510AD63C455B78C(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_8385F95FFA7FAA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_5510AD63C455B78C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_8385F95FFA7FAA1C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_411D8A50B429935B(::Class_1_8385F95FFA7FAA1C* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_411D8A50B429935B_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}
};
