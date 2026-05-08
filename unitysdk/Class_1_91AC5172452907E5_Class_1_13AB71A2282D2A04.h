#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04_METHOD_1_2F61DC308D42F30F_OFFSET UNITYSDK_OFFSET(0xFDDE0A0)
#define CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04_METHOD_1_4028E7F603211B7E_OFFSET UNITYSDK_OFFSET(0xFDDDDE0)
#define CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04_METHOD_1_E4670F7C74261771_OFFSET UNITYSDK_OFFSET(0xFDDD760)
#define CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD34D0)

inline static constexpr unsigned int Class_1_91AC5172452907E5_Class_1_13AB71A2282D2A04_TypeDefinitionIndex = 44179;

class Class_1_91AC5172452907E5_Class_1_13AB71A2282D2A04 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* Field_1_2; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E4670F7C74261771(::UnityEngine::Keyframe a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04_METHOD_1_E4670F7C74261771_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4028E7F603211B7E(::UnityEngine::Keyframe a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04_METHOD_1_4028E7F603211B7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F61DC308D42F30F(::UnityEngine::Keyframe a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5_CLASS_1_13AB71A2282D2A04_METHOD_1_2F61DC308D42F30F_OFFSET))(this, a1);
	}
};
