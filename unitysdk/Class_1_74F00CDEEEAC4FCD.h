#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_74F00CDEEEAC4FCD_Struct_2_C6A3D64BC4929938.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_874D298FDA22F5AD;
namespace RPG::GameCore { class ElationSkillResBakeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SingleElationSkillResBakeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_01042AF2091BA594_OFFSET UNITYSDK_OFFSET(0x158C1F90)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x158C2270)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x158C1A90)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_3DE37A719ABB9E03_OFFSET UNITYSDK_OFFSET(0x158C12E0)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_440B06879AC0EEDA_OFFSET UNITYSDK_OFFSET(0x158C1B70)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x158C2280)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_5695FF7BEF1E5605_OFFSET UNITYSDK_OFFSET(0x158C2030)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_8DD622764B270CC7_OFFSET UNITYSDK_OFFSET(0x158C1160)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x158C1AF0)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_9856301BCC37EB00_OFFSET UNITYSDK_OFFSET(0x158C1200)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_9B6E93A693534838_OFFSET UNITYSDK_OFFSET(0x158C1680)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x158C2260)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_E386ACE94F30DA8A_OFFSET UNITYSDK_OFFSET(0x158C1930)
#define CLASS_1_74F00CDEEEAC4FCD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x158C2240)
#define CLASS_1_74F00CDEEEAC4FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2290)

inline static constexpr unsigned int Class_1_74F00CDEEEAC4FCD_TypeDefinitionIndex = 55626;

class Class_1_74F00CDEEEAC4FCD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_74F00CDEEEAC4FCD_Struct_2_C6A3D64BC4929938>* EALOHJKCDGO; // 0x10
	::System::String* LIJNCANLLMC; // 0x18
	::System::String* EBCJLEJPGPC; // 0x20
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
	::Class_1_874D298FDA22F5AD* GDLNOPLNNJC; // 0x30
	::RPG::GameCore::SingleElationSkillResBakeConfig* HNLPJPJFNOL; // 0x38
	::RPG::GameCore::ElationSkillResBakeConfig* MDANAGOKBBI; // 0x40
	::System::Single MLNKKEDOHMF; // 0x48
	::System::Single PCOBIKOHGKB; // 0x4C
	::System::Single HAMLEPGAIFC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD__CTOR_OFFSET))(this);
	}

	static ::Class_1_74F00CDEEEAC4FCD* Method_1_8DD622764B270CC7(::RPG::GameCore::TaskContext* a1)
	{
		return ((::Class_1_74F00CDEEEAC4FCD*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_8DD622764B270CC7_OFFSET))(a1);
	}

	static ::Class_1_74F00CDEEEAC4FCD* Method_1_9856301BCC37EB00(::RPG::GameCore::TaskContext* a1)
	{
		return ((::Class_1_74F00CDEEEAC4FCD*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_9856301BCC37EB00_OFFSET))(a1);
	}

	::System::Void Method_1_9B6E93A693534838(::Class_1_874D298FDA22F5AD* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_874D298FDA22F5AD*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_9B6E93A693534838_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E386ACE94F30DA8A(::RPG::GameCore::SkillType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_E386ACE94F30DA8A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_3DE37A719ABB9E03(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_3DE37A719ABB9E03_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_440B06879AC0EEDA(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_440B06879AC0EEDA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_01042AF2091BA594(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_01042AF2091BA594_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5695FF7BEF1E5605(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_5695FF7BEF1E5605_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F00CDEEEAC4FCD_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
