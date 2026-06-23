#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class ClothRenderers; }
namespace MoleMole { class ClothToRenderersDataDicEntry; }
namespace MoleMole { class ClothWrapper; }

#define MOLEMOLE_CLOTHTORENDERERSDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x106B3000)

namespace MoleMole
{
	inline static constexpr unsigned int ClothToRenderersDataDic_TypeDefinitionIndex = 50066;

	class ClothToRenderersDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::MoleMole::ClothWrapper*, ::MoleMole::ClothRenderers*, ::MoleMole::ClothToRenderersDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHTORENDERERSDATADIC__CTOR_OFFSET))(this);
		}
	};
}
