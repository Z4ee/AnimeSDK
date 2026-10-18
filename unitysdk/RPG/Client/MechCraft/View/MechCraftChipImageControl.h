#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_120;
namespace RPG::Client::MechCraft::View { class MechCraftChipImageControlBinder; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0xD5F06F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xD5EE8A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_CHIP_OFFSET UNITYSDK_OFFSET(0xD5EE930)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xD5F0980)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_METHOD_5_AC57C1C4868FD160_OFFSET UNITYSDK_OFFSET(0xD5F0780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_METHOD_5_C417625479B878A9_OFFSET UNITYSDK_OFFSET(0xD5EFC20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0xD5F0730)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xD5EE8E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_CHIP_OFFSET UNITYSDK_OFFSET(0xD5EE970)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xD5F09C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F0D10)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftChipImageControl_TypeDefinitionIndex = 79809;

	class MechCraftChipImageControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftChipImageControlBinder* _Binder; // 0x18
		::UnityEngine::Vector2 _CellSize; // 0x20
		::Class_0_16E4307DCC419505_120* GIEPEGOALHN; // 0x28
		::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> HGJMGGFMKPD; // 0x30
		::RPG::Client::MechCraft::MechCraftRotationType NCMEPPHLGEG; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_CELLSIZE_OFFSET))(this);
		}

		::System::Void set_CellSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_CELLSIZE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_120* get_Chip()
		{
			return ((::Class_0_16E4307DCC419505_120*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_CHIP_OFFSET))(this);
		}

		::System::Void set_Chip(::Class_0_16E4307DCC419505_120* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_CHIP_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> get_AttributeType()
		{
			return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_ATTRIBUTETYPE_OFFSET))(this);
		}

		::System::Void set_AttributeType(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_ATTRIBUTETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftRotationType get_Rotation()
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Void Method_5_AC57C1C4868FD160()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_METHOD_5_AC57C1C4868FD160_OFFSET))(this);
		}

		::System::Void Method_5_C417625479B878A9(::System::String* a1, ::UnityEngine::UI::Image* a2, ::UnityEngine::UI::SmoothMask* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Image*, ::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPIMAGECONTROL_METHOD_5_C417625479B878A9_OFFSET))(this, a1, a2, a3);
		}
	};
}
