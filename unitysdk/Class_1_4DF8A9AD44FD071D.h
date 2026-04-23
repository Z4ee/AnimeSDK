#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_182;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_17;
class Class_2_49CAB3DE74280C58;
class Class_2_6AA7CA7493367EF4;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4DF8A9AD44FD071D_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCD2FCB0)
#define CLASS_1_4DF8A9AD44FD071D_GET_COMMANDS_OFFSET UNITYSDK_OFFSET(0xCD2FAF0)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xCD2FBE0)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_ADB7A142D796596C_OFFSET UNITYSDK_OFFSET(0xCD2FB50)
#define CLASS_1_4DF8A9AD44FD071D_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xCD300B0)
#define CLASS_1_4DF8A9AD44FD071D_SET_COMMANDS_OFFSET UNITYSDK_OFFSET(0xCD2FB00)
#define CLASS_1_4DF8A9AD44FD071D_TICK_OFFSET UNITYSDK_OFFSET(0xCD30040)
#define CLASS_1_4DF8A9AD44FD071D__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2FB10)

inline static constexpr unsigned int Class_1_4DF8A9AD44FD071D_TypeDefinitionIndex = 71228;

class Class_1_4DF8A9AD44FD071D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_3; // 0x0
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* _Commands_k__BackingField; // 0x18
	::Class_1_F9EBB5A401350F78* Field_1_4; // 0x20
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_2; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* a1, ::Class_2_49CAB3DE74280C58* a2, ::Class_2_49CAB3DE74280C58* a3, ::Class_2_6AA7CA7493367EF4* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* get_Commands()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_GET_COMMANDS_OFFSET))(this);
	}

	::System::Void set_Commands(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_SET_COMMANDS_OFFSET))(this, value);
	}

	static ::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_ADB7A142D796596C()
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_ADB7A142D796596C_OFFSET))();
	}

	static ::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_A27DC2C5A103933A_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_TICK_OFFSET))(this, a1);
	}

	::Class_1_F9EBB5A401350F78* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F9EBB5A401350F78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF8A9AD44FD071D_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
