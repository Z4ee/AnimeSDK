#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager___O_TypeDefinitionIndex = 69820;

	class MonoEffectManager___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet__0___GetEffectPathLOD()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager___O_TypeDefinitionIndex)->GetStaticField(0xCC80);
		}
	};
}
