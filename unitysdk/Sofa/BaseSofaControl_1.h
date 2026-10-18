#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
#include "unitysdk/Struct_2_E70C193A39BC645E.h"

class Class_0_16E4307DCC419505_405;
class Class_0_16E4307DCC419505_409;
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_850BA6CC99450B87;
template <typename T> class Class_1_AFEE9ED33ABC7DA5;
template <typename T> class Class_1_D90286A3143EECEC;
template <typename T> class Class_1_F9A52EAB94D4ABE9;

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaControl_1_TypeDefinitionIndex = 49682;

	template <typename TViewModel>
	class BaseSofaControl_1 : public ::Sofa::BaseSofaControl
	{
	public:
		::Class_1_D90286A3143EECEC<TViewModel>* _ReactiveBindingContext; // 0x0
		::Class_1_AFEE9ED33ABC7DA5<TViewModel>* _ReactiveBindingRuntime; // 0x0
		::Class_1_850BA6CC99450B87<TViewModel>* _StagecraftRuntime; // 0x0
		::Class_0_16E4307DCC419505_405* _VisualParent; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_405*>* _VisualChildren; // 0x0
		::Class_1_F9A52EAB94D4ABE9<TViewModel>* _StagecraftManifest; // 0x0
	};
}
