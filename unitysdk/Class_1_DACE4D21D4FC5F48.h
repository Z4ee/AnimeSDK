#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DACE4D21D4FC5F48_CrowdLoadState.h"
#include "unitysdk/RPG/GameCore/LevelCrowdLoadPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5118EF5992B0E5A5;
class Class_1_B4575D4416857720;
class Class_1_EFADB1B66790E3B6;
namespace RPG::GameCore { class LevelCrowdBakedInfo; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class LevelCrowdMemberBakedInfo; }
namespace RPG::GameCore { class LevelCrowdMemberInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DACE4D21D4FC5F48_GET_DISTANCESORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xE028F50)
#define CLASS_1_DACE4D21D4FC5F48_GET_DISTANCESORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xE028F70)
#define CLASS_1_DACE4D21D4FC5F48_GET_DISTANCESQRTOCENTER_OFFSET UNITYSDK_OFFSET(0xE028F90)
#define CLASS_1_DACE4D21D4FC5F48_GET_ISINVIEW_OFFSET UNITYSDK_OFFSET(0xE029010)
#define CLASS_1_DACE4D21D4FC5F48_GET_LOADPRIORITY_OFFSET UNITYSDK_OFFSET(0xE028F40)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xE02A410)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xE02B750)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE028FB0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0xE028EB0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_272068886DA88B16_1_OFFSET UNITYSDK_OFFSET(0xE02B300)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_272068886DA88B16_OFFSET UNITYSDK_OFFSET(0xE02B1D0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE02ADE0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_5099CDC87B6C3D01_OFFSET UNITYSDK_OFFSET(0xE029030)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0xE02A5A0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xE02B550)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0xE02B010)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_51CFFE2AF748ECD7_2_OFFSET UNITYSDK_OFFSET(0xE029980)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xE02AF70)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xE02B610)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_56B62A4FF123A740_OFFSET UNITYSDK_OFFSET(0xE02ADD0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xE02A170)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xE02B0B0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_743CEF25906E83D5_OFFSET UNITYSDK_OFFSET(0xE02A820)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_808A56A256840289_OFFSET UNITYSDK_OFFSET(0xE02AD10)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xE029E90)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0xE02A020)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_AFAEEA2A265C17B6_OFFSET UNITYSDK_OFFSET(0xE02A330)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0xE02B4B0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0xE02B7C0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE02A540)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xE028EE0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xE029F40)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0xE02AED0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_E7EF6BC52B28648C_2_OFFSET UNITYSDK_OFFSET(0xE02B6B0)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xE02AE30)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE028F30)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xE028F00)
#define CLASS_1_DACE4D21D4FC5F48_METHOD_1_FDB878EE730B6AA4_OFFSET UNITYSDK_OFFSET(0xE02B430)
#define CLASS_1_DACE4D21D4FC5F48_SET_DISTANCESORTPRIORITY_OFFSET UNITYSDK_OFFSET(0xE028F60)
#define CLASS_1_DACE4D21D4FC5F48_SET_DISTANCESORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xE028F80)
#define CLASS_1_DACE4D21D4FC5F48_SET_DISTANCESQRTOCENTER_OFFSET UNITYSDK_OFFSET(0xE028FA0)
#define CLASS_1_DACE4D21D4FC5F48_SET_ISINVIEW_OFFSET UNITYSDK_OFFSET(0xE029020)
#define CLASS_1_DACE4D21D4FC5F48__CCTOR_OFFSET UNITYSDK_OFFSET(0xE02B8B0)
#define CLASS_1_DACE4D21D4FC5F48__CTOR_OFFSET UNITYSDK_OFFSET(0xE029130)

inline static constexpr unsigned int Class_1_DACE4D21D4FC5F48_TypeDefinitionIndex = 63818;

