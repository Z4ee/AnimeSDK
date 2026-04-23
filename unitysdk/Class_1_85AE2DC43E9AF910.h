#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_85AE2DC43E9AF910_GET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0x903DC70)
#define CLASS_1_85AE2DC43E9AF910_GET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0x903DC90)
#define CLASS_1_85AE2DC43E9AF910_METHOD_1_2F1652B6B7BA6193_OFFSET UNITYSDK_OFFSET(0x903DD10)
#define CLASS_1_85AE2DC43E9AF910_METHOD_1_3C4F44036F654455_OFFSET UNITYSDK_OFFSET(0x903E400)
#define CLASS_1_85AE2DC43E9AF910_METHOD_1_40032CC48758582D_1_OFFSET UNITYSDK_OFFSET(0x903E130)
#define CLASS_1_85AE2DC43E9AF910_METHOD_1_40032CC48758582D_OFFSET UNITYSDK_OFFSET(0x903DCB0)
#define CLASS_1_85AE2DC43E9AF910_METHOD_1_72AA266DDB8329B9_OFFSET UNITYSDK_OFFSET(0x903E560)
#define CLASS_1_85AE2DC43E9AF910_METHOD_1_AEBCC3BB69610221_OFFSET UNITYSDK_OFFSET(0x903E190)
#define CLASS_1_85AE2DC43E9AF910_SET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0x903DC80)
#define CLASS_1_85AE2DC43E9AF910_SET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0x903DCA0)
#define CLASS_1_85AE2DC43E9AF910__CTOR_OFFSET UNITYSDK_OFFSET(0x903E790)

inline static constexpr unsigned int Class_1_85AE2DC43E9AF910_TypeDefinitionIndex = 58320;

class Class_1_85AE2DC43E9AF910 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2A; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _AllyChimeras_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _EnemyChimeras_k__BackingField; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::Boolean Field_1_6; // 0x24
	::System::UInt32 Field_1_3; // 0x28
	::System::Int32 Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_AllyChimeras()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_GET_ALLYCHIMERAS_OFFSET))(this);
	}

	::System::Void set_AllyChimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_SET_ALLYCHIMERAS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_EnemyChimeras()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_GET_ENEMYCHIMERAS_OFFSET))(this);
	}

	::System::Void set_EnemyChimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_SET_ENEMYCHIMERAS_OFFSET))(this, value);
	}

	::System::Void Method_1_40032CC48758582D(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_METHOD_1_40032CC48758582D_OFFSET))(this, a1);
	}

	::System::Void Method_1_40032CC48758582D_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_METHOD_1_40032CC48758582D_1_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Method_1_2F1652B6B7BA6193(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_METHOD_1_2F1652B6B7BA6193_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_AEBCC3BB69610221()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_METHOD_1_AEBCC3BB69610221_OFFSET))(this);
	}

	::System::String* Method_1_3C4F44036F654455()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_METHOD_1_3C4F44036F654455_OFFSET))(this);
	}

	static ::System::String* Method_1_72AA266DDB8329B9(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_85AE2DC43E9AF910_METHOD_1_72AA266DDB8329B9_OFFSET))(a1, a2);
	}
};
