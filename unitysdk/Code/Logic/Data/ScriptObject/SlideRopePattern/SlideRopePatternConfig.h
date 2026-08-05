#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_SLIDEROPEPATTERNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1652B0E0)

namespace Code::Logic::Data::ScriptObject::SlideRopePattern
{
	inline static constexpr unsigned int SlideRopePatternConfig_TypeDefinitionIndex = 50614;

	class SlideRopePatternConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* DicSlideRopePatternData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_SLIDEROPEPATTERNCONFIG__CTOR_OFFSET))(this);
		}
	};
}
