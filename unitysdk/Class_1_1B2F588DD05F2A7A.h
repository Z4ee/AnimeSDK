#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }
namespace RPG::GameCore { class GameLevelHeartDialPerformance; }
namespace RPG::GameCore { class HeartDialDialogueRow; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_04B99DF42014EBF5_OFFSET UNITYSDK_OFFSET(0x893D390)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x893CF80)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x893CF20)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_238CC394BA4AFE72_OFFSET UNITYSDK_OFFSET(0x893D060)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x893CEC0)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x893CE60)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x893D010)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_49057A8F5B7780AF_OFFSET UNITYSDK_OFFSET(0x893D0C0)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x893CDC0)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_AA2D3E889C8A52CA_2_OFFSET UNITYSDK_OFFSET(0x893CE10)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x893CD70)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_BDC40DE69BCBECAA_OFFSET UNITYSDK_OFFSET(0x893CFF0)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x893D2E0)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x893CFE0)
#define CLASS_1_1B2F588DD05F2A7A_METHOD_1_F7241DEB1895F4FF_OFFSET UNITYSDK_OFFSET(0x893D130)
#define CLASS_1_1B2F588DD05F2A7A__CTOR_OFFSET UNITYSDK_OFFSET(0x893D000)

inline static constexpr unsigned int Class_1_1B2F588DD05F2A7A_TypeDefinitionIndex = 53320;

class Class_1_1B2F588DD05F2A7A : public ::System::Object
{
public:
	::RPG::GameCore::GameLevelHeartDialDialogueConfig* Field_1_0; // 0x10
	::RPG::GameCore::HeartDialDialogueRow* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::HeartDialDialogueRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialDialogueRow*))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_AA2D3E889C8A52CA_2_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::HeartDialDialogueRow* Method_1_BDC40DE69BCBECAA()
	{
		return ((::RPG::GameCore::HeartDialDialogueRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_BDC40DE69BCBECAA_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelDialogInfo* Method_1_238CC394BA4AFE72()
	{
		return ((::RPG::GameCore::LevelDialogInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_238CC394BA4AFE72_OFFSET))(this);
	}

	::RPG::GameCore::GameLevelHeartDialPerformance* Method_1_49057A8F5B7780AF(::System::Boolean& a1)
	{
		return ((::RPG::GameCore::GameLevelHeartDialPerformance*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_49057A8F5B7780AF_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameLevelHeartDialPerformance* Method_1_F7241DEB1895F4FF()
	{
		return ((::RPG::GameCore::GameLevelHeartDialPerformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_F7241DEB1895F4FF_OFFSET))(this);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04B99DF42014EBF5(::RPG::GameCore::GameLevelHeartDialDialogueConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialDialogueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1B2F588DD05F2A7A_METHOD_1_04B99DF42014EBF5_OFFSET))(this, a1);
	}
};
