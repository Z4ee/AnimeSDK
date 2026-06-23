#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class WallConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MOVINGWALLCONFIG_GETWALLCONFIG_OFFSET UNITYSDK_OFFSET(0x19171BD0)
#define MOLEMOLE_MOVINGWALLCONFIG_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x19171AE0)
#define MOLEMOLE_MOVINGWALLCONFIG_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x191718C0)
#define MOLEMOLE_MOVINGWALLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19171C60)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallConfig_TypeDefinitionIndex = 76512;

	class MovingWallConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::MovingWallConfig** StaticGet__instance()
		{
			return (::MoleMole::MovingWallConfig**)Il2CppClass::FromTypeDefinitionIndex(MovingWallConfig_TypeDefinitionIndex)->GetStaticField(0x39F10);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::WallConfig*>*>* Walls; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void ReloadFromFile(::System::Boolean async, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG_RELOADFROMFILE_OFFSET))(async, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single span, ::System::Action_1<::System::Single>* oneStep, ::System::Action_1<::System::String*>* finish, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG_RELOADFROMFILEASYNC_OFFSET))(span, oneStep, finish, name);
		}

		static ::System::Collections::Generic::List_1<::MoleMole::WallConfig*>* GetWallConfig(::System::Int32 name)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::WallConfig*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG_GETWALLCONFIG_OFFSET))(name);
		}
	};
}
