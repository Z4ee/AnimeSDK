#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/ReactiveBinding/LoadSessionPhase.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_1C6C366B8555A29F_TypeDefinitionIndex = 50293;

template <typename TView>
class Class_1_1C6C366B8555A29F : public ::System::Object
{
public:
	::System::Action* NDNMKBAJDAI; // 0x0
	::System::Collections::Generic::List_1<::System::Action*>* GJOJBHCKLBP; // 0x0
	::System::Collections::Generic::List_1<::System::Action_1<TView>*>* HIMBONECCJK; // 0x0
	::System::IDisposable* IECELKOCKBH; // 0x0
	TView NHNHKBJJKPP; // 0x0
	::Sofa::Runtime::ReactiveBinding::LoadSessionPhase NOHNKAIALPJ; // 0x0
	::System::Int32 FFFFJCOACPK; // 0x0
	::System::Int32 PJDJGIBOLMB; // 0x0
	::System::Int32 IMOIMKLGHKP; // 0x0
	::System::Boolean AFBEKOJJAKG; // 0x0
	::System::String* _LastFailureMessage_k__BackingField; // 0x0
};
