#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG
{
	inline static constexpr unsigned int DelegateBinder_4_TypeDefinitionIndex = 6721;

	template <typename TType, typename TBind, typename TParam, typename TResult>
	class DelegateBinder_4 : public ::System::Object
	{
	public:
		static TType* StaticGet__tempInst()
		{
			return (TType*)Il2CppClass::FromTypeDefinitionIndex(DelegateBinder_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		TBind _bindDelg; // 0x0
		TResult _resultDelg; // 0x0
		TParam _t; // 0x0
	};
}
