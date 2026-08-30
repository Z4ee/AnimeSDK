#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_ADCB430EA071C716___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164BAC40)
#define CLASS_1_ADCB430EA071C716___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164BAC80)
#define CLASS_1_ADCB430EA071C716___C__GETDICESURFACEDISPLAYDATALIST_B__17_0_OFFSET UNITYSDK_OFFSET(0x164BAC90)

inline static constexpr unsigned int Class_1_ADCB430EA071C716___c_TypeDefinitionIndex = 66947;

class Class_1_ADCB430EA071C716___c : public ::System::Object
{
public:
	static ::Class_1_ADCB430EA071C716___c** StaticGet___9()
	{
		return (::Class_1_ADCB430EA071C716___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADCB430EA071C716___c_TypeDefinitionIndex)->GetStaticField(0x632F0);
	}
	static ::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADCB430EA071C716___c_TypeDefinitionIndex)->GetStaticField(0x632F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADCB430EA071C716___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADCB430EA071C716___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetDiceSurfaceDisplayDataList_b__17_0(::RPG::Client::RogueNousDiceSlotDataItem* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_ADCB430EA071C716___C__GETDICESURFACEDISPLAYDATALIST_B__17_0_OFFSET))(this, a1);
	}
};
