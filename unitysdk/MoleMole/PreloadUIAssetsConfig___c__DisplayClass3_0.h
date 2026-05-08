#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PreloadObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_PRELOADUIASSETSCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B49BE0)
#define MOLEMOLE_PRELOADUIASSETSCONFIG___C__DISPLAYCLASS3_0__REMOVEREPEATEDS_G__RMFUNC_0_OFFSET UNITYSDK_OFFSET(0x15B49BF0)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadUIAssetsConfig___c__DisplayClass3_0_TypeDefinitionIndex = 63915;

	class PreloadUIAssetsConfig___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* assetPaths; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADUIASSETSCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveRepeateds_g__RmFunc_0(::MoleMole::PreloadObject* preloadObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::PreloadObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADUIASSETSCONFIG___C__DISPLAYCLASS3_0__REMOVEREPEATEDS_G__RMFUNC_0_OFFSET))(this, preloadObject);
		}
	};
}
