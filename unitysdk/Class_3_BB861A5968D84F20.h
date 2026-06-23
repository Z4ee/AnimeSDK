#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_0DE7EC2BC9304BF2.h"
#include "unitysdk/Enum_3_49EF25F4D4B1D75C.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_6A2D1CD07805DEFA.h"
#include "unitysdk/Struct_2_6E1B724B14572104_4.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_3_BB861A5968D84F20_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12D44840)
#define CLASS_3_BB861A5968D84F20_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12D44B80)
#define CLASS_3_BB861A5968D84F20_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12D44AF0)
#define CLASS_3_BB861A5968D84F20_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x12D449C0)
#define CLASS_3_BB861A5968D84F20_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12D44470)
#define CLASS_3_BB861A5968D84F20__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D44890)
#define CLASS_3_BB861A5968D84F20__CTOR_OFFSET UNITYSDK_OFFSET(0x12D44910)

inline static constexpr unsigned int Class_3_BB861A5968D84F20_TypeDefinitionIndex = 51942;

class Class_3_BB861A5968D84F20 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_30 = 0x9B; // 0x0
	::MoleMole::Cameras::ScopedOverShoulderCamera* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Struct_2_6A2D1CD07805DEFA>* Field_3_29; // 0x50
	::Foundation::AssetPath Field_3_11; // 0x58
	::UnityEngine::Transform* Field_3_9; // 0x68
	::Struct_2_FA5F50563E60AFBA Field_3_27; // 0x70
	::MoleMole::Config::CharacterAimModeConfig* Field_3_0; // 0x88
	::Struct_2_FA5F50563E60AFBA Field_3_21; // 0x90
	::Struct_2_FA5F50563E60AFBA Field_3_20; // 0xA8
	::Class_1_8289F2785D9AA990* Field_3_24; // 0xC0
	::System::Single Field_3_4; // 0xC8
	::System::Single Field_3_5; // 0xCC
	::UnityEngine::Vector2 Field_3_17; // 0xD0
	::UnityEngine::Vector2 Field_3_8; // 0xD8
	::System::Single Field_3_6; // 0xE0
	::UnityEngine::Vector3 Field_3_19; // 0xE4
	::System::Single Field_3_15; // 0xF0
	::System::Single Field_3_14; // 0xF4
	::System::Single Field_3_25; // 0xF8
	::Enum_3_49EF25F4D4B1D75C Field_3_12; // 0xFC
	::System::Boolean Field_3_23; // 0xFD
	::Enum_3_0DE7EC2BC9304BF2 Field_3_28; // 0xFE
	::System::Boolean Field_3_26; // 0xFF
	::System::Single Field_3_16; // 0x100
	::UnityEngine::Quaternion Field_3_2; // 0x104
	::System::Single Field_3_3; // 0x114
	::System::Single Field_3_22; // 0x118
	::UnityEngine::Vector2 Field_3_13; // 0x11C
	::Struct_2_6E1B724B14572104_4 Field_3_7; // 0x124
	::UnityEngine::Vector2 Field_3_10; // 0x128
	::System::Single Field_3_18; // 0x130

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BB861A5968D84F20__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB861A5968D84F20__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB861A5968D84F20_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB861A5968D84F20_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_BB861A5968D84F20* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_BB861A5968D84F20*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BB861A5968D84F20_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB861A5968D84F20_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB861A5968D84F20_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}
};
