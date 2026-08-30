#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_566;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterAnimZone; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E7811A222424F15E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16102380)
#define CLASS_1_E7811A222424F15E_GET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x16145440)
#define CLASS_1_E7811A222424F15E_GET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x16145460)
#define CLASS_1_E7811A222424F15E_GET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x16145480)
#define CLASS_1_E7811A222424F15E_METHOD_1_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x161036F0)
#define CLASS_1_E7811A222424F15E_METHOD_1_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x16103BC0)
#define CLASS_1_E7811A222424F15E_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x16101700)
#define CLASS_1_E7811A222424F15E_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x16103440)
#define CLASS_1_E7811A222424F15E_METHOD_1_18D9238B9C310BFF_1_OFFSET UNITYSDK_OFFSET(0x16103750)
#define CLASS_1_E7811A222424F15E_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x161024F0)
#define CLASS_1_E7811A222424F15E_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x161039E0)
#define CLASS_1_E7811A222424F15E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16103A50)
#define CLASS_1_E7811A222424F15E_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x16103890)
#define CLASS_1_E7811A222424F15E_METHOD_1_387EA1BE4F9FC1D2_OFFSET UNITYSDK_OFFSET(0x16145100)
#define CLASS_1_E7811A222424F15E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16103990)
#define CLASS_1_E7811A222424F15E_METHOD_1_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x16144FB0)
#define CLASS_1_E7811A222424F15E_METHOD_1_6369315678AD09E9_OFFSET UNITYSDK_OFFSET(0x161023D0)
#define CLASS_1_E7811A222424F15E_METHOD_1_672E3DECEBB4A051_OFFSET UNITYSDK_OFFSET(0x16103AD0)
#define CLASS_1_E7811A222424F15E_METHOD_1_75AD7F4D4C3BB765_OFFSET UNITYSDK_OFFSET(0x16101D50)
#define CLASS_1_E7811A222424F15E_METHOD_1_8B6CCAB22CD6DA6F_OFFSET UNITYSDK_OFFSET(0x16102640)
#define CLASS_1_E7811A222424F15E_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x16103560)
#define CLASS_1_E7811A222424F15E_SET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x16145450)
#define CLASS_1_E7811A222424F15E_SET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x16145470)
#define CLASS_1_E7811A222424F15E_SET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x16145490)
#define CLASS_1_E7811A222424F15E__CTOR_OFFSET UNITYSDK_OFFSET(0x16101600)

inline static constexpr unsigned int Class_1_E7811A222424F15E_TypeDefinitionIndex = 56033;

class Class_1_E7811A222424F15E : public ::System::Object
{
public:
	// static const ::System::Single OLBEKAICFJI; // 0x0
	::RPG::GameCore::CharacterAnimZone* _CharacterAnimZoneRef_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_566* EMMBDEMJDJA; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureAnimStateType, ::Class_0_16E4307DCC419505_566*>* EHNOFFAOOLJ; // 0x20
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x28
	::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x30
	::System::Boolean _HasMoveSinceTeleport_k__BackingField; // 0x38
	::System::Boolean MBBGDCFNDPF; // 0x39
	::System::Single IGHNAFDGGPJ; // 0x3C
	::RPG::GameCore::AdventureAnimStateType _CurrentLogicStateType_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::RPG::GameCore::CharacterAnimZone* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_6369315678AD09E9()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_6369315678AD09E9_OFFSET))(this);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_18D9238B9C310BFF_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_18D9238B9C310BFF_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_00D9C214C63942A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_00D9C214C63942A7_OFFSET))(this);
	}

	::System::Void Method_1_75AD7F4D4C3BB765(::RPG::GameCore::AdventureAnimStateType a1, ::System::Boolean a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_75AD7F4D4C3BB765_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void Method_1_8B6CCAB22CD6DA6F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_8B6CCAB22CD6DA6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_672E3DECEBB4A051(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_672E3DECEBB4A051_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Boolean Method_1_387EA1BE4F9FC1D2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_387EA1BE4F9FC1D2_OFFSET))(this);
	}

	::RPG::GameCore::CharacterAnimZone* get_CharacterAnimZoneRef()
	{
		return ((::RPG::GameCore::CharacterAnimZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_GET_CHARACTERANIMZONEREF_OFFSET))(this);
	}

	::System::Void set_CharacterAnimZoneRef(::RPG::GameCore::CharacterAnimZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_SET_CHARACTERANIMZONEREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureAnimStateType get_CurrentLogicStateType()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_GET_CURRENTLOGICSTATETYPE_OFFSET))(this);
	}

	::System::Void set_CurrentLogicStateType(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_SET_CURRENTLOGICSTATETYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_HasMoveSinceTeleport()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_GET_HASMOVESINCETELEPORT_OFFSET))(this);
	}

	::System::Void set_HasMoveSinceTeleport(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_SET_HASMOVESINCETELEPORT_OFFSET))(this, a1);
	}
};
