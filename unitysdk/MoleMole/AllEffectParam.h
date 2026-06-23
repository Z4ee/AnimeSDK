#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GalgameEffectData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ALLEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCBB60)

namespace MoleMole
{
	inline static constexpr unsigned int AllEffectParam_TypeDefinitionIndex = 56984;

	class AllEffectParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalgameEffectData*>* effectList; // 0x10
		::System::Boolean enableForbiddenMaterialEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ALLEFFECTPARAM__CTOR_OFFSET))(this);
		}
	};
}
