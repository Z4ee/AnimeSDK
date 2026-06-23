#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_FDAE4A79BFDCABCC_METHOD_1_4DD59F29A8101E38_OFFSET UNITYSDK_OFFSET(0x188E0060)
#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_FDAE4A79BFDCABCC__CTOR_OFFSET UNITYSDK_OFFSET(0x188E0050)

inline static constexpr unsigned int Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7_Class_1_FDAE4A79BFDCABCC_TypeDefinitionIndex = 40913;

class Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7_Class_1_FDAE4A79BFDCABCC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_FDAE4A79BFDCABCC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4DD59F29A8101E38(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_FDAE4A79BFDCABCC_METHOD_1_4DD59F29A8101E38_OFFSET))(this, a1);
	}
};
