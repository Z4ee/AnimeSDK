#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_D0C49ECCA3D513C2_Class_2_8504E12A716501A1_16;
namespace MoleMole { class UIInLevelPlayerCameraChildWindowController; }
namespace MoleMole { class UIInLevelPlayerMoveChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_D0C49ECCA3D513C2_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x12C0F830)
#define CLASS_2_D0C49ECCA3D513C2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x12C0F760)
#define CLASS_2_D0C49ECCA3D513C2_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x12C0F770)
#define CLASS_2_D0C49ECCA3D513C2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C0F890)
#define CLASS_2_D0C49ECCA3D513C2_METHOD_2_EF11EDB0322D6A1F_OFFSET UNITYSDK_OFFSET(0x12C0F920)
#define CLASS_2_D0C49ECCA3D513C2__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0F880)

inline static constexpr unsigned int Class_2_D0C49ECCA3D513C2_TypeDefinitionIndex = 64191;

class Class_2_D0C49ECCA3D513C2 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_D0C49ECCA3D513C2_Class_2_8504E12A716501A1_16* Field_2_2; // 0x28
	::MoleMole::UIInLevelPlayerMoveChildWindowController* Field_2_0; // 0x30
	::MoleMole::UIInLevelPlayerCameraChildWindowController* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0C49ECCA3D513C2__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0C49ECCA3D513C2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_D0C49ECCA3D513C2_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0C49ECCA3D513C2_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0C49ECCA3D513C2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::UIInLevelPlayerCameraChildWindowController* Method_2_EF11EDB0322D6A1F()
	{
		return ((::MoleMole::UIInLevelPlayerCameraChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0C49ECCA3D513C2_METHOD_2_EF11EDB0322D6A1F_OFFSET))(this);
	}
};
