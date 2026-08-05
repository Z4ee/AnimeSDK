#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AnimatorRandomIntType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMATORRANDOMINT__CTOR_OFFSET UNITYSDK_OFFSET(0x116C6B60)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorRandomInt_TypeDefinitionIndex = 67177;

	class AnimatorRandomInt : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* RandomIntDict; // 0x10
		::MoleMole::AnimatorRandomIntType RandomIntType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORRANDOMINT__CTOR_OFFSET))(this);
		}
	};
}
