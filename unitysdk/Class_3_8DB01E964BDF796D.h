#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class DialogEmitterBehavior; }
namespace RPG::Client { class DialogEmitterBehavior_DialogData; }
namespace RPG::Client { class DialogEmitterControllerMonoPlugin; }
namespace RPG::Client { class DialogEmitterMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8DB01E964BDF796D_METHOD_3_0061DD178BFB65AD_OFFSET UNITYSDK_OFFSET(0xC41A1A0)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC41A580)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC41A4A0)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xC41A520)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xC41A5C0)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xC41A620)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC41A430)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_5820C9251BD9D9F7_OFFSET UNITYSDK_OFFSET(0xC419FF0)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_689A3CC8AE1777CC_OFFSET UNITYSDK_OFFSET(0xC41A2C0)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC41A3A0)
#define CLASS_3_8DB01E964BDF796D_METHOD_3_BECD3F07F6070C24_OFFSET UNITYSDK_OFFSET(0xC41A220)
#define CLASS_3_8DB01E964BDF796D_TICK_OFFSET UNITYSDK_OFFSET(0xC41A680)
#define CLASS_3_8DB01E964BDF796D__CTOR_OFFSET UNITYSDK_OFFSET(0xC41AA10)

inline static constexpr unsigned int Class_3_8DB01E964BDF796D_TypeDefinitionIndex = 70855;

class Class_3_8DB01E964BDF796D : public ::RPG::Client::TABehaviorBase
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>* EHBPPKMJPBD; // 0x38
	::RPG::Client::DialogEmitterBehavior* KCKKDGAGPFJ; // 0x40
	::RPG::Client::DialogEmitterMonoPlugin* IAJLHLMPCHP; // 0x48
	::System::Single FAKAEHGECFB; // 0x50
	::System::Int32 ABBBKLNONAN; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D__CTOR_OFFSET))(this);
	}

	::RPG::Client::DialogEmitterMonoPlugin* Method_3_5820C9251BD9D9F7()
	{
		return ((::RPG::Client::DialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_5820C9251BD9D9F7_OFFSET))(this);
	}

	::RPG::Client::DialogEmitterBehavior* Method_3_BECD3F07F6070C24()
	{
		return ((::RPG::Client::DialogEmitterBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_BECD3F07F6070C24_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>* Method_3_689A3CC8AE1777CC()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_689A3CC8AE1777CC_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_TICK_OFFSET))(this, a1);
	}

	::RPG::Client::DialogEmitterControllerMonoPlugin* Method_3_0061DD178BFB65AD()
	{
		return ((::RPG::Client::DialogEmitterControllerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DB01E964BDF796D_METHOD_3_0061DD178BFB65AD_OFFSET))(this);
	}
};