class Class_1_DACE4D21D4FC5F48 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DACE4D21D4FC5F48_TypeDefinitionIndex)->GetStaticField(0x3A90);
	}
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	::Class_1_EFADB1B66790E3B6* Field_1_24; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B4575D4416857720*>* Field_1_11; // 0x18
	::RPG::GameCore::LevelCrowdInfo* Field_1_12; // 0x20
	::Class_1_5118EF5992B0E5A5* Field_1_23; // 0x28
	::RPG::GameCore::RuntimeGroupInfo* Field_1_0; // 0x30
	::Class_1_DACE4D21D4FC5F48_CrowdLoadState Field_1_10; // 0x38
	::System::Int32 _DistanceSortPriority_k__BackingField; // 0x3C
	::UnityEngine::Vector3 Field_1_9; // 0x40
	::UnityEngine::Vector3 Field_1_8; // 0x4C
	::System::Single Field_1_15; // 0x58
	::System::Int32 Field_1_16; // 0x5C
	::System::Int32 Field_1_13; // 0x60
	::RPG::GameCore::LevelCrowdLoadPriority _LoadPriority_k__BackingField; // 0x64
	::System::Boolean Field_1_18; // 0x68
	::System::Boolean Field_1_14; // 0x69
	::System::Boolean Field_1_22; // 0x6A
	::System::Boolean Field_1_19; // 0x6B
	::System::Single _DistanceSortWeight_k__BackingField; // 0x6C
	::System::Single _DistanceSqrToCenter_k__BackingField; // 0x70
	::System::Boolean Field_1_20; // 0x74
	::System::Boolean Field_1_21; // 0x75
	::System::Boolean _IsInView_k__BackingField; // 0x76
	::System::Single Field_1_17; // 0x78

	::System::Void _ctor(::RPG::GameCore::LevelCrowdInfo* a1, ::RPG::GameCore::LevelCrowdBakedInfo* a2, ::RPG::GameCore::RuntimeGroupInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCrowdInfo*, ::RPG::GameCore::LevelCrowdBakedInfo*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_23B573F7FD360F67_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::LevelCrowdLoadPriority get_LoadPriority()
	{
		return ((::RPG::GameCore::LevelCrowdLoadPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_GET_LOADPRIORITY_OFFSET))(this);
	}

	::System::Int32 get_DistanceSortPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_GET_DISTANCESORTPRIORITY_OFFSET))(this);
	}

	::System::Void set_DistanceSortPriority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_SET_DISTANCESORTPRIORITY_OFFSET))(this, value);
	}

	::System::Single get_DistanceSortWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_GET_DISTANCESORTWEIGHT_OFFSET))(this);
	}

	::System::Void set_DistanceSortWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_SET_DISTANCESORTWEIGHT_OFFSET))(this, value);
	}

	::System::Single get_DistanceSqrToCenter()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_GET_DISTANCESQRTOCENTER_OFFSET))(this);
	}

	::System::Void set_DistanceSqrToCenter(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_SET_DISTANCESQRTOCENTER_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsInView()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_GET_ISINVIEW_OFFSET))(this);
	}

	::System::Void set_IsInView(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_SET_ISINVIEW_OFFSET))(this, value);
	}

	static ::RPG::GameCore::LevelCrowdMemberBakedInfo* Method_1_5099CDC87B6C3D01(::RPG::GameCore::LevelCrowdMemberInfo* a1, ::RPG::GameCore::LevelCrowdBakedInfo* a2)
	{
		return ((::RPG::GameCore::LevelCrowdMemberBakedInfo*(*)(::RPG::GameCore::LevelCrowdMemberInfo*, ::RPG::GameCore::LevelCrowdBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_5099CDC87B6C3D01_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_AFAEEA2A265C17B6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_AFAEEA2A265C17B6_OFFSET))(this, a1);
	}

	::Class_1_DACE4D21D4FC5F48_CrowdLoadState Method_1_56B62A4FF123A740()
	{
		return ((::Class_1_DACE4D21D4FC5F48_CrowdLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_56B62A4FF123A740_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_272068886DA88B16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_272068886DA88B16_OFFSET))(this);
	}

	::System::Void Method_1_272068886DA88B16_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_272068886DA88B16_1_OFFSET))(this);
	}

	::Class_1_B4575D4416857720* Method_1_FDB878EE730B6AA4(::System::UInt32 a1)
	{
		return ((::Class_1_B4575D4416857720*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_FDB878EE730B6AA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void Method_1_515AB539783606E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_515AB539783606E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_E7EF6BC52B28648C_2_OFFSET))(this);
	}

	::System::Void Method_1_743CEF25906E83D5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_743CEF25906E83D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_808A56A256840289_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DACE4D21D4FC5F48_METHOD_1_51CFFE2AF748ECD7_2_OFFSET))(this);
	}
};
