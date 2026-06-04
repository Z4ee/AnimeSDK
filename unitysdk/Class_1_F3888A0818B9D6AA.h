#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_F9FBCC956DFCF137_25;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA97BB40)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_39A4542C0015831D_OFFSET UNITYSDK_OFFSET(0xA97BE40)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0xA97BF60)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xA97BE00)
#define CLASS_1_F3888A0818B9D6AA_TICK_OFFSET UNITYSDK_OFFSET(0xA97BEF0)
#define CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET UNITYSDK_OFFSET(0xA97BB30)

inline static constexpr unsigned int Class_1_F3888A0818B9D6AA_TypeDefinitionIndex = 72188;

class Class_1_F3888A0818B9D6AA : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_0; // 0x10
	::Class_1_3F1549C2A53A3A5B* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET))(this, a1, a2);
	}

	::Class_1_3F1549C2A53A3A5B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_3F1549C2A53A3A5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_39A4542C0015831D(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_39A4542C0015831D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_191*>* Method_1_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_191*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET))(this);
	}
};
