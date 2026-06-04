#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_2_F1C3EBA366E084A2;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_44637C6D4CD7073A_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xA96DF30)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_1269AF86FE25AECE_OFFSET UNITYSDK_OFFSET(0xA96E040)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0xA96E1A0)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xA96D600)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_53A40FD52B2BEC3B_OFFSET UNITYSDK_OFFSET(0xA96D6E0)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_56C46243AEA2C868_OFFSET UNITYSDK_OFFSET(0xA96DD20)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xA96D810)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA96E0B0)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_6A666EA56E80EFC0_OFFSET UNITYSDK_OFFSET(0xA96DC20)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_6ECB8D11B438CB8D_OFFSET UNITYSDK_OFFSET(0xA96D590)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA96E030)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_77B9575FEB2524A7_OFFSET UNITYSDK_OFFSET(0xA96D8A0)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_BBE3E1E8BB1B6701_OFFSET UNITYSDK_OFFSET(0xA96DF40)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_C2C495C915C952BA_OFFSET UNITYSDK_OFFSET(0xA96E110)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_DE86B869D175F16E_OFFSET UNITYSDK_OFFSET(0xA96DEB0)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_DFEE7C9AB40CC542_OFFSET UNITYSDK_OFFSET(0xA96DFA0)
#define CLASS_2_44637C6D4CD7073A_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA96D530)
#define CLASS_2_44637C6D4CD7073A__CTOR_OFFSET UNITYSDK_OFFSET(0xA96D4E0)

inline static constexpr unsigned int Class_2_44637C6D4CD7073A_TypeDefinitionIndex = 53276;

class Class_2_44637C6D4CD7073A : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x68
	::RPG::GameCore::GameEntity* Field_2_2; // 0x70
	::Class_2_F1C3EBA366E084A2* Field_2_3; // 0x78
	::Class_2_F67FF7EB526BF85C* Field_2_4; // 0x80
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x88
	::System::Boolean Field_2_6; // 0x8C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_6ECB8D11B438CB8D(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_6ECB8D11B438CB8D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_53A40FD52B2BEC3B(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_53A40FD52B2BEC3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_6A666EA56E80EFC0(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_6A666EA56E80EFC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_459C79521BFE514E_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_DE86B869D175F16E()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_DE86B869D175F16E_OFFSET))(this);
	}

	::System::Boolean Method_2_56C46243AEA2C868(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_56C46243AEA2C868_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_77B9575FEB2524A7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_77B9575FEB2524A7_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_BBE3E1E8BB1B6701(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_BBE3E1E8BB1B6701_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DFEE7C9AB40CC542(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_DFEE7C9AB40CC542_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_1269AF86FE25AECE(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_1269AF86FE25AECE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C2C495C915C952BA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_C2C495C915C952BA_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44637C6D4CD7073A_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}
};
