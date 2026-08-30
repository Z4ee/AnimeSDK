#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_213;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_27;
class Class_2_B66C1067C0468FBB;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4DF8A9AD44FD071D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x178A1110)
#define CLASS_1_4DF8A9AD44FD071D_GET_COMMANDS_OFFSET UNITYSDK_OFFSET(0x178A0F50)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_513D34FAFFB1AAB4_OFFSET UNITYSDK_OFFSET(0x178A0FB0)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x178A1040)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x178A1550)
#define CLASS_1_4DF8A9AD44FD071D_SET_COMMANDS_OFFSET UNITYSDK_OFFSET(0x178A0F60)
#define CLASS_1_4DF8A9AD44FD071D_TICK_OFFSET UNITYSDK_OFFSET(0x178A14E0)
#define CLASS_1_4DF8A9AD44FD071D__CTOR_OFFSET UNITYSDK_OFFSET(0x178A0F70)

inline static constexpr unsigned int Class_1_4DF8A9AD44FD071D_TypeDefinitionIndex = 77175;

class Class_1_4DF8A9AD44FD071D : public ::System::Object
{
public:
	// static const ::System::String* IBLNAGJPJHJ; // 0x0
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* CMOLKFPJDLE; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* _Commands_k__BackingField; // 0x18
	::Class_1_E518B582305CCAFF* HFOFIODMFGB; // 0x20
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* ICMGDNGCFAA; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* a1, ::Class_2_B66C1067C0468FBB* a2, ::Class_2_B66C1067C0468FBB* a3, ::Class_2_FB9CF047C8AEAA83* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>*, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* get_Commands()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_GET_COMMANDS_OFFSET))(this);
	}

	::System::Void set_Commands(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_SET_COMMANDS_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_513D34FAFFB1AAB4()
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_513D34FAFFB1AAB4_OFFSET))();
	}

	static ::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_A27DC2C5A103933A_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_TICK_OFFSET))(this, a1);
	}

	::Class_1_E518B582305CCAFF* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E518B582305CCAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
