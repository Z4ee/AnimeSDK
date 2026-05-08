#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }

#define NODECANVAS_FRAMEWORK_BBPARAMETER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF120)
#define NODECANVAS_FRAMEWORK_BBPARAMETER___C__DISPLAYCLASS13_0__SETBBFIELDS_B__0_OFFSET UNITYSDK_OFFSET(0x1AFCF130)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int BBParameter___c__DisplayClass13_0_TypeDefinitionIndex = 27167;

	class BBParameter___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::IBlackboard* bb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetBBFields_b__0(::System::Object* o, ::ParadoxNotion::Serialization::FullSerializer::fsData* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_BBPARAMETER___C__DISPLAYCLASS13_0__SETBBFIELDS_B__0_OFFSET))(this, o, d);
		}
	};
}
