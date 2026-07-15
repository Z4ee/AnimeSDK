#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class AkPositionArray;
class AkRoom;
class AkRoomPortal;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_753538C3072BF388_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162D7700)
#define CLASS_2_753538C3072BF388_GET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0x162DB950)
#define CLASS_2_753538C3072BF388_GET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0x162DB970)
#define CLASS_2_753538C3072BF388_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x162D8D60)
#define CLASS_2_753538C3072BF388_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x162DAB80)
#define CLASS_2_753538C3072BF388_METHOD_2_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x162D7770)
#define CLASS_2_753538C3072BF388_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x162D8350)
#define CLASS_2_753538C3072BF388_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x162D8B10)
#define CLASS_2_753538C3072BF388_METHOD_2_3AB4010736FA63A8_OFFSET UNITYSDK_OFFSET(0x162D96F0)
#define CLASS_2_753538C3072BF388_METHOD_2_5DDA518B69F3EEC6_OFFSET UNITYSDK_OFFSET(0x162D76A0)
#define CLASS_2_753538C3072BF388_METHOD_2_692CFC772E906759_OFFSET UNITYSDK_OFFSET(0x162D9BA0)
#define CLASS_2_753538C3072BF388_METHOD_2_78A816EDF045E4C8_OFFSET UNITYSDK_OFFSET(0x162DAFC0)
#define CLASS_2_753538C3072BF388_METHOD_2_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x162DB430)
#define CLASS_2_753538C3072BF388_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x162D9330)
#define CLASS_2_753538C3072BF388_METHOD_2_8B9C60E6779B6FF4_OFFSET UNITYSDK_OFFSET(0x162DB940)
#define CLASS_2_753538C3072BF388_METHOD_2_9AF91962BC6E178A_1_OFFSET UNITYSDK_OFFSET(0x162D8F30)
#define CLASS_2_753538C3072BF388_METHOD_2_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x162D8680)
#define CLASS_2_753538C3072BF388_METHOD_2_AE52A64C2E55455B_OFFSET UNITYSDK_OFFSET(0x162DAC60)
#define CLASS_2_753538C3072BF388_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x162DACE0)
#define CLASS_2_753538C3072BF388_METHOD_2_DEB5A05C0A7C4D29_OFFSET UNITYSDK_OFFSET(0x162D9C20)
#define CLASS_2_753538C3072BF388_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x162DB930)
#define CLASS_2_753538C3072BF388_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x162D83F0)
#define CLASS_2_753538C3072BF388_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x162D9270)
#define CLASS_2_753538C3072BF388_SET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0x162DB960)
#define CLASS_2_753538C3072BF388_SET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0x162DB980)
#define CLASS_2_753538C3072BF388_TICK_OFFSET UNITYSDK_OFFSET(0x162D93D0)
#define CLASS_2_753538C3072BF388__CTOR_OFFSET UNITYSDK_OFFSET(0x162D7690)

inline static constexpr unsigned int Class_2_753538C3072BF388_TypeDefinitionIndex = 54677;

class Class_2_753538C3072BF388 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::MapDistrictDef* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_2_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* _OnCreateConfig_k__BackingField; // 0x28
	::AkRoomPortal* Field_2_3; // 0x30
	::AkPositionArray* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_5; // 0x40
	::System::String* _DistrictName_k__BackingField; // 0x48
	::AkRoom* Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x58
	::System::Single Field_2_9; // 0x5C
	::System::Single Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DDA518B69F3EEC6(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_5DDA518B69F3EEC6_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEB5A05C0A7C4D29(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_DEB5A05C0A7C4D29_OFFSET))(this, a1);
	}

	::System::Void Method_2_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_2839AE123F8ECAA7_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Method_2_AE52A64C2E55455B()
	{
		return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_AE52A64C2E55455B_OFFSET))(this);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_78A816EDF045E4C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_78A816EDF045E4C8_OFFSET))(this);
	}

	::System::Void Method_2_80313B77C31AD02B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_80313B77C31AD02B_OFFSET))(this);
	}

	::System::Void Method_2_692CFC772E906759(::RPG::GameCore::DistrictAudioRTPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DistrictAudioRTPCConfig*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_692CFC772E906759_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AF91962BC6E178A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_9AF91962BC6E178A_OFFSET))(this);
	}

	::System::Void Method_2_9AF91962BC6E178A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_9AF91962BC6E178A_1_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_3AB4010736FA63A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_3AB4010736FA63A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::MapDistrictDef* Method_2_8B9C60E6779B6FF4()
	{
		return ((::RPG::Client::MapDistrictDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_METHOD_2_8B9C60E6779B6FF4_OFFSET))(this);
	}

	::System::String* get_DistrictName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_GET_DISTRICTNAME_OFFSET))(this);
	}

	::System::Void set_DistrictName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_SET_DISTRICTNAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::TaskConfig*>* get_OnCreateConfig()
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_GET_ONCREATECONFIG_OFFSET))(this);
	}

	::System::Void set_OnCreateConfig(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_753538C3072BF388_SET_ONCREATECONFIG_OFFSET))(this, a1);
	}
};
