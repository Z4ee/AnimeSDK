#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorClipBlendData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMATORBLENDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x150D9210)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorBlendGroup_TypeDefinitionIndex = 86647;

	class AnimatorBlendGroup : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::String* BlendParam; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::AnimatorClipBlendData*>* Data; // 0x20
		::System::Int32 MoveType; // 0x28
		::System::Boolean PassZero; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP__CTOR_OFFSET))(this);
		}
	};
}
