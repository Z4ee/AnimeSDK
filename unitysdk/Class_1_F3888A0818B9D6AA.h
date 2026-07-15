#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_199;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_25;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x149C2770)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_39A4542C0015831D_OFFSET UNITYSDK_OFFSET(0x149C2B30)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0x149C2C50)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x149C2AF0)
#define CLASS_1_F3888A0818B9D6AA_TICK_OFFSET UNITYSDK_OFFSET(0x149C2BE0)
#define CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET UNITYSDK_OFFSET(0x149C2760)

inline static constexpr unsigned int Class_1_F3888A0818B9D6AA_TypeDefinitionIndex = 73713;

class Class_1_F3888A0818B9D6AA : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_199*>* Field_1_1; // 0x18
	::Class_1_E518B582305CCAFF* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_199*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_199*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET))(this, a1, a2);
	}

	::Class_1_E518B582305CCAFF* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E518B582305CCAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_39A4542C0015831D(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_199*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_199*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_39A4542C0015831D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_199*>* Method_1_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_199*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET))(this);
	}
};
