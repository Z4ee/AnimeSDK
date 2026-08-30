#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_44;
class Class_2_230F5EDDB35DAEBA;
class Class_2_8D31566281692B25;
class Class_3_CD59F26A5F0E803D;
namespace RPG::Client::B51Racing { class RoadRashGameHitNotifyData; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_581DFEB32FDD6BFB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB6C7F40)
#define CLASS_1_581DFEB32FDD6BFB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6C7E00)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xB6C9F30)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_1C5EC54583F2FF24_OFFSET UNITYSDK_OFFSET(0xB6C9760)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_2DEEA79B32EE07EF_OFFSET UNITYSDK_OFFSET(0xB6C9820)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_4328664CCEFDF068_OFFSET UNITYSDK_OFFSET(0xB6C9ED0)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_48EBFD64274511BA_OFFSET UNITYSDK_OFFSET(0xB6C9920)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_74D11F1D0D54F865_OFFSET UNITYSDK_OFFSET(0xB6C9BA0)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_84D5E5392EC8B64C_OFFSET UNITYSDK_OFFSET(0xB6C86E0)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_AEAC2158E21C1389_OFFSET UNITYSDK_OFFSET(0xB6C93D0)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_B1A0AB9FF5F449D0_OFFSET UNITYSDK_OFFSET(0xB6C92C0)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_C35025A2FE501F53_OFFSET UNITYSDK_OFFSET(0xB6C9130)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_CF1B204D77F0D753_OFFSET UNITYSDK_OFFSET(0xB6C8F60)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_DBED1E489D4A0124_OFFSET UNITYSDK_OFFSET(0xB6C9490)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xB6C9E00)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_E80CFE9791FF7C5A_1_OFFSET UNITYSDK_OFFSET(0xB6C96A0)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_E80CFE9791FF7C5A_OFFSET UNITYSDK_OFFSET(0xB6C95E0)
#define CLASS_1_581DFEB32FDD6BFB_METHOD_1_FB8F6D4426D7E6FD_OFFSET UNITYSDK_OFFSET(0xB6C9AB0)
#define CLASS_1_581DFEB32FDD6BFB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB6C7EC0)
#define CLASS_1_581DFEB32FDD6BFB__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C7DF0)

inline static constexpr unsigned int Class_1_581DFEB32FDD6BFB_TypeDefinitionIndex = 75529;

class Class_1_581DFEB32FDD6BFB : public ::System::Object
{
public:
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x10
	::Class_2_8D31566281692B25* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::Class_2_8D31566281692B25* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8D31566281692B25*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_EXECUTE_OFFSET))(this);
	}

	::System::Int32 Method_1_84D5E5392EC8B64C(::Class_2_230F5EDDB35DAEBA* a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_84D5E5392EC8B64C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CF1B204D77F0D753(::Class_1_43BD383C98B4C0C5_44* a1, ::Class_2_230F5EDDB35DAEBA* a2, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_44*, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_CF1B204D77F0D753_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C35025A2FE501F53(::Class_1_43BD383C98B4C0C5_44* a1, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_44*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_C35025A2FE501F53_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_2DEEA79B32EE07EF(::Class_1_43BD383C98B4C0C5_44* a1, ::Class_2_230F5EDDB35DAEBA* a2, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_44*, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_2DEEA79B32EE07EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_48EBFD64274511BA(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_48EBFD64274511BA_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_B1A0AB9FF5F449D0(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_B1A0AB9FF5F449D0_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_FB8F6D4426D7E6FD(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>* a1, ::System::Boolean a2)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_FB8F6D4426D7E6FD_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_AEAC2158E21C1389(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Single(*)(::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_AEAC2158E21C1389_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DBED1E489D4A0124(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2)
	{
		return ((::System::Boolean(*)(::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_DBED1E489D4A0124_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_E80CFE9791FF7C5A(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Int32(*)(::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_E80CFE9791FF7C5A_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_E80CFE9791FF7C5A_1(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Int32(*)(::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_E80CFE9791FF7C5A_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1C5EC54583F2FF24(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Boolean(*)(::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_1C5EC54583F2FF24_OFFSET))(a1);
	}

	::System::Void Method_1_74D11F1D0D54F865(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_74D11F1D0D54F865_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_4328664CCEFDF068(::RPG::Client::B51Racing::RoadRashGameHitNotifyData* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::B51Racing::RoadRashGameHitNotifyData*))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_4328664CCEFDF068_OFFSET))(a1);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581DFEB32FDD6BFB_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}
};
