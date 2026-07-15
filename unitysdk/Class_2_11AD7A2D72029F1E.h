#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D6EFBA9480DF920D.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }

#define CLASS_2_11AD7A2D72029F1E_METHOD_2_047C27B43598EEF2_OFFSET UNITYSDK_OFFSET(0x185D56B0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_2776E8AE918CB345_OFFSET UNITYSDK_OFFSET(0x185CFCB0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x185D57F0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x185D09E0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x185D0A40)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_6EDFB5C97C6E7C6A_OFFSET UNITYSDK_OFFSET(0x185D5480)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x185CFFD0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_AAFE8DC44E675A0C_OFFSET UNITYSDK_OFFSET(0x185D5900)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_B73CDCBF771B2B3A_OFFSET UNITYSDK_OFFSET(0x185D5A60)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_C4C552549A8C0DBA_OFFSET UNITYSDK_OFFSET(0x185D5630)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185D55E0)
#define CLASS_2_11AD7A2D72029F1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x185D5AD0)
#define CLASS_2_11AD7A2D72029F1E__CTOR_OFFSET UNITYSDK_OFFSET(0x185CFBE0)

inline static constexpr unsigned int Class_2_11AD7A2D72029F1E_TypeDefinitionIndex = 49884;

class Class_2_11AD7A2D72029F1E : public ::Class_1_D6EFBA9480DF920D
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_11AD7A2D72029F1E_TypeDefinitionIndex)->GetStaticField(0x82F0);
	}
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_2_1; // 0x38
	::RPG::GameCore::CharacterMotionFlag Field_2_2; // 0x40
	::System::Single Field_2_3; // 0x44
	::System::Single Field_2_4; // 0x48
	::System::Single Field_2_5; // 0x4C
	::System::Single Field_2_6; // 0x50
	::System::Single Field_2_7; // 0x54
	::System::Single Field_2_8; // 0x58
	::System::Single Field_2_9; // 0x5C
	::System::Single Field_2_10; // 0x60
	::System::Single Field_2_11; // 0x64
	::System::Single Field_2_12; // 0x68
	::UnityEngine::Vector3 Field_2_13; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_2776E8AE918CB345(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterMotionFlag a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_2776E8AE918CB345_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_6EDFB5C97C6E7C6A(::RPG::GameCore::CharacterMotionFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_6EDFB5C97C6E7C6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C4C552549A8C0DBA(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_C4C552549A8C0DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_7B9D6F143086B23A_OFFSET))(this, a1);
	}

	::System::Void Method_2_047C27B43598EEF2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_047C27B43598EEF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_AAFE8DC44E675A0C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_AAFE8DC44E675A0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B73CDCBF771B2B3A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_B73CDCBF771B2B3A_OFFSET))(this);
	}
};
