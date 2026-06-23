#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Comic { class MonoComicBubble; }
namespace UnityEngine::Timeline { class BubbleEvent; }

#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1702EAF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1702ED90)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1702EDF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1702EDA0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1702EAE0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1702EAD0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubble_Class_1_CFCD595834949C8D_TypeDefinitionIndex = 62375;

	class MonoComicBubble_Class_1_CFCD595834949C8D : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::BubbleEvent* Field_1_3; // 0x10
		::MoleMole::Comic::MonoComicBubble* Field_1_2; // 0x18
		::System::Int32 Field_1_0; // 0x20
		::System::Single Field_1_1; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLASS_1_CFCD595834949C8D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
