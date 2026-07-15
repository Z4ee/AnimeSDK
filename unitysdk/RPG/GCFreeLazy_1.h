#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/LazyThreadSafetyMode.h"

namespace RPG { template <typename T> class GCFreeLazy_1_Boxed; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

namespace RPG
{
	inline static constexpr unsigned int GCFreeLazy_1_TypeDefinitionIndex = 6746;

	template <typename T>
	class GCFreeLazy_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncClosureR_1<T>* StaticGet_ALREADY_INVOKED_SENTINEL()
		{
			return (::RPG::GCFreeClosure::FuncClosureR_1<T>*)Il2CppClass::FromTypeDefinitionIndex(GCFreeLazy_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Object* m_boxed; // 0x0
		::RPG::GCFreeClosure::FuncClosureR_1<T> m_valueFactory; // 0x0
		::System::Object* m_threadSafeObj; // 0x0
	};
}
