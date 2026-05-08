#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x117B01A0)
#define CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x117AFB30)
#define CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8_METHOD_1_EC3567D53499D704_OFFSET UNITYSDK_OFFSET(0x117AFB20)
#define CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8__CTOR_OFFSET UNITYSDK_OFFSET(0x117AFB10)

inline static constexpr unsigned int Class_3_6D05AEDEBD75F85C_Class_1_B86CB8AD4EB69AB8_TypeDefinitionIndex = 62688;

class Class_3_6D05AEDEBD75F85C_Class_1_B86CB8AD4EB69AB8 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Field_1_5; // 0x18
	::MoleMole::ScreenPlayer* Field_1_1; // 0x20
	::MoleMole::ScreenPlayer* Field_1_0; // 0x28
	::UnityEngine::GameObject* Field_1_3; // 0x30
	::UnityEngine::Renderer* Field_1_4; // 0x38
	::System::String* Field_1_8; // 0x40
	::MoleMole::Battle::Entity* Field_1_9; // 0x48
	::System::Int32 Field_1_6; // 0x50
	::System::Boolean Field_1_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC3567D53499D704(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8_METHOD_1_EC3567D53499D704_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_CLASS_1_B86CB8AD4EB69AB8_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
