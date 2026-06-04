#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A331969222E4A3BB;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3BB3CC031E89B139_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1439B540)
#define CLASS_1_3BB3CC031E89B139_TICK_OFFSET UNITYSDK_OFFSET(0x1439BBA0)
#define CLASS_1_3BB3CC031E89B139__CTOR_OFFSET UNITYSDK_OFFSET(0x1439B2A0)

inline static constexpr unsigned int Class_1_3BB3CC031E89B139_TypeDefinitionIndex = 72183;

class Class_1_3BB3CC031E89B139 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A331969222E4A3BB*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_FB9CF047C8AEAA83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_3BB3CC031E89B139__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3BB3CC031E89B139_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3BB3CC031E89B139_TICK_OFFSET))(this, a1);
	}
};
