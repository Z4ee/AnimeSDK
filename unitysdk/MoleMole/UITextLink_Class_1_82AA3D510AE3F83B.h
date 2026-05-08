#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITEXTLINK_CLASS_1_82AA3D510AE3F83B__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2D890)

namespace MoleMole
{
	inline static constexpr unsigned int UITextLink_Class_1_82AA3D510AE3F83B_TypeDefinitionIndex = 74432;

	class UITextLink_Class_1_82AA3D510AE3F83B : public ::System::Object
	{
	public:
		::System::String* Field_1_2; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* Field_1_3; // 0x18
		::System::Int32 Field_1_1; // 0x20
		::System::Int32 Field_1_0; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_CLASS_1_82AA3D510AE3F83B__CTOR_OFFSET))(this);
		}
	};
}
