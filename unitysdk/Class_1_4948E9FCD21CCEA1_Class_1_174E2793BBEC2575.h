#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtra; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4948E9FCD21CCEA1_CLASS_1_174E2793BBEC2575__CTOR_OFFSET UNITYSDK_OFFSET(0x118ACB40)

inline static constexpr unsigned int Class_1_4948E9FCD21CCEA1_Class_1_174E2793BBEC2575_TypeDefinitionIndex = 55842;

class Class_1_4948E9FCD21CCEA1_Class_1_174E2793BBEC2575 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineDataExtra*>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1_CLASS_1_174E2793BBEC2575__CTOR_OFFSET))(this);
	}
};
