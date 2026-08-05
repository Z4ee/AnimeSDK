#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CFB7A3C91FBAC44A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1870A7E0)
#define CLASS_1_CFB7A3C91FBAC44A__CTOR_OFFSET UNITYSDK_OFFSET(0x1870A750)

inline static constexpr unsigned int Class_1_CFB7A3C91FBAC44A_TypeDefinitionIndex = 53129;

class Class_1_CFB7A3C91FBAC44A : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_5; // 0x10
	::System::String* Field_1_10; // 0x18
	::System::String* Field_1_11; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_F780BA94AF5E7E37_2>* Field_1_8; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::System::Boolean Field_1_0; // 0x38
	::System::Boolean Field_1_9; // 0x39
	::System::Boolean Field_1_6; // 0x3A
	::System::Int32 Field_1_7; // 0x3C

	::System::Void _ctor(::MoleMole::Config::ConfigAttachmentItem* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachmentItem*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CFB7A3C91FBAC44A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CFB7A3C91FBAC44A__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
