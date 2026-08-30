#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA27820)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CREATECOMPARER_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BA278B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA27860)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_0_OFFSET UNITYSDK_OFFSET(0x1BA27D20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_1_OFFSET UNITYSDK_OFFSET(0x1BA27D40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__SORT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1BA278F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1BA27870)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_4_OFFSET UNITYSDK_OFFSET(0x1BA27B60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_5_OFFSET UNITYSDK_OFFSET(0x1BA27BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_6_OFFSET UNITYSDK_OFFSET(0x1BA27C80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_7_OFFSET UNITYSDK_OFFSET(0x1BA27CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter___c_TypeDefinitionIndex = 64820;

	class GridFightGameRefFilter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F60);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>** StaticGet___9__6_6()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F68);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::GameCore::GridFightTraitType>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::GameCore::GridFightTraitType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F70);
		}
		static ::System::Predicate_1<::RPG::Client::GridFightGameRefData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightGameRefData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F78);
		}
		static ::RPG::Client::GridFightGameRefFilter___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefFilter___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F80);
		}
		static ::System::Func_3<::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_3<::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F88);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>** StaticGet___9__6_7()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F90);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__58_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30F98);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>** StaticGet___9__6_5()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30FA0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x30FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__2_0(::RPG::Client::GridFightGameRefData* a1, ::RPG::Client::GridFightGameRefData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___CTOR_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CreateComparer_b__4_0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CREATECOMPARER_B__4_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _Sort_b__5_0(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__SORT_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 __ReleativeSort_b__6_4(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_4_OFFSET))(this, a1);
		}

		::System::Int32 __ReleativeSort_b__6_5(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_5_OFFSET))(this, a1);
		}

		::System::Int64 __ReleativeSort_b__6_6(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_6_OFFSET))(this, a1);
		}

		::System::Int64 __ReleativeSort_b__6_7(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_7_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitType _GetCurSeasonAllTraits_b__58_0(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _GetCurSeasonAllTraits_b__58_1(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_1_OFFSET))(this, a1);
		}
	};
}
