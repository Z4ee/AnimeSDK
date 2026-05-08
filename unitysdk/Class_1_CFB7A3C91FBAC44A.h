#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CFB7A3C91FBAC44A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1791D5D0)
#define CLASS_1_CFB7A3C91FBAC44A__CTOR_OFFSET UNITYSDK_OFFSET(0x1791D540)

inline static constexpr unsigned int Class_1_CFB7A3C91FBAC44A_TypeDefinitionIndex = 74174;

class Class_1_CFB7A3C91FBAC44A : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_4; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_F780BA94AF5E7E37_2>* Field_1_8; // 0x28
	::UnityEngine::Transform* Field_1_3; // 0x30
	::System::Int32 Field_1_1; // 0x38
	::System::Boolean Field_1_0; // 0x3C
	::System::Boolean Field_1_2; // 0x3D
	::System::Boolean Field_1_7; // 0x3E

	::System::Void _ctor(::MoleMole::Config::ConfigAttachmentItem* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachmentItem*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CFB7A3C91FBAC44A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CFB7A3C91FBAC44A__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
