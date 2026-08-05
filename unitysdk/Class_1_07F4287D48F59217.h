#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController_UIBuddySelect; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_07F4287D48F59217_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xF63CB10)
#define CLASS_1_07F4287D48F59217_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0xF63C7D0)
#define CLASS_1_07F4287D48F59217_METHOD_1_595911FAAE7555DC_OFFSET UNITYSDK_OFFSET(0xF63CAC0)
#define CLASS_1_07F4287D48F59217_METHOD_1_75EE104D848AEC8F_OFFSET UNITYSDK_OFFSET(0xF63C590)
#define CLASS_1_07F4287D48F59217_METHOD_1_DC732D755E16D8DB_OFFSET UNITYSDK_OFFSET(0xF63CA40)
#define CLASS_1_07F4287D48F59217__CTOR_OFFSET UNITYSDK_OFFSET(0xF63C580)

inline static constexpr unsigned int Class_1_07F4287D48F59217_TypeDefinitionIndex = 83474;

class Class_1_07F4287D48F59217 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Action* Field_1_6; // 0x18
	::MoleMole::UILineupSelectPageController_UIBuddySelect* Field_1_0; // 0x20
	::UnityEngine::UI::RawImage* Field_1_1; // 0x28
	::System::Int32 Field_1_2; // 0x30
	::System::Int32 Field_1_3; // 0x34

	::System::Void _ctor(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_07F4287D48F59217__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_75EE104D848AEC8F(::System::Int32 a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_1_07F4287D48F59217_METHOD_1_75EE104D848AEC8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F4287D48F59217_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_1_595911FAAE7555DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F4287D48F59217_METHOD_1_595911FAAE7555DC_OFFSET))(this);
	}

	::System::Int32 Method_1_DC732D755E16D8DB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F4287D48F59217_METHOD_1_DC732D755E16D8DB_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F4287D48F59217_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
