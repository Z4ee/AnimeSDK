#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5B12A0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B12E0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_0_OFFSET UNITYSDK_OFFSET(0xA5B12F0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_1_OFFSET UNITYSDK_OFFSET(0xA5B1380)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_2_OFFSET UNITYSDK_OFFSET(0xA5B1410)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_3_OFFSET UNITYSDK_OFFSET(0xA5B1430)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_4_OFFSET UNITYSDK_OFFSET(0xA5B14B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex = 60188;

	class GridFightTraitBackStrengthenFrontEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex)->GetStaticField(0x1A660);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex)->GetStaticField(0x1A668);
		}
		static ::RPG::Client::GridFightTraitBackStrengthenFrontEffect___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitBackStrengthenFrontEffect___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex)->GetStaticField(0x1A670);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex)->GetStaticField(0x1A678);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex)->GetStaticField(0x1A680);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__2_4()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex)->GetStaticField(0x1A688);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowMemberUIDs_b__2_0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_0_OFFSET))(this, x);
		}

		::System::Boolean _GetShowMemberUIDs_b__2_1(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetShowMemberUIDs_b__2_2(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_2_OFFSET))(this, x);
		}

		::System::Boolean _GetShowMemberUIDs_b__2_3(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_3_OFFSET))(this, x);
		}

		::System::Boolean _GetShowMemberUIDs_b__2_4(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__2_4_OFFSET))(this, x);
		}
	};
}
