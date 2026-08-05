#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUISubItemParamDict_SubItemParamPair;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUISUBITEMPARAMDICT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B25360)

inline static constexpr unsigned int MonoUISubItemParamDict_TypeDefinitionIndex = 83591;

class MonoUISubItemParamDict : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MonoUISubItemParamDict_SubItemParamPair*>* paramList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUISUBITEMPARAMDICT__CTOR_OFFSET))(this);
	}
};
