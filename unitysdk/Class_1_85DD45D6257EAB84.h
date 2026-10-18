#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_85DD45D6257EAB84_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xC9F1380)
#define CLASS_1_85DD45D6257EAB84_METHOD_1_43120711DC71F4B2_OFFSET UNITYSDK_OFFSET(0xC9F12D0)
#define CLASS_1_85DD45D6257EAB84_SET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xC9F1390)
#define CLASS_1_85DD45D6257EAB84__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F1370)

inline static constexpr unsigned int Class_1_85DD45D6257EAB84_TypeDefinitionIndex = 71181;

class Class_1_85DD45D6257EAB84 : public ::System::Object
{
public:
	::UnityEngine::UI::Text* _TextDesc_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85DD45D6257EAB84__CTOR_OFFSET))(this);
	}

	static ::Class_1_85DD45D6257EAB84* Method_1_43120711DC71F4B2(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_85DD45D6257EAB84*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_85DD45D6257EAB84_METHOD_1_43120711DC71F4B2_OFFSET))(a1);
	}

	::UnityEngine::UI::Text* get_TextDesc()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85DD45D6257EAB84_GET_TEXTDESC_OFFSET))(this);
	}

	::System::Void set_TextDesc(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_85DD45D6257EAB84_SET_TEXTDESC_OFFSET))(this, a1);
	}
};
