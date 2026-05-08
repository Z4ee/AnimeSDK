#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole { class ClothRenderers; }
namespace MoleMole { class ClothWrapper; }

#define MOLEMOLE_CLOTHTORENDERERSDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1398EE00)

namespace MoleMole
{
	inline static constexpr unsigned int ClothToRenderersDataDicEntry_TypeDefinitionIndex = 81908;

	class ClothToRenderersDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::MoleMole::ClothWrapper*, ::MoleMole::ClothRenderers*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHTORENDERERSDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
