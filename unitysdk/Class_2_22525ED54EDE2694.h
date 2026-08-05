#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectPattern/MonoEffectSoDataBase.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_22525ED54EDE2694__CTOR_OFFSET UNITYSDK_OFFSET(0x1143B240)

inline static constexpr unsigned int Class_2_22525ED54EDE2694_TypeDefinitionIndex = 57830;

class Class_2_22525ED54EDE2694 : public ::MoleMole::Config::EffectPattern::MonoEffectSoDataBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22525ED54EDE2694__CTOR_OFFSET))(this);
	}
};
