#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA610F0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61130)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GETTRAITSUMMONRULEACTIVE_B__32_0_OFFSET UNITYSDK_OFFSET(0x1CA61250)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GET_SORTEDTRAITIDS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CA61140)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C___GETUNLOCKRULETIP_B__33_0_OFFSET UNITYSDK_OFFSET(0x1CA612C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjectionConfig___c_TypeDefinitionIndex = 65141;

	class GridFightProjectionConfig___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightProjectionConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightProjectionConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x3DF50);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x3DF58);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x3DF60);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x3DF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_SortedTraitIDs_b__9_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GET_SORTEDTRAITIDS_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTraitSummonRuleActive_b__32_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GETTRAITSUMMONRULEACTIVE_B__32_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetUnlockRuleTip_b__33_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C___GETUNLOCKRULETIP_B__33_0_OFFSET))(this, a1);
		}
	};
}
