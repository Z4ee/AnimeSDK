#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_182;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_17;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x96DA320)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0x96DA750)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_DADAD1E5C2385F02_OFFSET UNITYSDK_OFFSET(0x96DA630)
#define CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x96DA5F0)
#define CLASS_1_F3888A0818B9D6AA_TICK_OFFSET UNITYSDK_OFFSET(0x96DA6E0)
#define CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET UNITYSDK_OFFSET(0x96DA310)

inline static constexpr unsigned int Class_1_F3888A0818B9D6AA_TypeDefinitionIndex = 71250;

class Class_1_F3888A0818B9D6AA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* Field_1_0; // 0x10
	::Class_1_F9EBB5A401350F78* Field_1_3; // 0x18
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_EXECUTE_OFFSET))(this, a1, a2);
	}

	::Class_1_F9EBB5A401350F78* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F9EBB5A401350F78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_DADAD1E5C2385F02(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_DADAD1E5C2385F02_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_182*>* Method_1_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_43BD383C98B4C0C5_182*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3888A0818B9D6AA_METHOD_1_4AD40A385BC29831_OFFSET))(this);
	}
};
