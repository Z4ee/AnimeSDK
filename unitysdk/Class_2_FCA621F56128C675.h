#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_736;
class Class_0_16E4307DCC419505_737;
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_FCA621F56128C675_CLEAR_OFFSET UNITYSDK_OFFSET(0x12ABC070)
#define CLASS_2_FCA621F56128C675_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x12ABC0F0)
#define CLASS_2_FCA621F56128C675_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12ABC200)
#define CLASS_2_FCA621F56128C675_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x12ABC490)
#define CLASS_2_FCA621F56128C675_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x12ABC170)
#define CLASS_2_FCA621F56128C675_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12ABC300)
#define CLASS_2_FCA621F56128C675_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x12ABC520)
#define CLASS_2_FCA621F56128C675_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12ABC390)
#define CLASS_2_FCA621F56128C675_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0x12ABC5B0)
#define CLASS_2_FCA621F56128C675_METHOD_2_88BBB895DF6C5669_OFFSET UNITYSDK_OFFSET(0x12ABBE60)
#define CLASS_2_FCA621F56128C675_METHOD_2_E5A5EFB9783AE9D3_OFFSET UNITYSDK_OFFSET(0x12ABC020)
#define CLASS_2_FCA621F56128C675__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABC660)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x12ABC670)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x12ABC6E0)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12ABC6F0)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12ABC700)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12ABC710)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0x12ABC720)

inline static constexpr unsigned int Class_2_FCA621F56128C675_TypeDefinitionIndex = 59943;

class Class_2_FCA621F56128C675 : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
{
public:
	::RPG::GameCore::BattleGridFightAvatarData* Field_2_0; // 0x28
	::RPG::Client::GridFightBattleGameContext* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675__CTOR_OFFSET))(this);
	}

	static ::Class_2_FCA621F56128C675* Method_2_88BBB895DF6C5669(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::Class_2_FCA621F56128C675*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_METHOD_2_88BBB895DF6C5669_OFFSET))(a1);
	}

	::System::Void Method_2_E5A5EFB9783AE9D3(::RPG::Client::GridFightBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_METHOD_2_E5A5EFB9783AE9D3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CLEAR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_736* CreateAvatarDataProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_736*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEAVATARDATAPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_737* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_737*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATETRAITCOMPONENT_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightValueComponent* CreateValueComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEVALUECOMPONENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEEQUIPITEMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATETRAITS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* CreateValueMap(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEVALUEMAP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_736* __iFixBaseProxy_CreateAvatarDataProvider(::RPG::Client::GridFightRole* P0)
	{
		return ((::Class_0_16E4307DCC419505_736*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEAVATARDATAPROVIDER_OFFSET))(this, P0);
	}

	::RPG::Client::GridFightEquipComponent* __iFixBaseProxy_CreateEquipComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET))(this, P0);
	}

	::RPG::Client::GridFightTraitComponent* __iFixBaseProxy_CreateTraitComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET))(this, P0);
	}

	::RPG::Client::GridFightValueComponent* __iFixBaseProxy_CreateValueComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUECOMPONENT_OFFSET))(this, P0);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* __iFixBaseProxy_CreateValueMap(::RPG::Client::GridFightRole* P0)
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUEMAP_OFFSET))(this, P0);
	}
};
