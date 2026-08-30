#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActionBarAnimation; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_1_4B4C89468E7136CE_METHOD_1_10FF31F13E8F73BF_OFFSET UNITYSDK_OFFSET(0x18479180)
#define CLASS_1_4B4C89468E7136CE_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x18479310)
#define CLASS_1_4B4C89468E7136CE_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x18479270)
#define CLASS_1_4B4C89468E7136CE_METHOD_1_C57E9CD0DC8E4C5D_OFFSET UNITYSDK_OFFSET(0x18478F90)
#define CLASS_1_4B4C89468E7136CE_METHOD_1_F6B167DD454A8D8F_OFFSET UNITYSDK_OFFSET(0x18479370)
#define CLASS_1_4B4C89468E7136CE_METHOD_1_FE6DE99A2BFC2737_OFFSET UNITYSDK_OFFSET(0x184790F0)
#define CLASS_1_4B4C89468E7136CE__CTOR_OFFSET UNITYSDK_OFFSET(0x18479080)

inline static constexpr unsigned int Class_1_4B4C89468E7136CE_TypeDefinitionIndex = 71203;

class Class_1_4B4C89468E7136CE : public ::System::Object
{
public:
	::System::String* KDODNCFEJFD; // 0x10
	::System::String* OAKFDGDMHKE; // 0x18
	::System::String* LHANMKCMPCA; // 0x20
	::System::String* DIDHOFMKIFH; // 0x28
	::System::String* NMHICHPNEHN; // 0x30
	::UnityEngine::Animation* PMOJILOJEPE; // 0x38
	::System::String* DEKOLFNNKCJ; // 0x40
	::System::String* FHDKIHEPAHF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4C89468E7136CE__CTOR_OFFSET))(this);
	}

	static ::Class_1_4B4C89468E7136CE* Method_1_C57E9CD0DC8E4C5D(::UnityEngine::Animation* a1)
	{
		return ((::Class_1_4B4C89468E7136CE*(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_1_4B4C89468E7136CE_METHOD_1_C57E9CD0DC8E4C5D_OFFSET))(a1);
	}

	::System::Void Method_1_FE6DE99A2BFC2737(::RPG::Client::ActionBarItemAction a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B4C89468E7136CE_METHOD_1_FE6DE99A2BFC2737_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4C89468E7136CE_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_F6B167DD454A8D8F(::RPG::Client::ActionBarAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_4B4C89468E7136CE_METHOD_1_F6B167DD454A8D8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B4C89468E7136CE_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::String* Method_1_10FF31F13E8F73BF(::RPG::Client::ActionBarItemAction a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B4C89468E7136CE_METHOD_1_10FF31F13E8F73BF_OFFSET))(this, a1, a2);
	}
};
