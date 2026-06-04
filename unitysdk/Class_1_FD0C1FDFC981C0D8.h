#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1106;
class Class_1_4BC03BAAC61C4531;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeInfo; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_0AEB9299748730F8_OFFSET UNITYSDK_OFFSET(0xD7F1060)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_114781D79D91EA39_OFFSET UNITYSDK_OFFSET(0xD7F0300)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_1C0A5CAB68440997_OFFSET UNITYSDK_OFFSET(0xD7F0310)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD7F0F90)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_237B42BB1415FB36_OFFSET UNITYSDK_OFFSET(0xD7F09E0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xD7F1100)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_457E58CBA89C9A1F_OFFSET UNITYSDK_OFFSET(0xD7F02A0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_53C264CD38CE5ECE_OFFSET UNITYSDK_OFFSET(0xD7F1CA0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xD7F0990)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xD7F1D20)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_7440C1431DB23BBC_OFFSET UNITYSDK_OFFSET(0xD7F1620)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B106BB95E59D723E_OFFSET UNITYSDK_OFFSET(0xD7F0D30)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B2041A37C51A785E_OFFSET UNITYSDK_OFFSET(0xD7F1780)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B6BC1AB86061A135_OFFSET UNITYSDK_OFFSET(0xD7F0E50)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_C53828012EF20D6F_OFFSET UNITYSDK_OFFSET(0xD7F0E90)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_C710CD5E05DACF48_OFFSET UNITYSDK_OFFSET(0xD7F0B00)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D6DCBD205BD366A3_OFFSET UNITYSDK_OFFSET(0xD7F0FF0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0xD7F02E0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xD7F02C0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xD7F1320)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xD7F0750)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_F1DEA206AB427050_OFFSET UNITYSDK_OFFSET(0xD7F0560)
#define CLASS_1_FD0C1FDFC981C0D8__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F0390)

inline static constexpr unsigned int Class_1_FD0C1FDFC981C0D8_TypeDefinitionIndex = 69657;

class Class_1_FD0C1FDFC981C0D8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::Class_1_4BC03BAAC61C4531* Field_1_1; // 0x18
	::RPG::GameCore::LevelNavNodeInfo* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x48

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1, ::RPG::GameCore::LevelNavNodeInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::RPG::GameCore::LevelNavNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_457E58CBA89C9A1F()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_457E58CBA89C9A1F_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_114781D79D91EA39()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_114781D79D91EA39_OFFSET))(this);
	}

	static ::Class_1_FD0C1FDFC981C0D8* Method_1_1C0A5CAB68440997(::Class_1_4BC03BAAC61C4531* a1, ::RPG::GameCore::LevelNavNodeInfo* a2)
	{
		return ((::Class_1_FD0C1FDFC981C0D8*(*)(::Class_1_4BC03BAAC61C4531*, ::RPG::GameCore::LevelNavNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_1C0A5CAB68440997_OFFSET))(a1, a2);
	}

	::System::Void Method_1_F1DEA206AB427050(::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_F1DEA206AB427050_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_237B42BB1415FB36(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_237B42BB1415FB36_OFFSET))(this, a1);
	}

	::System::Void Method_1_C710CD5E05DACF48(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_C710CD5E05DACF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_B106BB95E59D723E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B106BB95E59D723E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B6BC1AB86061A135_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_C53828012EF20D6F()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_C53828012EF20D6F_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1106*>* Method_1_0AEB9299748730F8()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1106*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_0AEB9299748730F8_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_D6DCBD205BD366A3()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D6DCBD205BD366A3_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Boolean Method_1_7440C1431DB23BBC(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_7440C1431DB23BBC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1106*>* Method_1_B2041A37C51A785E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1106*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B2041A37C51A785E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1106*>* Method_1_53C264CD38CE5ECE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1106*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_53C264CD38CE5ECE_OFFSET))(this, a1);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}
};
