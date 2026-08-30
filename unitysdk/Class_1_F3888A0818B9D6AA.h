#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_213;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_27;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBD10E40)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0xBD11320)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_653644BEE1098C14_OFFSET UNITYSDK_OFFSET(0xBD11200)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xBD111C0)
#define CLASS_1_F3888A0818B9D6AA_TICK_OFFSET UNITYSDK_OFFSET(0xBD112B0)
#define CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD10E30)

inline static constexpr unsigned int Class_1_F3888A0818B9D6AA_TypeDefinitionIndex = 77198;

class Class_1_F3888A0818B9D6AA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* OJFECHILFHG; // 0x10
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* PFHKDKKPBMF; // 0x18
	::Class_1_E518B582305CCAFF* HFOFIODMFGB; // 0x20
	::System::UInt32 CHPOANEOFCO; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET))(this, a1, a2);
	}

	::Class_1_E518B582305CCAFF* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E518B582305CCAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_653644BEE1098C14(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_653644BEE1098C14_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_213*>* Method_1_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_213*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET))(this);
	}
};
