#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"

namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_C05673AD314EDECB_METHOD_1_AE45C97EC354283D_OFFSET UNITYSDK_OFFSET(0x10096A50)

inline static constexpr unsigned int Class_1_C05673AD314EDECB_TypeDefinitionIndex = 72518;

class Class_1_C05673AD314EDECB : public ::System::Object
{
public:
	static ::System::Boolean Method_1_AE45C97EC354283D(::MoleMole::UIBangkovItemInfoWidgetController* a1, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::UIBangkovItemInfoWidgetController*, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + CLASS_1_C05673AD314EDECB_METHOD_1_AE45C97EC354283D_OFFSET))(a1, a2);
	}
};
