#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_74F9464E95963643__CTOR_OFFSET UNITYSDK_OFFSET(0x181E1340)

inline static constexpr unsigned int Class_1_74F9464E95963643_TypeDefinitionIndex = 41359;

class Class_1_74F9464E95963643 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DKGLDKILPIF; // 0x10
	::System::UInt32 CIHDMACAGPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F9464E95963643__CTOR_OFFSET))(this);
	}
};
