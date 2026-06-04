#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_787;
class Class_0_16E4307DCC419505_788;
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

#define CLASS_2_FCA621F56128C675_CLEAR_OFFSET UNITYSDK_OFFSET(0x13C26950)
#define CLASS_2_FCA621F56128C675_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x13C269D0)
#define CLASS_2_FCA621F56128C675_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x13C26AE0)
#define CLASS_2_FCA621F56128C675_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x13C26D70)
#define CLASS_2_FCA621F56128C675_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x13C26A50)
#define CLASS_2_FCA621F56128C675_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x13C26BE0)
#define CLASS_2_FCA621F56128C675_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x13C26E00)
#define CLASS_2_FCA621F56128C675_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0x13C26C70)
#define CLASS_2_FCA621F56128C675_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0x13C26E90)
#define CLASS_2_FCA621F56128C675_METHOD_2_88BBB895DF6C5669_OFFSET UNITYSDK_OFFSET(0x13C26740)
#define CLASS_2_FCA621F56128C675_METHOD_2_E5A5EFB9783AE9D3_OFFSET UNITYSDK_OFFSET(0x13C26900)
#define CLASS_2_FCA621F56128C675__CTOR_OFFSET UNITYSDK_OFFSET(0x13C26F40)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x13C26F50)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x13C26FC0)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x13C26FD0)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x13C26FE0)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0x13C26FF0)
#define CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0x13C27000)

inline static constexpr unsigned int Class_2_FCA621F56128C675_TypeDefinitionIndex = 60878;

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

	::Class_0_16E4307DCC419505_787* CreateAvatarDataProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_787*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEAVATARDATAPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_788* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_788*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
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

	::Class_0_16E4307DCC419505_787* __iFixBaseProxy_CreateAvatarDataProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_787*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEAVATARDATAPROVIDER_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipComponent* __iFixBaseProxy_CreateEquipComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightTraitComponent* __iFixBaseProxy_CreateTraitComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightValueComponent* __iFixBaseProxy_CreateValueComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUECOMPONENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* __iFixBaseProxy_CreateValueMap(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_FCA621F56128C675___IFIXBASEPROXY_CREATEVALUEMAP_OFFSET))(this, a1);
	}
};
