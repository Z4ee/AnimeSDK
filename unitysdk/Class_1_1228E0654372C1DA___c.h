#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_1228E0654372C1DA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AC25D0)
#define CLASS_1_1228E0654372C1DA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC2610)
#define CLASS_1_1228E0654372C1DA___C__GETDICESURFACEDISPLAYDATALIST_B__17_0_OFFSET UNITYSDK_OFFSET(0x10AC2620)

inline static constexpr unsigned int Class_1_1228E0654372C1DA___c_TypeDefinitionIndex = 54468;

class Class_1_1228E0654372C1DA___c : public ::System::Object
{
public:
	static ::Class_1_1228E0654372C1DA___c** StaticGet___9()
	{
		return (::Class_1_1228E0654372C1DA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1228E0654372C1DA___c_TypeDefinitionIndex)->GetStaticField(0x46690);
	}
	static ::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1228E0654372C1DA___c_TypeDefinitionIndex)->GetStaticField(0x46698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1228E0654372C1DA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1228E0654372C1DA___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetDiceSurfaceDisplayDataList_b__17_0(::RPG::Client::RogueNousDiceSlotDataItem* a)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_1228E0654372C1DA___C__GETDICESURFACEDISPLAYDATALIST_B__17_0_OFFSET))(this, a);
	}
};
