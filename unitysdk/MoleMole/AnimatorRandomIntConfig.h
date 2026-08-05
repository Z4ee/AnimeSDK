#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorRandomInt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMATORRANDOMINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF119870)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorRandomIntConfig_TypeDefinitionIndex = 47231;

	class AnimatorRandomIntConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::AnimatorRandomInt*>* AnimatorRandomInts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORRANDOMINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
