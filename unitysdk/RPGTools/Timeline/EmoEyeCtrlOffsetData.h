#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class CharacterEyeCtrlConfig; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xE8421C0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_67CB654BCD33D174_OFFSET UNITYSDK_OFFSET(0xE8427A0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_755F3799E9E38886_OFFSET UNITYSDK_OFFSET(0xE842C60)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_83E5962F76A0F76D_OFFSET UNITYSDK_OFFSET(0xE842D60)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_A26F042E7DB6E731_OFFSET UNITYSDK_OFFSET(0xE842AD0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_A828CA1097710F12_OFFSET UNITYSDK_OFFSET(0xE842480)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE842E90)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE842FB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeCtrlOffsetData_TypeDefinitionIndex = 48570;

	class EmoEyeCtrlOffsetData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Eye_Rotation_Offset; // 0x10
		::UnityEngine::Vector3 Eye_L_Rotation; // 0x1C
		::UnityEngine::Vector3 Eye_R_Rotation; // 0x28
		::UnityEngine::Vector3 EyeEnd_L_Scale; // 0x34
		::UnityEngine::Vector3 EyeEnd_R_Scale; // 0x40
		::UnityEngine::Vector3 EyeEnd_L_01_Position; // 0x4C
		::UnityEngine::Vector3 EyeEnd_R_01_Position; // 0x58
		::UnityEngine::Vector3 EyeEnd_L_01_Rotation; // 0x64
		::UnityEngine::Vector3 EyeEnd_R_01_Rotation; // 0x70
		::UnityEngine::Vector3 EyeEnd_L_01_Scale; // 0x7C
		::UnityEngine::Vector3 EyeEnd_R_01_Scale; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_568AE7A1499723FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_568AE7A1499723FD_OFFSET))(this);
		}

		::System::Boolean Method_1_A828CA1097710F12(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_A828CA1097710F12_OFFSET))(this, a1);
		}

		static ::System::Void Method_1_67CB654BCD33D174(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1, ::RPGTools::Timeline::EmoEyeCtrlOffsetData* a2, ::RPGTools::Timeline::EmoEyeCtrlOffsetData* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_67CB654BCD33D174_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Method_1_A26F042E7DB6E731(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1, ::RPGTools::Timeline::EmoEyeCtrlOffsetData* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_A26F042E7DB6E731_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_1_755F3799E9E38886(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_755F3799E9E38886_OFFSET))(this, a1);
		}

		::System::Void Method_1_83E5962F76A0F76D(::RPG::GameCore::CharacterEyeCtrlConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterEyeCtrlConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_83E5962F76A0F76D_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
