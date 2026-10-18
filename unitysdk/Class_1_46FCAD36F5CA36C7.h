#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1334;
class Class_1_4BC03BAAC61C4531;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0xF232310)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_19548C12E1A8D895_OFFSET UNITYSDK_OFFSET(0xF232150)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_237B42BB1415FB36_OFFSET UNITYSDK_OFFSET(0xF231CA0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xF232510)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_33DDBEB77A8E3745_OFFSET UNITYSDK_OFFSET(0xF230C80)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_3EA22F185F401208_OFFSET UNITYSDK_OFFSET(0xF233660)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0xF230BF0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xF230BA0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xF231C50)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_7440C1431DB23BBC_OFFSET UNITYSDK_OFFSET(0xF232E10)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0xF2313F0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_877A37C4E410E64A_OFFSET UNITYSDK_OFFSET(0xF231060)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xF2328A0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xF233710)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_B106BB95E59D723E_OFFSET UNITYSDK_OFFSET(0xF231FF0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xF2317E0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_B6BC1AB86061A135_1_OFFSET UNITYSDK_OFFSET(0xF232110)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_B6BC1AB86061A135_OFFSET UNITYSDK_OFFSET(0xF230C40)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_C710CD5E05DACF48_OFFSET UNITYSDK_OFFSET(0xF231DC0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_D6DCBD205BD366A3_OFFSET UNITYSDK_OFFSET(0xF232400)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_E20BC96B50A592B5_OFFSET UNITYSDK_OFFSET(0xF230B50)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_E6D8F60BB8632D5A_OFFSET UNITYSDK_OFFSET(0xF232470)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_EDCDF3949C741D00_OFFSET UNITYSDK_OFFSET(0xF2318E0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xF231BC0)
#define CLASS_1_46FCAD36F5CA36C7_METHOD_1_FBF29D25ECFEB227_OFFSET UNITYSDK_OFFSET(0xF232F70)
#define CLASS_1_46FCAD36F5CA36C7__CTOR_OFFSET UNITYSDK_OFFSET(0xF230DB0)

inline static constexpr unsigned int Class_1_46FCAD36F5CA36C7_TypeDefinitionIndex = 74606;

class Class_1_46FCAD36F5CA36C7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EEEABANGLBD; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* LILJPCANBPL; // 0x18
	::RPG::GameCore::LevelNavNodeInfo IBBOLGKFEIB; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* KEPPJEJPJDA; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* BMPKEKHFIEO; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* LJKIOJAJOMN; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* HKNKKPADMHB; // 0x48
	::Class_1_4BC03BAAC61C4531* DCOPELFHOLO; // 0x50
	::System::UInt32 FFCJAFFJGNH; // 0x58

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1, ::RPG::GameCore::LevelNavNodeInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_E20BC96B50A592B5()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_E20BC96B50A592B5_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_5CEC4607322705E5_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_B6BC1AB86061A135_OFFSET))(this);
	}

	static ::Class_1_46FCAD36F5CA36C7* Method_1_33DDBEB77A8E3745(::Class_1_4BC03BAAC61C4531* a1, ::RPG::GameCore::LevelNavNodeInfo a2)
	{
		return ((::Class_1_46FCAD36F5CA36C7*(*)(::Class_1_4BC03BAAC61C4531*, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_33DDBEB77A8E3745_OFFSET))(a1, a2);
	}

	::System::Void Method_1_877A37C4E410E64A(::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_877A37C4E410E64A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDCDF3949C741D00(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_EDCDF3949C741D00_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_237B42BB1415FB36(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_237B42BB1415FB36_OFFSET))(this, a1);
	}

	::System::Void Method_1_C710CD5E05DACF48(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_C710CD5E05DACF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_B106BB95E59D723E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_B106BB95E59D723E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_B6BC1AB86061A135_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_19548C12E1A8D895()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_19548C12E1A8D895_OFFSET))(this);
	}

	::System::Boolean Method_1_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1334*>* Method_1_E6D8F60BB8632D5A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1334*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_E6D8F60BB8632D5A_OFFSET))(this);
	}

	::System::Void Method_1_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_7B411317D337F87A_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_D6DCBD205BD366A3()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_D6DCBD205BD366A3_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Boolean Method_1_7440C1431DB23BBC(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_7440C1431DB23BBC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1334*>* Method_1_FBF29D25ECFEB227(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1334*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_FBF29D25ECFEB227_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1334*>* Method_1_3EA22F185F401208(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1334*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_3EA22F185F401208_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FCAD36F5CA36C7_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}
};
