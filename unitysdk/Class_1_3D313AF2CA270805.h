#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_40.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1088;
class Class_1_14E02E1F6D70E487_5;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3D313AF2CA270805_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD17A70)
#define CLASS_1_3D313AF2CA270805_METHOD_1_08767709C80FFC45_OFFSET UNITYSDK_OFFSET(0xCD17490)
#define CLASS_1_3D313AF2CA270805_METHOD_1_0A50241F0838A39B_OFFSET UNITYSDK_OFFSET(0xCD15690)
#define CLASS_1_3D313AF2CA270805_METHOD_1_2C4FB0F133197B2D_OFFSET UNITYSDK_OFFSET(0xCD16CD0)
#define CLASS_1_3D313AF2CA270805_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCD15F20)
#define CLASS_1_3D313AF2CA270805_METHOD_1_55631B8B0FF06D96_1_OFFSET UNITYSDK_OFFSET(0xCD15B90)
#define CLASS_1_3D313AF2CA270805_METHOD_1_55631B8B0FF06D96_OFFSET UNITYSDK_OFFSET(0xCD158E0)
#define CLASS_1_3D313AF2CA270805_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xCD16C80)
#define CLASS_1_3D313AF2CA270805_METHOD_1_629147E184710FB0_1_OFFSET UNITYSDK_OFFSET(0xCD168F0)
#define CLASS_1_3D313AF2CA270805_METHOD_1_629147E184710FB0_2_OFFSET UNITYSDK_OFFSET(0xCD16C20)
#define CLASS_1_3D313AF2CA270805_METHOD_1_629147E184710FB0_OFFSET UNITYSDK_OFFSET(0xCD164D0)
#define CLASS_1_3D313AF2CA270805_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0xCD15420)
#define CLASS_1_3D313AF2CA270805_METHOD_1_843C0FAAB92B5519_OFFSET UNITYSDK_OFFSET(0xCD172D0)
#define CLASS_1_3D313AF2CA270805_METHOD_1_9FBF409688A5E678_OFFSET UNITYSDK_OFFSET(0xCD17260)
#define CLASS_1_3D313AF2CA270805_METHOD_1_A1B7AA414F02F7A7_OFFSET UNITYSDK_OFFSET(0xCD16540)
#define CLASS_1_3D313AF2CA270805_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xCD17960)
#define CLASS_1_3D313AF2CA270805_METHOD_1_C49CBC9CA24C21E4_OFFSET UNITYSDK_OFFSET(0xCD15FB0)
#define CLASS_1_3D313AF2CA270805_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCD17220)
#define CLASS_1_3D313AF2CA270805_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCD17190)
#define CLASS_1_3D313AF2CA270805_METHOD_1_CE6113EA3807A86C_OFFSET UNITYSDK_OFFSET(0xCD16960)
#define CLASS_1_3D313AF2CA270805_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xCD17740)
#define CLASS_1_3D313AF2CA270805__CTOR_OFFSET UNITYSDK_OFFSET(0xCD151E0)

inline static constexpr unsigned int Class_1_3D313AF2CA270805_TypeDefinitionIndex = 69209;

class Class_1_3D313AF2CA270805 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_3; // 0x10
	::RPG::Client::Promises::Promise* Field_1_0; // 0x18
	::RPG::Client::ActivityIdleLive::StoryLine* Field_1_6; // 0x20
	::RPG::Client::Promises::Promise_1<::Class_1_14E02E1F6D70E487_5*>* Field_1_1; // 0x28
	::RPG::Client::Promises::Promise* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveNodeType, ::Class_0_16E4307DCC419505_1088*>* Field_1_9; // 0x38
	::System::UInt32 Field_1_5; // 0x40
	::System::UInt32 Field_1_4; // 0x44
	::System::Boolean Field_1_8; // 0x48
	::System::UInt32 Field_1_7; // 0x4C

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*&))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_0A50241F0838A39B()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_0A50241F0838A39B_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_14E02E1F6D70E487_5*>* Method_1_55631B8B0FF06D96()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_14E02E1F6D70E487_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_55631B8B0FF06D96_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_14E02E1F6D70E487_5*>* Method_1_55631B8B0FF06D96_1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_14E02E1F6D70E487_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_55631B8B0FF06D96_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_14E02E1F6D70E487_5*>* Method_1_C49CBC9CA24C21E4(::Enum_3_DB663931210BBC27_40 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_14E02E1F6D70E487_5*>*(*)(::PVOID, ::Enum_3_DB663931210BBC27_40))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_C49CBC9CA24C21E4_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_629147E184710FB0(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_629147E184710FB0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_629147E184710FB0_1(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_629147E184710FB0_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_CE6113EA3807A86C(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_CE6113EA3807A86C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_629147E184710FB0_2(::RPG::Client::ActivityIdleLive::StoryLine* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_629147E184710FB0_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_2C4FB0F133197B2D(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::System::Func_1<::RPG::Client::Promises::IPromise*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_2C4FB0F133197B2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_9FBF409688A5E678()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_9FBF409688A5E678_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_A1B7AA414F02F7A7(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_A1B7AA414F02F7A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_843C0FAAB92B5519(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_843C0FAAB92B5519_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08767709C80FFC45(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_08767709C80FFC45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805_DISPOSE_OFFSET))(this);
	}
};
