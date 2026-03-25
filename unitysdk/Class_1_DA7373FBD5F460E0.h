#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DA7373FBD5F460E0_METHOD_1_AFA88CDDB956482C_OFFSET UNITYSDK_OFFSET(0x11518670)
#define CLASS_1_DA7373FBD5F460E0__CTOR_OFFSET UNITYSDK_OFFSET(0x11518910)

inline static constexpr unsigned int Class_1_DA7373FBD5F460E0_TypeDefinitionIndex = 60532;

class Class_1_DA7373FBD5F460E0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_4; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::UnityEngine::Vector3 Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA7373FBD5F460E0__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AFA88CDDB956482C(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DA7373FBD5F460E0_METHOD_1_AFA88CDDB956482C_OFFSET))(this, a1);
	}
};
