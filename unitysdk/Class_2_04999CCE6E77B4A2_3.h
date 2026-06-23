#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_04999CCE6E77B4A2_3_Class_2_8504E12A716501A1_3;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_04999CCE6E77B4A2_3_METHOD_2_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x15CAB880)
#define CLASS_2_04999CCE6E77B4A2_3_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x15CAB7A0)
#define CLASS_2_04999CCE6E77B4A2_3_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x15CAB7B0)
#define CLASS_2_04999CCE6E77B4A2_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15CAB870)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_3_TypeDefinitionIndex = 42469;

class Class_2_04999CCE6E77B4A2_3 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_04999CCE6E77B4A2_3_Class_2_8504E12A716501A1_3* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_3__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_3_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_3_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_3_METHOD_2_38B862BB2192EC08_OFFSET))(this);
	}
};
