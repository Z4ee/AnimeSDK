#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_660;
class Class_1_5F439A66B759DFD0;
namespace RPG::Client { class Airline; }
namespace RPG::Client { class AirlineWay; }
namespace RPG::Client { class AirshipEmitter; }
namespace RPG::Client { class RacingDriveConfig; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_083521F7486609FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE03E2B0)
#define CLASS_1_083521F7486609FD_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE0419E0)
#define CLASS_1_083521F7486609FD_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xE0419F0)
#define CLASS_1_083521F7486609FD_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xE041A10)
#define CLASS_1_083521F7486609FD_METHOD_1_170F1EAD3E667A14_OFFSET UNITYSDK_OFFSET(0xE03E4C0)
#define CLASS_1_083521F7486609FD_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xE03E450)
#define CLASS_1_083521F7486609FD_METHOD_1_34EDAC290116AD59_OFFSET UNITYSDK_OFFSET(0xE040D10)
#define CLASS_1_083521F7486609FD_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xE03E210)
#define CLASS_1_083521F7486609FD_METHOD_1_551239E3FC1E2EC5_OFFSET UNITYSDK_OFFSET(0xE03D5E0)
#define CLASS_1_083521F7486609FD_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xE03DDB0)
#define CLASS_1_083521F7486609FD_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0xE041230)
#define CLASS_1_083521F7486609FD_METHOD_1_7A6E6E70D91B3BBE_OFFSET UNITYSDK_OFFSET(0xE0405B0)
#define CLASS_1_083521F7486609FD_METHOD_1_7B295D9855C5B99B_OFFSET UNITYSDK_OFFSET(0xE040DA0)
#define CLASS_1_083521F7486609FD_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0xE03D990)
#define CLASS_1_083521F7486609FD_METHOD_1_AD6C285E0DE03394_OFFSET UNITYSDK_OFFSET(0xE040A20)
#define CLASS_1_083521F7486609FD_METHOD_1_BB103A30C7A76332_OFFSET UNITYSDK_OFFSET(0xE041A00)
#define CLASS_1_083521F7486609FD_METHOD_1_C04AE7480E02D64B_OFFSET UNITYSDK_OFFSET(0xE040F50)
#define CLASS_1_083521F7486609FD_METHOD_1_CA57F7131BF7F758_OFFSET UNITYSDK_OFFSET(0xE03EE80)
#define CLASS_1_083521F7486609FD_METHOD_1_ECDD4B6593FA2BB9_OFFSET UNITYSDK_OFFSET(0xE040780)
#define CLASS_1_083521F7486609FD_METHOD_1_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0xE041930)
#define CLASS_1_083521F7486609FD_METHOD_1_FEA6213BEBDF261B_OFFSET UNITYSDK_OFFSET(0xE03F210)
#define CLASS_1_083521F7486609FD_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xE041A20)
#define CLASS_1_083521F7486609FD__CCTOR_OFFSET UNITYSDK_OFFSET(0xE041A30)
#define CLASS_1_083521F7486609FD__CTOR_OFFSET UNITYSDK_OFFSET(0xE041040)

inline static constexpr unsigned int Class_1_083521F7486609FD_TypeDefinitionIndex = 59931;

class Class_1_083521F7486609FD : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_5F439A66B759DFD0*>** StaticGet_DDJNMNJEFJF()
	{
		return (::System::Comparison_1<::Class_1_5F439A66B759DFD0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_083521F7486609FD_TypeDefinitionIndex)->GetStaticField(0x66FA0);
	}
	static ::System::Int32* StaticGet_ILMPEJFKMFJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_083521F7486609FD_TypeDefinitionIndex)->GetStaticField(0x15470);
	}
	// static const ::System::Single FKFPHPFHPLG; // 0x0
	// static const ::System::Single LEHLHJMKKPE; // 0x0
	::RPG::Client::AirshipEmitter* DHOEAAPGHFK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5F439A66B759DFD0*>* IFCAPLOMACM; // 0x18
	::RPG::Client::AirlineWay* PLOCJFAHLPK; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* JLCLNDAEMML; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* BHEGIGJGKOB; // 0x30
	::System::String* JLKFFKGABBC; // 0x38
	::Class_1_5F439A66B759DFD0* LIGEPMNFLCO; // 0x40
	::System::UInt32 MJPPOIHKCCB; // 0x48
	::System::Single _TimeScale_k__BackingField; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_660* Method_1_551239E3FC1E2EC5(::UnityEngine::Transform* a1, ::System::UInt32 a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::Class_0_16E4307DCC419505_660*(*)(::UnityEngine::Transform*, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_551239E3FC1E2EC5_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_170F1EAD3E667A14(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_170F1EAD3E667A14_OFFSET))(this, a1);
	}

	::System::Single Method_1_ECDD4B6593FA2BB9(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_ECDD4B6593FA2BB9_OFFSET))(this, a1);
	}

	::System::Single Method_1_AD6C285E0DE03394(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_AD6C285E0DE03394_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEA6213BEBDF261B(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_FEA6213BEBDF261B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_34EDAC290116AD59(::Class_1_5F439A66B759DFD0* a1, ::Class_1_5F439A66B759DFD0* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_5F439A66B759DFD0*, ::Class_1_5F439A66B759DFD0*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_34EDAC290116AD59_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_C04AE7480E02D64B(::System::Single a1, ::RPG::Client::RacingDriveConfig* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::RPG::Client::RacingDriveConfig*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_C04AE7480E02D64B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_7B295D9855C5B99B(::Class_1_5F439A66B759DFD0* a1, ::Class_1_5F439A66B759DFD0* a2, ::RPG::Client::RacingDriveConfig* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_5F439A66B759DFD0*, ::Class_1_5F439A66B759DFD0*, ::RPG::Client::RacingDriveConfig*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_7B295D9855C5B99B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CA57F7131BF7F758(::Class_1_5F439A66B759DFD0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5F439A66B759DFD0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_CA57F7131BF7F758_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7A6E6E70D91B3BBE(::Class_1_5F439A66B759DFD0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5F439A66B759DFD0*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_7A6E6E70D91B3BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_EE97EFC752A55D2E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_EE97EFC752A55D2E_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_GET_PREFABPATH_OFFSET))(this);
	}

	::RPG::Client::Airline* Method_1_BB103A30C7A76332()
	{
		return ((::RPG::Client::Airline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_BB103A30C7A76332_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_SET_TIMESCALE_OFFSET))(this, a1);
	}
};
