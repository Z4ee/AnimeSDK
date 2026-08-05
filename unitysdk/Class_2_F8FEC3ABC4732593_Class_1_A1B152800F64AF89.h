#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F8FEC3ABC4732593_CLASS_1_A1B152800F64AF89__CTOR_OFFSET UNITYSDK_OFFSET(0x15071220)

inline static constexpr unsigned int Class_2_F8FEC3ABC4732593_Class_1_A1B152800F64AF89_TypeDefinitionIndex = 79622;

class Class_2_F8FEC3ABC4732593_Class_1_A1B152800F64AF89 : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_CLASS_1_A1B152800F64AF89__CTOR_OFFSET))(this);
	}
};
