#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_D6D284A69AB5382B.h"

class Class_0_16E4307DCC419505_132;
class Class_2_31D46BADA568558B_Class_2_8504E12A716501A1_22;
namespace MoleMole { class UIMusicBattleInLevelPlayWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_31D46BADA568558B_METHOD_2_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x13629BD0)
#define CLASS_2_31D46BADA568558B_METHOD_2_7CDE4E5FA5ECCC7C_OFFSET UNITYSDK_OFFSET(0x13629C30)
#define CLASS_2_31D46BADA568558B_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x13629A50)
#define CLASS_2_31D46BADA568558B_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x13629970)
#define CLASS_2_31D46BADA568558B_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x13629980)
#define CLASS_2_31D46BADA568558B__CTOR_OFFSET UNITYSDK_OFFSET(0x13629A40)

inline static constexpr unsigned int Class_2_31D46BADA568558B_TypeDefinitionIndex = 73115;

class Class_2_31D46BADA568558B : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIMusicBattleInLevelPlayWidgetController* Field_2_1; // 0x28
	::Class_2_31D46BADA568558B_Class_2_8504E12A716501A1_22* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B__CTOR_OFFSET))(this);
	}

	::Enum_3_D6D284A69AB5382B Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6D284A69AB5382B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_38B862BB2192EC08_OFFSET))(this);
	}

	::MoleMole::UIMusicBattleInLevelPlayWidgetController* Method_2_7CDE4E5FA5ECCC7C()
	{
		return ((::MoleMole::UIMusicBattleInLevelPlayWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_7CDE4E5FA5ECCC7C_OFFSET))(this);
	}
};
