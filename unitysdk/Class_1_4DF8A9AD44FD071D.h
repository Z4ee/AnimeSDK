#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_B66C1067C0468FBB;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4DF8A9AD44FD071D_EXECUTE_OFFSET UNITYSDK_OFFSET(0xABAE780)
#define CLASS_1_4DF8A9AD44FD071D_GET_COMMANDS_OFFSET UNITYSDK_OFFSET(0xABAE5C0)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_513D34FAFFB1AAB4_OFFSET UNITYSDK_OFFSET(0xABAE620)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xABAE6B0)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xABAEB10)
#define CLASS_1_4DF8A9AD44FD071D_SET_COMMANDS_OFFSET UNITYSDK_OFFSET(0xABAE5D0)
#define CLASS_1_4DF8A9AD44FD071D_TICK_OFFSET UNITYSDK_OFFSET(0xABAEAA0)
#define CLASS_1_4DF8A9AD44FD071D__CTOR_OFFSET UNITYSDK_OFFSET(0xABAE5E0)

inline static constexpr unsigned int Class_1_4DF8A9AD44FD071D_TypeDefinitionIndex = 72166;

class Class_1_4DF8A9AD44FD071D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_1_3F1549C2A53A3A5B* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* _Commands_k__BackingField; // 0x18
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_3; // 0x20
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_4; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* a1, ::Class_2_B66C1067C0468FBB* a2, ::Class_2_B66C1067C0468FBB* a3, ::Class_2_FB9CF047C8AEAA83* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* get_Commands()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_GET_COMMANDS_OFFSET))(this);
	}

	::System::Void set_Commands(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_SET_COMMANDS_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_513D34FAFFB1AAB4()
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_513D34FAFFB1AAB4_OFFSET))();
	}

	static ::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_A27DC2C5A103933A_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_TICK_OFFSET))(this, a1);
	}

	::Class_1_3F1549C2A53A3A5B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_3F1549C2A53A3A5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
