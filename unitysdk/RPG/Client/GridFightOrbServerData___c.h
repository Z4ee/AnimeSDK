#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD22A540)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD22A580)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GETORBCOUNTBYTYPE_B__11_1_OFFSET UNITYSDK_OFFSET(0xD22A590)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GET_ORBLISTWITHOUTBATTLERESULT_B__24_0_OFFSET UNITYSDK_OFFSET(0xD22A620)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C___GETORBLIST_B__14_0_OFFSET UNITYSDK_OFFSET(0xD22A5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData___c_TypeDefinitionIndex = 64506;

	class GridFightOrbServerData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightOrbServerData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightOrbServerData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbServerData___c_TypeDefinitionIndex)->GetStaticField(0x3F4F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightOrbEntityData*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightOrbEntityData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbServerData___c_TypeDefinitionIndex)->GetStaticField(0x3F4F8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>, ::System::Int32>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbServerData___c_TypeDefinitionIndex)->GetStaticField(0x3F500);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightOrbEntityData*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightOrbEntityData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbServerData___c_TypeDefinitionIndex)->GetStaticField(0x3F508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetOrbCountByType_b__11_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GETORBCOUNTBYTYPE_B__11_1_OFFSET))(this, a1);
		}

		::System::Int32 __GetOrbList_b__14_0(::RPG::Client::GridFightOrbEntityData* a1, ::RPG::Client::GridFightOrbEntityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C___GETORBLIST_B__14_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _get_OrbListWithoutBattleResult_b__24_0(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GET_ORBLISTWITHOUTBATTLERESULT_B__24_0_OFFSET))(this, a1);
		}
	};
}
