#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_CD49A826DD734D57__CTOR_OFFSET UNITYSDK_OFFSET(0x1535BFC0)

inline static constexpr unsigned int Class_1_CD49A826DD734D57_TypeDefinitionIndex = 80297;

class Class_1_CD49A826DD734D57 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Action* Field_1_6; // 0x18
	::UnityEngine::RectTransform* Field_1_5; // 0x20
	::System::Action_1<::System::Int32>* Field_1_7; // 0x28
	::System::Int32 Field_1_3; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Int32 Field_1_1; // 0x38
	::System::Boolean Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD49A826DD734D57__CTOR_OFFSET))(this);
	}
};
