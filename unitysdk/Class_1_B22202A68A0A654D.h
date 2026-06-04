#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ILBattleMonsterConfigRow; }
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class ILEliteGroupConfigRow; }
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B22202A68A0A654D_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xAA03980)
#define CLASS_1_B22202A68A0A654D_METHOD_1_032AAF1CA9C9CE58_OFFSET UNITYSDK_OFFSET(0xAA03AE0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0xAA03250)
#define CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0xAA03270)
#define CLASS_1_B22202A68A0A654D_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAA03230)
#define CLASS_1_B22202A68A0A654D_METHOD_1_1642495E99BA2FDC_OFFSET UNITYSDK_OFFSET(0xAA03290)
#define CLASS_1_B22202A68A0A654D_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0xAA032A0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_409719413A147F0C_OFFSET UNITYSDK_OFFSET(0xAA039B0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_6D8E8D1FC2488E6B_OFFSET UNITYSDK_OFFSET(0xAA03300)
#define CLASS_1_B22202A68A0A654D_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0xAA03220)
#define CLASS_1_B22202A68A0A654D_METHOD_1_99D5CA958F67E07B_OFFSET UNITYSDK_OFFSET(0xAA04200)
#define CLASS_1_B22202A68A0A654D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xAA031C0)
#define CLASS_1_B22202A68A0A654D_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0xAA03210)
#define CLASS_1_B22202A68A0A654D_METHOD_1_C9DFB122603938B7_OFFSET UNITYSDK_OFFSET(0xAA03A80)
#define CLASS_1_B22202A68A0A654D_METHOD_1_D3B7AE0D15236248_OFFSET UNITYSDK_OFFSET(0xAA04670)
#define CLASS_1_B22202A68A0A654D__CTOR_OFFSET UNITYSDK_OFFSET(0xAA049B0)

inline static constexpr unsigned int Class_1_B22202A68A0A654D_TypeDefinitionIndex = 50660;

class Class_1_B22202A68A0A654D : public ::System::Object
{
public:
	::RPG::GameCore::ILBattleStageConfigRow* Field_1_0; // 0x10
	::RPG::GameCore::RtCharacterConfig* Field_1_1; // 0x18
	::RPG::GameCore::ILBattleMonsterConfigRow* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>* Field_1_3; // 0x28
	::RPG::GameCore::ILHardLevelGroupConfigRow* Field_1_4; // 0x30
	::RPG::GameCore::ILEliteGroupConfigRow* Field_1_5; // 0x38

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

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_2439C7815990B9DD_OFFSET))(this);
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

	::System::Void Method_1_032AAF1CA9C9CE58(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_032AAF1CA9C9CE58_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_D3B7AE0D15236248(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_D3B7AE0D15236248_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D8E8D1FC2488E6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22202A68A0A654D_METHOD_1_6D8E8D1FC2488E6B_OFFSET))(this);
	}
};
