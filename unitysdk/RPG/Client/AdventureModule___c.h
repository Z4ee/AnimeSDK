#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TrainExteriorConfigRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ADVENTUREMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9047000)
#define RPG_CLIENT_ADVENTUREMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9047030)
#define RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__80_0_OFFSET UNITYSDK_OFFSET(0x9047040)
#define RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__80_1_OFFSET UNITYSDK_OFFSET(0x9047080)
#define RPG_CLIENT_ADVENTUREMODULE___C__ONFINISHPERFORMANCESTANDALONEPLAY_B__305_0_OFFSET UNITYSDK_OFFSET(0x90470A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureModule___c_TypeDefinitionIndex = 50345;

	class AdventureModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::TrainExteriorConfigRow*>** StaticGet___9__80_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::TrainExteriorConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x30B80);
		}
		static ::System::Action** StaticGet___9__305_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x30B88);
		}
		static ::System::Func_2<::RPG::GameCore::TrainExteriorConfigRow*, ::System::Boolean>** StaticGet___9__80_1()
		{
			return (::System::Func_2<::RPG::GameCore::TrainExteriorConfigRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x30B90);
		}
		static ::RPG::Client::AdventureModule___c** StaticGet___9()
		{
			return (::RPG::Client::AdventureModule___c**)Il2CppClass::FromTypeDefinitionIndex(AdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x30B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTrainOutSideSceneID_b__80_0(::RPG::GameCore::TrainExteriorConfigRow* a, ::RPG::GameCore::TrainExteriorConfigRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TrainExteriorConfigRow*, ::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__80_0_OFFSET))(this, a, b);
		}

		::System::Boolean _GetTrainOutSideSceneID_b__80_1(::RPG::GameCore::TrainExteriorConfigRow* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__GETTRAINOUTSIDESCENEID_B__80_1_OFFSET))(this, x);
		}

		::System::Void _OnFinishPerformanceStandalonePlay_b__305_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__ONFINISHPERFORMANCESTANDALONEPLAY_B__305_0_OFFSET))(this);
		}
	};
}
