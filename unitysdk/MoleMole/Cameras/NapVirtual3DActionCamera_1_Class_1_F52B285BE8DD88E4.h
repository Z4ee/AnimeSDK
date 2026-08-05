#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class WeakReference_1; }

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtual3DActionCamera_1_Class_1_F52B285BE8DD88E4_TypeDefinitionIndex = 62848;

	template <typename T>
	class NapVirtual3DActionCamera_1_Class_1_F52B285BE8DD88E4 : public ::System::Object
	{
	public:
		::System::WeakReference_1<T>* Field_1_1; // 0x0
		::System::Func_2<T, ::System::Action*>* Field_1_0; // 0x0
	};
}
