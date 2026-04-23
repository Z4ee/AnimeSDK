#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_737;
class Class_1_B1FF62FAE312BC49_4;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_D5DCBC1F53FF7443_CLEAR_OFFSET UNITYSDK_OFFSET(0xA559D10)
#define CLASS_2_D5DCBC1F53FF7443_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0xA559DE0)
#define CLASS_2_D5DCBC1F53FF7443_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xA559D90)
#define CLASS_2_D5DCBC1F53FF7443_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0xA55A1F0)
#define CLASS_2_D5DCBC1F53FF7443_METHOD_2_617C5F75EC8B9441_OFFSET UNITYSDK_OFFSET(0xA559B50)
#define CLASS_2_D5DCBC1F53FF7443__CTOR_OFFSET UNITYSDK_OFFSET(0xA55A280)
#define CLASS_2_D5DCBC1F53FF7443___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA55A290)

inline static constexpr unsigned int Class_2_D5DCBC1F53FF7443_TypeDefinitionIndex = 59942;

class Class_2_D5DCBC1F53FF7443 : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
{
public:
	::Class_1_B1FF62FAE312BC49_4* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5DCBC1F53FF7443__CTOR_OFFSET))(this);
	}

	static ::Class_2_D5DCBC1F53FF7443* Method_2_617C5F75EC8B9441(::Class_1_B1FF62FAE312BC49_4* a1)
	{
		return ((::Class_2_D5DCBC1F53FF7443*(*)(::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + CLASS_2_D5DCBC1F53FF7443_METHOD_2_617C5F75EC8B9441_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5DCBC1F53FF7443_CLEAR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_737* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_737*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_D5DCBC1F53FF7443_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_D5DCBC1F53FF7443_CREATEEQUIPITEMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_D5DCBC1F53FF7443_CREATETRAITS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5DCBC1F53FF7443___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
