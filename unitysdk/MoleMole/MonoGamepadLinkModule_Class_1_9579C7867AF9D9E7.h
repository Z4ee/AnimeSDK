#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadLinkModule_Struct_2_BBD456EBC9087BC2_10.h"
#include "unitysdk/Struct_2_86542D529E3F4FF1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/NavigableLink.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOGAMEPADLINKMODULE_CLASS_1_9579C7867AF9D9E7__CTOR_OFFSET UNITYSDK_OFFSET(0x136DA690)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadLinkModule_Class_1_9579C7867AF9D9E7_TypeDefinitionIndex = 82504;

	class MonoGamepadLinkModule_Class_1_9579C7867AF9D9E7 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* Field_1_11; // 0x10
		::System::Collections::Generic::List_1<::System::Single>* Field_1_7; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadLinkModule_Struct_2_BBD456EBC9087BC2_10>* Field_1_5; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadLinkModule_Struct_2_BBD456EBC9087BC2_10>* Field_1_4; // 0x28
		::System::Collections::Generic::List_1<::Struct_2_86542D529E3F4FF1>* Field_1_3; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NavigableLink>* Field_1_6; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* Field_1_2; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x50
		::System::Collections::Generic::List_1<::System::Single>* Field_1_0; // 0x58
		::System::Int32 Field_1_9; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE_CLASS_1_9579C7867AF9D9E7__CTOR_OFFSET))(this);
		}
	};
}
