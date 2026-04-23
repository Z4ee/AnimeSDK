#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1056;
class Class_1_BE0E97EFC15B9DBB;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeInfo; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_0633657C741FA40C_OFFSET UNITYSDK_OFFSET(0x12A555A0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_114781D79D91EA39_OFFSET UNITYSDK_OFFSET(0x12A54970)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_1C0A5CAB68440997_OFFSET UNITYSDK_OFFSET(0x12A54980)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12A554D0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x12A55660)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_457E58CBA89C9A1F_OFFSET UNITYSDK_OFFSET(0x12A54910)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_529667A9A98E3E14_OFFSET UNITYSDK_OFFSET(0x12A54BD0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_608DF549DA17D200_OFFSET UNITYSDK_OFFSET(0x12A55B40)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0x12A55090)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x12A54FB0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_7810D50B558ECBD7_OFFSET UNITYSDK_OFFSET(0x12A56160)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x12A55000)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B2041A37C51A785E_OFFSET UNITYSDK_OFFSET(0x12A55CA0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B6BC1AB86061A135_OFFSET UNITYSDK_OFFSET(0x12A55390)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_C53828012EF20D6F_OFFSET UNITYSDK_OFFSET(0x12A553D0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D6DCBD205BD366A3_OFFSET UNITYSDK_OFFSET(0x12A55530)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x12A54950)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x12A54930)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x12A55890)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x12A54D60)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x12A561E0)
#define CLASS_1_FD0C1FDFC981C0D8_METHOD_1_F15878FE8A90EF23_OFFSET UNITYSDK_OFFSET(0x12A55270)
#define CLASS_1_FD0C1FDFC981C0D8__CTOR_OFFSET UNITYSDK_OFFSET(0x12A54A00)

inline static constexpr unsigned int Class_1_FD0C1FDFC981C0D8_TypeDefinitionIndex = 68845;

class Class_1_FD0C1FDFC981C0D8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x20
	::Class_1_BE0E97EFC15B9DBB* Field_1_0; // 0x28
	::RPG::GameCore::LevelNavNodeInfo* Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_3; // 0x40
	::System::UInt32 Field_1_7; // 0x48

	::System::Void _ctor(::Class_1_BE0E97EFC15B9DBB* a1, ::RPG::GameCore::LevelNavNodeInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*, ::RPG::GameCore::LevelNavNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8__CTOR_OFFSET))(this, a1, a2);
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

	static ::Class_1_FD0C1FDFC981C0D8* Method_1_1C0A5CAB68440997(::Class_1_BE0E97EFC15B9DBB* a1, ::RPG::GameCore::LevelNavNodeInfo* a2)
	{
		return ((::Class_1_FD0C1FDFC981C0D8*(*)(::Class_1_BE0E97EFC15B9DBB*, ::RPG::GameCore::LevelNavNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_1C0A5CAB68440997_OFFSET))(a1, a2);
	}

	::System::Void Method_1_529667A9A98E3E14(::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_529667A9A98E3E14_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_6950DFC9E62DCDC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_F15878FE8A90EF23(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_F15878FE8A90EF23_OFFSET))(this, a1, a2);
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

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1056*>* Method_1_0633657C741FA40C()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1056*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_0633657C741FA40C_OFFSET))(this);
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

	::System::Boolean Method_1_608DF549DA17D200(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_608DF549DA17D200_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1056*>* Method_1_B2041A37C51A785E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1056*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_B2041A37C51A785E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1056*>* Method_1_7810D50B558ECBD7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1056*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_7810D50B558ECBD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD0C1FDFC981C0D8_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}
};
