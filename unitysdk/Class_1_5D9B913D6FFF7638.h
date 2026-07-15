#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1152;
class Class_1_4BC03BAAC61C4531;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5D9B913D6FFF7638_METHOD_1_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x16963B60)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_19548C12E1A8D895_OFFSET UNITYSDK_OFFSET(0x169639A0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_237B42BB1415FB36_OFFSET UNITYSDK_OFFSET(0x169634F0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x16963D60)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_33DDBEB77A8E3745_OFFSET UNITYSDK_OFFSET(0x16962B70)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_3EA22F185F401208_OFFSET UNITYSDK_OFFSET(0x16964EB0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0x16962AE0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x16962A90)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x169634A0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x16964F60)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_7440C1431DB23BBC_OFFSET UNITYSDK_OFFSET(0x16964660)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x169630B0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x169640F0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_B106BB95E59D723E_OFFSET UNITYSDK_OFFSET(0x16963840)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_B6BC1AB86061A135_1_OFFSET UNITYSDK_OFFSET(0x16963960)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_B6BC1AB86061A135_OFFSET UNITYSDK_OFFSET(0x16962B30)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_C710CD5E05DACF48_OFFSET UNITYSDK_OFFSET(0x16963610)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_D6DCBD205BD366A3_OFFSET UNITYSDK_OFFSET(0x16963C50)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_E20BC96B50A592B5_OFFSET UNITYSDK_OFFSET(0x16962A40)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_E6D8F60BB8632D5A_OFFSET UNITYSDK_OFFSET(0x16963CC0)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_ECA76B0205516C99_OFFSET UNITYSDK_OFFSET(0x16962E80)
#define CLASS_1_5D9B913D6FFF7638_METHOD_1_FBF29D25ECFEB227_OFFSET UNITYSDK_OFFSET(0x169647C0)
#define CLASS_1_5D9B913D6FFF7638__CTOR_OFFSET UNITYSDK_OFFSET(0x16962CA0)

inline static constexpr unsigned int Class_1_5D9B913D6FFF7638_TypeDefinitionIndex = 71180;

class Class_1_5D9B913D6FFF7638 : public ::System::Object
{
public:
	::RPG::GameCore::LevelNavNodeInfo Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x30
	::Class_1_4BC03BAAC61C4531* Field_1_4; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_5; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x48
	::System::UInt32 Field_1_7; // 0x50

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1, ::RPG::GameCore::LevelNavNodeInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_E20BC96B50A592B5()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_E20BC96B50A592B5_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_5CEC4607322705E5_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_B6BC1AB86061A135_OFFSET))(this);
	}

	static ::Class_1_5D9B913D6FFF7638* Method_1_33DDBEB77A8E3745(::Class_1_4BC03BAAC61C4531* a1, ::RPG::GameCore::LevelNavNodeInfo a2)
	{
		return ((::Class_1_5D9B913D6FFF7638*(*)(::Class_1_4BC03BAAC61C4531*, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_33DDBEB77A8E3745_OFFSET))(a1, a2);
	}

	::System::Void Method_1_ECA76B0205516C99(::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_ECA76B0205516C99_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_237B42BB1415FB36(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_237B42BB1415FB36_OFFSET))(this, a1);
	}

	::System::Void Method_1_C710CD5E05DACF48(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_C710CD5E05DACF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_B106BB95E59D723E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_B106BB95E59D723E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_B6BC1AB86061A135_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_19548C12E1A8D895()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_19548C12E1A8D895_OFFSET))(this);
	}

	::System::Boolean Method_1_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1152*>* Method_1_E6D8F60BB8632D5A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1152*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_E6D8F60BB8632D5A_OFFSET))(this);
	}

	::System::Void Method_1_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_7B411317D337F87A_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_D6DCBD205BD366A3()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_D6DCBD205BD366A3_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Boolean Method_1_7440C1431DB23BBC(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_7440C1431DB23BBC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1152*>* Method_1_FBF29D25ECFEB227(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1152*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_FBF29D25ECFEB227_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1152*>* Method_1_3EA22F185F401208(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1152*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_3EA22F185F401208_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9B913D6FFF7638_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}
};
