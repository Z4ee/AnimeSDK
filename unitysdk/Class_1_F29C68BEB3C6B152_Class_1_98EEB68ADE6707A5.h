#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F29C68BEB3C6B152_Struct_2_2ADB82C91F78DF57.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerable; }

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_98EEB68ADE6707A5_TypeDefinitionIndex = 70730;

template <typename TComponent>
class Class_1_F29C68BEB3C6B152_Class_1_98EEB68ADE6707A5 : public ::System::Object
{
public:
	::Class_1_F29C68BEB3C6B152_Struct_2_2ADB82C91F78DF57<TComponent, ::System::Collections::IEnumerable*> Field_1_0; // 0x0
	TComponent Field_1_1; // 0x0
	::System::Action_2<TComponent, ::System::Collections::IEnumerable*>* Field_1_2; // 0x0
};
