#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"

class Class_0_16E4307DCC419505_5;
namespace System { class String; }

#define CLASS_1_F0E41D9691E52155_METHOD_1_4499BC0937F279F9_OFFSET UNITYSDK_OFFSET(0x19D6B9C0)
#define CLASS_1_F0E41D9691E52155_METHOD_1_F7DC76890E3D2082_OFFSET UNITYSDK_OFFSET(0x19D84970)
#define CLASS_1_F0E41D9691E52155_SET_OFFSET UNITYSDK_OFFSET(0x19D84950)
#define CLASS_1_F0E41D9691E52155__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6C540)

inline static constexpr unsigned int Class_1_F0E41D9691E52155_TypeDefinitionIndex = 9650;

class Class_1_F0E41D9691E52155 : public ::System::Object
{
public:
	::UnityEngine::SystemLanguage Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E41D9691E52155__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0E41D9691E52155_SET_OFFSET))(this, a1);
	}

	static ::UnityEngine::SystemLanguage Method_1_4499BC0937F279F9(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::UnityEngine::SystemLanguage(*)(::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_F0E41D9691E52155_METHOD_1_4499BC0937F279F9_OFFSET))(a1);
	}

	::UnityEngine::SystemLanguage Method_1_F7DC76890E3D2082(::System::String* a1)
	{
		return ((::UnityEngine::SystemLanguage(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0E41D9691E52155_METHOD_1_F7DC76890E3D2082_OFFSET))(this, a1);
	}
};
