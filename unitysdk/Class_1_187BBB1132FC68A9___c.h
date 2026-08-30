#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_421;
namespace RPG::Client { class RelicItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_187BBB1132FC68A9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEDA9940)
#define CLASS_1_187BBB1132FC68A9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEDA9980)
#define CLASS_1_187BBB1132FC68A9___C__GETPREVIEWAVATARWITHVIRTUALRELICS_B__19_0_OFFSET UNITYSDK_OFFSET(0xEDA9990)

inline static constexpr unsigned int Class_1_187BBB1132FC68A9___c_TypeDefinitionIndex = 62766;

class Class_1_187BBB1132FC68A9___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_421*>>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_421*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_187BBB1132FC68A9___c_TypeDefinitionIndex)->GetStaticField(0xE7E0);
	}
	static ::Class_1_187BBB1132FC68A9___c** StaticGet___9()
	{
		return (::Class_1_187BBB1132FC68A9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_187BBB1132FC68A9___c_TypeDefinitionIndex)->GetStaticField(0xE7E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_187BBB1132FC68A9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_187BBB1132FC68A9___C__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_421*> _GetPreviewAvatarWithVirtualRelics_b__19_0(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_421*>(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_187BBB1132FC68A9___C__GETPREVIEWAVATARWITHVIRTUALRELICS_B__19_0_OFFSET))(this, a1);
	}
};
