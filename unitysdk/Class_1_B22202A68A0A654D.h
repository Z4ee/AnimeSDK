#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_444;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ILBattleMonsterConfigRow; }
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class ILEliteGroupConfigRow; }
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B22202A68A0A654D_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xECCF790)
#define CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0xECCF1A0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0xECCF1C0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xECCF180)
#define CLASS_1_B22202A68A0A654D_METHOD_1_1642495E99BA2FDC_OFFSET UNITYSDK_OFFSET(0xECCF1E0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_2217E3E16DD2A199_OFFSET UNITYSDK_OFFSET(0xECD0460)
#define CLASS_1_B22202A68A0A654D_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0xECCF1F0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_2CF1BF9704A16F81_OFFSET UNITYSDK_OFFSET(0xECCF8F0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_409719413A147F0C_OFFSET UNITYSDK_OFFSET(0xECCF7C0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0xECCF250)
#define CLASS_1_B22202A68A0A654D_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0xECCF170)
#define CLASS_1_B22202A68A0A654D_METHOD_1_99D5CA958F67E07B_OFFSET UNITYSDK_OFFSET(0xECCFFD0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xECCF100)
#define CLASS_1_B22202A68A0A654D_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0xECCF160)
#define CLASS_1_B22202A68A0A654D_METHOD_1_C9DFB122603938B7_OFFSET UNITYSDK_OFFSET(0xECCF890)
#define CLASS_1_B22202A68A0A654D__CTOR_OFFSET UNITYSDK_OFFSET(0xECD0BD0)

inline static constexpr unsigned int Class_1_B22202A68A0A654D_TypeDefinitionIndex = 49993;

class Class_1_B22202A68A0A654D : public ::System::Object
{
public:
	::RPG::GameCore::ILBattleStageConfigRow* Field_1_0; // 0x10
	::RPG::GameCore::ILBattleMonsterConfigRow* Field_1_3; // 0x18
	::RPG::GameCore::ILHardLevelGroupConfigRow* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Field_1_5; // 0x28
	::RPG::GameCore::ILEliteGroupConfigRow* Field_1_2; // 0x30
	::RPG::GameCore::RtCharacterConfig* Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::RPG::GameCore::ILBattleCharacterLocation Method_1_1642495E99BA2FDC()
	{
		return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_1642495E99BA2FDC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_GET_CHARACTERNAME_OFFSET))(this);
	}

	::Class_1_B22202A68A0A654D* Method_1_409719413A147F0C(::RPG::GameCore::ILBattleMonsterConfigRow* a1, ::RPG::GameCore::ILBattleStageConfigRow* a2)
	{
		return ((::Class_1_B22202A68A0A654D*(*)(::PVOID, ::RPG::GameCore::ILBattleMonsterConfigRow*, ::RPG::GameCore::ILBattleStageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_409719413A147F0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9DFB122603938B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_C9DFB122603938B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D5CA958F67E07B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_99D5CA958F67E07B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CF1BF9704A16F81(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_2CF1BF9704A16F81_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_2217E3E16DD2A199(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_2217E3E16DD2A199_OFFSET))(this, a1);
	}

	::System::Void Method_1_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_4679E7840A7526E1_OFFSET))(this);
	}
};
