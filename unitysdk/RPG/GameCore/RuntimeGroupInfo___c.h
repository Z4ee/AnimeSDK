#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGroupRandomInitControl; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_RUNTIMEGROUPINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB72D390)
#define RPG_GAMECORE_RUNTIMEGROUPINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB72D3C0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO___C__TRYGETLITTLEGAMEINFO_B__28_0_OFFSET UNITYSDK_OFFSET(0xB72D3F0)
#define RPG_GAMECORE_RUNTIMEGROUPINFO___C___DORANDOMINIT_B__0_0_OFFSET UNITYSDK_OFFSET(0xB72D3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuntimeGroupInfo___c_TypeDefinitionIndex = 49348;

	class RuntimeGroupInfo___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::RuntimeGroupInfo___c** StaticGet___9()
		{
			return (::RPG::GameCore::RuntimeGroupInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RuntimeGroupInfo___c_TypeDefinitionIndex)->GetStaticField(0x5BB30);
		}
		static ::System::Func_3<::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_3<::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeGroupInfo___c_TypeDefinitionIndex)->GetStaticField(0x5BB38);
		}
		static ::System::Func_2<::RPG::GameCore::LevelGroupRandomInitControl*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::GameCore::LevelGroupRandomInitControl*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeGroupInfo___c_TypeDefinitionIndex)->GetStaticField(0x5BB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __DoRandomInit_b__0_0(::RPG::GameCore::LevelGroupRandomInitControl* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelGroupRandomInitControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C___DORANDOMINIT_B__0_0_OFFSET))(this, item);
		}

		::System::Boolean _TryGetLittleGameInfo_b__28_0(::System::UInt32 id, ::RPG::GameCore::LevelLittleGameInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C__TRYGETLITTLEGAMEINFO_B__28_0_OFFSET))(this, id, info);
		}
	};
}
