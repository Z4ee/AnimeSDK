#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3E9CB566496BBAE_GET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB62D060)
#define CLASS_1_D3E9CB566496BBAE_GET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB62D080)
#define CLASS_1_D3E9CB566496BBAE_METHOD_1_12ABE0FE599B7386_OFFSET UNITYSDK_OFFSET(0xB62D910)
#define CLASS_1_D3E9CB566496BBAE_METHOD_1_22315393414A7F78_OFFSET UNITYSDK_OFFSET(0xB62D100)
#define CLASS_1_D3E9CB566496BBAE_METHOD_1_3C4F44036F654455_OFFSET UNITYSDK_OFFSET(0xB62D810)
#define CLASS_1_D3E9CB566496BBAE_METHOD_1_40032CC48758582D_1_OFFSET UNITYSDK_OFFSET(0xB62D570)
#define CLASS_1_D3E9CB566496BBAE_METHOD_1_40032CC48758582D_OFFSET UNITYSDK_OFFSET(0xB62D0A0)
#define CLASS_1_D3E9CB566496BBAE_METHOD_1_EF996DBC6A437895_OFFSET UNITYSDK_OFFSET(0xB62D5D0)
#define CLASS_1_D3E9CB566496BBAE_SET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB62D070)
#define CLASS_1_D3E9CB566496BBAE_SET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB62D090)
#define CLASS_1_D3E9CB566496BBAE__CTOR_OFFSET UNITYSDK_OFFSET(0xB62DB90)

inline static constexpr unsigned int Class_1_D3E9CB566496BBAE_TypeDefinitionIndex = 63374;

class Class_1_D3E9CB566496BBAE : public ::System::Object
{
public:
	// static const ::System::Int32 MMGGPJHNDNF = 0x2A; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _EnemyChimeras_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _AllyChimeras_k__BackingField; // 0x18
	::System::Boolean PAKNNEFOEON; // 0x20
	::System::Int32 IAKDNNCLGAN; // 0x24
	::System::UInt32 ODNLKFEADMI; // 0x28
	::System::UInt32 MHOGLAHCCED; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_AllyChimeras()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_GET_ALLYCHIMERAS_OFFSET))(this);
	}

	::System::Void set_AllyChimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_SET_ALLYCHIMERAS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_EnemyChimeras()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_GET_ENEMYCHIMERAS_OFFSET))(this);
	}

	::System::Void set_EnemyChimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_SET_ENEMYCHIMERAS_OFFSET))(this, a1);
	}

	::System::Void Method_1_40032CC48758582D(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_METHOD_1_40032CC48758582D_OFFSET))(this, a1);
	}

	::System::Void Method_1_40032CC48758582D_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_METHOD_1_40032CC48758582D_1_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Method_1_22315393414A7F78(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_METHOD_1_22315393414A7F78_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_EF996DBC6A437895()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_METHOD_1_EF996DBC6A437895_OFFSET))(this);
	}

	::System::String* Method_1_3C4F44036F654455()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_METHOD_1_3C4F44036F654455_OFFSET))(this);
	}

	static ::System::String* Method_1_12ABE0FE599B7386(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9CB566496BBAE_METHOD_1_12ABE0FE599B7386_OFFSET))(a1, a2);
	}
};
