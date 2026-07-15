#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1262;
class Class_0_16E4307DCC419505_1263;
class Class_0_16E4307DCC419505_1264;
class Class_0_16E4307DCC419505_1265;
class Class_0_16E4307DCC419505_1266;
class Class_1_310250D457C6B8CD;
class Class_1_5F4D64A4B97E38F9;
class Class_1_C108C82C095C1A03;
class Class_2_D65868EA4F4C773F;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_150026B6423E5934_GET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0x1672D310)
#define CLASS_1_150026B6423E5934_METHOD_1_1A6E343D342D69AF_OFFSET UNITYSDK_OFFSET(0x1672CF80)
#define CLASS_1_150026B6423E5934_METHOD_1_646B7672F0B3276E_OFFSET UNITYSDK_OFFSET(0x1672CCB0)
#define CLASS_1_150026B6423E5934_METHOD_1_C8B656A9C02A9152_OFFSET UNITYSDK_OFFSET(0x1672D160)
#define CLASS_1_150026B6423E5934_SET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0x1672D320)
#define CLASS_1_150026B6423E5934__CTOR_OFFSET UNITYSDK_OFFSET(0x1672CC40)

inline static constexpr unsigned int Class_1_150026B6423E5934_TypeDefinitionIndex = 75563;

class Class_1_150026B6423E5934 : public ::System::Object
{
public:
	::Class_1_310250D457C6B8CD* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* _WaitFullSyncFinish_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_1262* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_1263* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_1264* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_1265* Field_1_5; // 0x38
	::Class_0_16E4307DCC419505_1266* Field_1_6; // 0x40
	::Class_2_D65868EA4F4C773F* Field_1_7; // 0x48
	::Class_1_5F4D64A4B97E38F9* Field_1_8; // 0x50

	::System::Void _ctor(::Class_2_D65868EA4F4C773F* a1, ::Class_0_16E4307DCC419505_1266* a2, ::Class_0_16E4307DCC419505_1264* a3, ::Class_0_16E4307DCC419505_1262* a4, ::Class_1_310250D457C6B8CD* a5, ::Class_0_16E4307DCC419505_1265* a6, ::Class_0_16E4307DCC419505_1263* a7, ::Class_1_5F4D64A4B97E38F9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D65868EA4F4C773F*, ::Class_0_16E4307DCC419505_1266*, ::Class_0_16E4307DCC419505_1264*, ::Class_0_16E4307DCC419505_1262*, ::Class_1_310250D457C6B8CD*, ::Class_0_16E4307DCC419505_1265*, ::Class_0_16E4307DCC419505_1263*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::RPG::Client::Promises::IPromise* Method_1_646B7672F0B3276E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934_METHOD_1_646B7672F0B3276E_OFFSET))(this);
	}

	::System::Void Method_1_1A6E343D342D69AF(::Class_1_C108C82C095C1A03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C108C82C095C1A03*))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934_METHOD_1_1A6E343D342D69AF_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_C108C82C095C1A03*>* Method_1_C8B656A9C02A9152(::Class_1_C108C82C095C1A03* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_C108C82C095C1A03*>*(*)(::PVOID, ::Class_1_C108C82C095C1A03*))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934_METHOD_1_C8B656A9C02A9152_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* get_WaitFullSyncFinish()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934_GET_WAITFULLSYNCFINISH_OFFSET))(this);
	}

	::System::Void set_WaitFullSyncFinish(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934_SET_WAITFULLSYNCFINISH_OFFSET))(this, a1);
	}
};
