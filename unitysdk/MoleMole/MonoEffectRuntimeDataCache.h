#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_69EA47680D9A92E8;
namespace MoleMole { class FloatRendererFader; }
namespace MoleMole { class LightFader; }
namespace MoleMole { class MatKeyPropValueFaderByIndex; }
namespace MoleMole { class MatKeyWordFaderByIndex; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTRUNTIMEDATACACHE_GET_FULLYCACHED_OFFSET UNITYSDK_OFFSET(0x8194A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectRuntimeDataCache_TypeDefinitionIndex = 79421;

	struct alignas(8) MonoEffectRuntimeDataCache
	{
		::System::Boolean LightCached; // 0x10
		::Il2CppArray<::MoleMole::LightFader*>* LightFaderArray; // 0x18
		::Il2CppArray<::System::Single>* LightCtrlArray; // 0x20
		::System::Boolean AlphaFaderCached; // 0x28
		::Il2CppArray<::MoleMole::FloatRendererFader*>* AlphaFaderArray; // 0x30
		::Il2CppArray<::System::Single>* RendererCtrlArray; // 0x38
		::System::Boolean DitherFaderCached; // 0x40
		::Il2CppArray<::MoleMole::FloatRendererFader*>* DitherFaderArray; // 0x48
		::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* DitherMatFaderArray; // 0x50
		::System::Boolean ColorAdjustmentFadersCached; // 0x58
		::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* ColorCorrectionMatFaderArray; // 0x60
		::Il2CppArray<::MoleMole::MatKeyPropValueFaderByIndex*>* ColorCorrectionMatLerpFaderArray; // 0x68
		::System::Boolean BuffFadersCached; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* BuffRendererFaderDict; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_69EA47680D9A92E8*>*>* BuffKeywordFaderDict; // 0x80

		::System::Boolean get_FullyCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTRUNTIMEDATACACHE_GET_FULLYCACHED_OFFSET))(this);
		}
	};
}
