#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1BE41950)
#define RPG_GAMECORE_SHOWGUIDETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE41900)
#define RPG_GAMECORE_SHOWGUIDETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE41940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideTalk_TypeDefinitionIndex = 23477;

	class ShowGuideTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Boolean Show; // 0x1C
		::System::Int32 GuideResID; // 0x20
		::System::UInt32 GuideTalkID; // 0x24
		::System::UInt32 GuideTalkIDPC; // 0x28
		::System::UInt32 GuideTalkIDController; // 0x2C
		::System::String* ActionName; // 0x30
		::System::String* ActionNameController; // 0x38
		::System::Boolean IsUseMotion; // 0x40
		::System::Boolean Is3DObject; // 0x41
		::System::String* NodeID; // 0x48
		::System::Single OffsetX; // 0x50
		::System::Single OffsetY; // 0x54
		::System::Boolean Follow; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
