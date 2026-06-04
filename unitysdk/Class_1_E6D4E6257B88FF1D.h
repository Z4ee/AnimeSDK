#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C16080C084A20369_MeasureAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6D4E6257B88FF1D_METHOD_1_1A5CB4F57CDDD315_OFFSET UNITYSDK_OFFSET(0xA3F7170)
#define CLASS_1_E6D4E6257B88FF1D_METHOD_1_DBE38703F8E74800_OFFSET UNITYSDK_OFFSET(0xA3F73C0)
#define CLASS_1_E6D4E6257B88FF1D_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3F7270)
#define CLASS_1_E6D4E6257B88FF1D__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F7260)
#define CLASS_1_E6D4E6257B88FF1D___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3F74C0)

inline static constexpr unsigned int Class_1_E6D4E6257B88FF1D_TypeDefinitionIndex = 58298;

class Class_1_E6D4E6257B88FF1D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_1; // 0x18
	::UnityEngine::Vector2 Field_1_2; // 0x20
	::Class_1_C16080C084A20369_MeasureAction Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4E6257B88FF1D__CTOR_OFFSET))(this);
	}

	static ::Class_1_E6D4E6257B88FF1D* Method_1_1A5CB4F57CDDD315(::Class_1_C16080C084A20369_MeasureAction a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a2, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a3, ::UnityEngine::Vector2 a4)
	{
		return ((::Class_1_E6D4E6257B88FF1D*(*)(::Class_1_C16080C084A20369_MeasureAction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E6D4E6257B88FF1D_METHOD_1_1A5CB4F57CDDD315_OFFSET))(a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4E6257B88FF1D_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_DBE38703F8E74800(::Class_1_C16080C084A20369_MeasureAction a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_C16080C084A20369_MeasureAction))((::PBYTE)hIl2Cpp + CLASS_1_E6D4E6257B88FF1D_METHOD_1_DBE38703F8E74800_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D4E6257B88FF1D___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
