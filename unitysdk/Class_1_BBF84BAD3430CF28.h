#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_BBF84BAD3430CF28_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B824C0)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11B825D0)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_164185C0D83C70DF_OFFSET UNITYSDK_OFFSET(0x11B826D0)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11B82C50)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_35B574BF35040A2E_OFFSET UNITYSDK_OFFSET(0x11B82D70)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_8357B0D18B2D035F_OFFSET UNITYSDK_OFFSET(0x11B828D0)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_8EFA08DEED1F023E_OFFSET UNITYSDK_OFFSET(0x11B82FF0)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_9B3F4A4618D34F13_OFFSET UNITYSDK_OFFSET(0x11B827F0)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x11B82F60)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_AFEE354079614681_OFFSET UNITYSDK_OFFSET(0x11B82AD0)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0x11B82A60)
#define CLASS_1_BBF84BAD3430CF28_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x11B82CB0)
#define CLASS_1_BBF84BAD3430CF28__CTOR_OFFSET UNITYSDK_OFFSET(0x11B823D0)

inline static constexpr unsigned int Class_1_BBF84BAD3430CF28_TypeDefinitionIndex = 77291;

class Class_1_BBF84BAD3430CF28 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* KDEODGPLDJI; // 0x10
	::Class_3_97041AE90E3B2214* PDENFEFCAGN; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::ChenLingFesPosition*>* GKOMNFGLMLP; // 0x20
	::RPG::Client::Promises::Promise_1<::System::Boolean>* JGIFKBIFFOJ; // 0x28
	::RPG::Client::Promises::Promise_1<::System::Boolean>* NPDEMOGNIAE; // 0x30
	::System::Boolean FMDPCEGDOPP; // 0x38
	::System::Boolean AGEBCFDADFA; // 0x39

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_164185C0D83C70DF(::RPG::GameCore::ChenLingFesPosition* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_164185C0D83C70DF_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_9B3F4A4618D34F13(::RPG::GameCore::ChenLingFesPosition* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_9B3F4A4618D34F13_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8357B0D18B2D035F(::RPG::GameCore::ChenLingFesPosition* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_8357B0D18B2D035F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AFEE354079614681(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_AFEE354079614681_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_CB90D463EEA11F23(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_35B574BF35040A2E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_35B574BF35040A2E_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_8EFA08DEED1F023E(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_8EFA08DEED1F023E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF84BAD3430CF28_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
