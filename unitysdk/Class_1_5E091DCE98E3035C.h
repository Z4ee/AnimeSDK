#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_40.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1138;
class Class_1_BB4B99DE4C2501EC_5;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5E091DCE98E3035C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9F2500)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_0F871B23AE293A92_OFFSET UNITYSDK_OFFSET(0xA9EFF50)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_3540DCEC12AF2230_OFFSET UNITYSDK_OFFSET(0xA9F1550)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xA9F1A40)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xA9EFCE0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_1_OFFSET UNITYSDK_OFFSET(0xA9F04A0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_OFFSET UNITYSDK_OFFSET(0xA9F01E0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0xA9F23F0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xA9F1500)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_1_OFFSET UNITYSDK_OFFSET(0xA9F1180)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_2_OFFSET UNITYSDK_OFFSET(0xA9F14A0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_OFFSET UNITYSDK_OFFSET(0xA9F0DA0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xA9F0830)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_9FBF409688A5E678_OFFSET UNITYSDK_OFFSET(0xA9F1CD0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_A1B7AA414F02F7A7_OFFSET UNITYSDK_OFFSET(0xA9F0E10)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xA9F21B0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_C49CBC9CA24C21E4_OFFSET UNITYSDK_OFFSET(0xA9F08C0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_C53E7A79AA70FC4A_OFFSET UNITYSDK_OFFSET(0xA9F1D40)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9F1C90)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_CE6113EA3807A86C_OFFSET UNITYSDK_OFFSET(0xA9F11F0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_EA7DF7D8F8D2DF06_OFFSET UNITYSDK_OFFSET(0xA9F1F00)
#define CLASS_1_5E091DCE98E3035C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EFA80)

inline static constexpr unsigned int Class_1_5E091DCE98E3035C_TypeDefinitionIndex = 70021;

class Class_1_5E091DCE98E3035C : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* Field_1_1; // 0x18
	::RPG::Client::Promises::Promise* Field_1_2; // 0x20
	::RPG::Client::Promises::Promise_1<::Class_1_BB4B99DE4C2501EC_5*>* Field_1_3; // 0x28
	::RPG::Client::ActivityIdleLive::StoryLine* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveNodeType, ::Class_0_16E4307DCC419505_1138*>* Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x44
	::System::Boolean Field_1_8; // 0x48
	::System::UInt32 Field_1_9; // 0x4C

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*&))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_0F871B23AE293A92()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_0F871B23AE293A92_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_BB4B99DE4C2501EC_5*>* Method_1_55631B8B0FF06D96()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_BB4B99DE4C2501EC_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_BB4B99DE4C2501EC_5*>* Method_1_55631B8B0FF06D96_1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_BB4B99DE4C2501EC_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_1_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_BB4B99DE4C2501EC_5*>* Method_1_C49CBC9CA24C21E4(::Enum_3_DB663931210BBC27_40 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_BB4B99DE4C2501EC_5*>*(*)(::PVOID, ::Enum_3_DB663931210BBC27_40))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_C49CBC9CA24C21E4_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_60040CB1C3A1C379(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_60040CB1C3A1C379_1(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_CE6113EA3807A86C(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_CE6113EA3807A86C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_60040CB1C3A1C379_2(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_3540DCEC12AF2230(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::System::Func_1<::RPG::Client::Promises::IPromise*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_3540DCEC12AF2230_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_9FBF409688A5E678()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_9FBF409688A5E678_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A1B7AA414F02F7A7(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_A1B7AA414F02F7A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C53E7A79AA70FC4A(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_C53E7A79AA70FC4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EA7DF7D8F8D2DF06(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_EA7DF7D8F8D2DF06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_DISPOSE_OFFSET))(this);
	}
};
