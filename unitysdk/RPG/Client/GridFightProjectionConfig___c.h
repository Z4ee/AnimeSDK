#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA565FD0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA566010)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GETTRAITSUMMONRULEACTIVE_B__28_0_OFFSET UNITYSDK_OFFSET(0xA5660D0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GET_SORTEDTRAITIDS_B__9_0_OFFSET UNITYSDK_OFFSET(0xA566020)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C___GETUNLOCKRULETIP_B__29_0_OFFSET UNITYSDK_OFFSET(0xA566130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjectionConfig___c_TypeDefinitionIndex = 59921;

	class GridFightProjectionConfig___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightProjectionConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightProjectionConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x172F0);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x172F8);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x17300);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightProjectionConfig___c_TypeDefinitionIndex)->GetStaticField(0x17308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_SortedTraitIDs_b__9_0(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GET_SORTEDTRAITIDS_B__9_0_OFFSET))(this, x);
		}

		::System::Boolean _GetTraitSummonRuleActive_b__28_0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GETTRAITSUMMONRULEACTIVE_B__28_0_OFFSET))(this, x);
		}

		::System::UInt32 __GetUnlockRuleTip_b__29_0(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C___GETUNLOCKRULETIP_B__29_0_OFFSET))(this, x);
		}
	};
}
