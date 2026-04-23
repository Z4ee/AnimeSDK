#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_32.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_104;
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::Client::SwordTraining { class SwordTrainingGameRecordInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_3E12E5DBE03D5186_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96D8FC0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_14CE3194730CF1A3_OFFSET UNITYSDK_OFFSET(0x96D99B0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_181D38188B394471_OFFSET UNITYSDK_OFFSET(0x96D9BA0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_1988FE83B980E399_OFFSET UNITYSDK_OFFSET(0x96D9870)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_2156BE51F15C2D64_OFFSET UNITYSDK_OFFSET(0x96D9230)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_5B21866E47FB4409_OFFSET UNITYSDK_OFFSET(0x96D9FE0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_1_OFFSET UNITYSDK_OFFSET(0x96D92C0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_OFFSET UNITYSDK_OFFSET(0x96D9180)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_1_OFFSET UNITYSDK_OFFSET(0x96D96A0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_2_OFFSET UNITYSDK_OFFSET(0x96D9A50)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_OFFSET UNITYSDK_OFFSET(0x96D9370)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_8149BB44980EDCD3_OFFSET UNITYSDK_OFFSET(0x96D9F10)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x96D9EA0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_97B4409B66E3F126_OFFSET UNITYSDK_OFFSET(0x96DA180)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_1_OFFSET UNITYSDK_OFFSET(0x96D94C0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_2_OFFSET UNITYSDK_OFFSET(0x96DA260)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_3_OFFSET UNITYSDK_OFFSET(0x96D9B00)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_OFFSET UNITYSDK_OFFSET(0x96D9420)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x96D8EE0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x96D90C0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_1_OFFSET UNITYSDK_OFFSET(0x96D9600)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_OFFSET UNITYSDK_OFFSET(0x96D9560)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x96D9750)
#define CLASS_1_3E12E5DBE03D5186__CTOR_OFFSET UNITYSDK_OFFSET(0x96DA300)

inline static constexpr unsigned int Class_1_3E12E5DBE03D5186_TypeDefinitionIndex = 69116;

class Class_1_3E12E5DBE03D5186 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_5FC1511FCE339E37(::Enum_3_96F6662CA3713095_32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FC1511FCE339E37_1(::Enum_3_96F6662CA3713095_32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CC5D3421FCDA2BA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3FC3BCB5E93217B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3FC3BCB5E93217B_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED8EDCF138365847(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED8EDCF138365847_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CC5D3421FCDA2BA_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_181D38188B394471(::Class_1_455008579EB95638_104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_104*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_181D38188B394471_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_1988FE83B980E399(::RPG::Client::SwordTraining::SwordTrainingGameRecordType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_1988FE83B980E399_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B21866E47FB4409(::RPG::Client::SwordTraining::SwordTrainingGameRecordType a1, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_5B21866E47FB4409_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97B4409B66E3F126(::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_97B4409B66E3F126_OFFSET))(this, a1);
	}

	::System::Void Method_1_8149BB44980EDCD3(::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_8149BB44980EDCD3_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo* Method_1_2156BE51F15C2D64()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_2156BE51F15C2D64_OFFSET))(this);
	}

	::System::Void Method_1_7CC5D3421FCDA2BA_2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3FC3BCB5E93217B_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3FC3BCB5E93217B_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_3_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTrainingGameInstance* Method_1_14CE3194730CF1A3()
	{
		return ((::RPG::Client::SwordTrainingGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_14CE3194730CF1A3_OFFSET))(this);
	}
};
