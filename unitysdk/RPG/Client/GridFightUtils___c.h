#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD2D5A60)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD2D5AA0)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__SORTTRAITIDSBYTEAM_B__37_1_OFFSET UNITYSDK_OFFSET(0xD2D5FA0)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__TRANSFERTOLAUNCHER_B__0_0_OFFSET UNITYSDK_OFFSET(0xD2D5AB0)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__TRYSHOWNEWBIELOSEDIALOG_B__46_0_OFFSET UNITYSDK_OFFSET(0xD2D5FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils___c_TypeDefinitionIndex = 64885;

	class GridFightUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GridFightUtils___c_TypeDefinitionIndex)->GetStaticField(0xD7B0);
		}
		static ::RPG::Client::GridFightUtils___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightUtils___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightUtils___c_TypeDefinitionIndex)->GetStaticField(0xD7B8);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__46_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightUtils___c_TypeDefinitionIndex)->GetStaticField(0xD7C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>** StaticGet___9__37_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightUtils___c_TypeDefinitionIndex)->GetStaticField(0xD7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToLauncher_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__TRANSFERTOLAUNCHER_B__0_0_OFFSET))(this);
		}

		::System::UInt32 _SortTraitIDsByTeam_b__37_1(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__SORTTRAITIDSBYTEAM_B__37_1_OFFSET))(this, a1);
		}

		::System::Void _TryShowNewBieLoseDialog_b__46_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__TRYSHOWNEWBIELOSEDIALOG_B__46_0_OFFSET))(this, a1);
		}
	};
}
