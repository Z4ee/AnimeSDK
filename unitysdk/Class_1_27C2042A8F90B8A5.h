#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_27C2042A8F90B8A5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13851860)
#define CLASS_1_27C2042A8F90B8A5_METHOD_1_4BC86543E53D0696_OFFSET UNITYSDK_OFFSET(0x138512D0)
#define CLASS_1_27C2042A8F90B8A5_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x13851790)
#define CLASS_1_27C2042A8F90B8A5_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x13851580)
#define CLASS_1_27C2042A8F90B8A5_TICK_OFFSET UNITYSDK_OFFSET(0x13851A30)
#define CLASS_1_27C2042A8F90B8A5__CTOR_OFFSET UNITYSDK_OFFSET(0x13851270)

inline static constexpr unsigned int Class_1_27C2042A8F90B8A5_TypeDefinitionIndex = 72169;

class Class_1_27C2042A8F90B8A5 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_1_3F1549C2A53A3A5B* Field_1_1; // 0x10
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_1_4; // 0x28

	::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_1_27C2042A8F90B8A5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BC86543E53D0696(::Class_2_FB9CF047C8AEAA83* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FB9CF047C8AEAA83*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_27C2042A8F90B8A5_METHOD_1_4BC86543E53D0696_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27C2042A8F90B8A5_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	static ::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27C2042A8F90B8A5_METHOD_1_A27DC2C5A103933A_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_27C2042A8F90B8A5_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_27C2042A8F90B8A5_TICK_OFFSET))(this, a1);
	}
};
