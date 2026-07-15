#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_41.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1184;
class Class_1_FFE5B8A52EC38E9C_5;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5E091DCE98E3035C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149F4FE0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_0F871B23AE293A92_OFFSET UNITYSDK_OFFSET(0x149F2660)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_3540DCEC12AF2230_OFFSET UNITYSDK_OFFSET(0x149F3F80)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_3FC6A9A4A3DD9242_1_OFFSET UNITYSDK_OFFSET(0x149F3A60)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_3FC6A9A4A3DD9242_OFFSET UNITYSDK_OFFSET(0x149F3620)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x149F4470)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x149F23B0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_1_OFFSET UNITYSDK_OFFSET(0x149F2BB0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_OFFSET UNITYSDK_OFFSET(0x149F28F0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x149F4ED0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x149F3F30)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_OFFSET UNITYSDK_OFFSET(0x149F3EA0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x149F2F40)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_A1B7AA414F02F7A7_OFFSET UNITYSDK_OFFSET(0x149F3690)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_B7E8F8016DED0CF1_OFFSET UNITYSDK_OFFSET(0x149F3AD0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x149F4C90)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_C49CBC9CA24C21E4_OFFSET UNITYSDK_OFFSET(0x149F2FD0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_C53E7A79AA70FC4A_OFFSET UNITYSDK_OFFSET(0x149F47A0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x149F46C0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_EA7DF7D8F8D2DF06_OFFSET UNITYSDK_OFFSET(0x149F49A0)
#define CLASS_1_5E091DCE98E3035C_METHOD_1_EBEDBDE8F66EBE68_OFFSET UNITYSDK_OFFSET(0x149F4700)
#define CLASS_1_5E091DCE98E3035C__CTOR_OFFSET UNITYSDK_OFFSET(0x149F2150)

inline static constexpr unsigned int Class_1_5E091DCE98E3035C_TypeDefinitionIndex = 71544;

class Class_1_5E091DCE98E3035C : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* Field_1_1; // 0x18
	::RPG::Client::Promises::Promise* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveNodeType, ::Class_0_16E4307DCC419505_1184*>* Field_1_3; // 0x28
	::RPG::Client::Promises::Promise_1<::Class_1_FFE5B8A52EC38E9C_5*>* Field_1_4; // 0x30
	::RPG::Client::ActivityIdleLive::StoryLine* Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x44
	::System::UInt32 Field_1_8; // 0x48
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

	::RPG::Client::Promises::IPromise_1<::Class_1_FFE5B8A52EC38E9C_5*>* Method_1_55631B8B0FF06D96()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_FFE5B8A52EC38E9C_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_FFE5B8A52EC38E9C_5*>* Method_1_55631B8B0FF06D96_1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_FFE5B8A52EC38E9C_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_55631B8B0FF06D96_1_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_FFE5B8A52EC38E9C_5*>* Method_1_C49CBC9CA24C21E4(::Enum_3_DB663931210BBC27_41 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_FFE5B8A52EC38E9C_5*>*(*)(::PVOID, ::Enum_3_DB663931210BBC27_41))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_C49CBC9CA24C21E4_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_3FC6A9A4A3DD9242(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_3FC6A9A4A3DD9242_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_3FC6A9A4A3DD9242_1(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_3FC6A9A4A3DD9242_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_B7E8F8016DED0CF1(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_B7E8F8016DED0CF1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_60040CB1C3A1C379(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_60040CB1C3A1C379_OFFSET))(this, a1);
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

	::RPG::Client::Promises::IPromise* Method_1_EBEDBDE8F66EBE68()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C_METHOD_1_EBEDBDE8F66EBE68_OFFSET))(this);
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
