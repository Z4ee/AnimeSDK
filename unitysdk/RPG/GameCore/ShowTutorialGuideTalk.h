#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19C85530)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C854B0)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19C85500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialGuideTalk_TypeDefinitionIndex = 23017;

	class ShowTutorialGuideTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GuideResID; // 0x18
		::Il2CppArray<::System::UInt32>* GuideTalkIDList; // 0x20
		::System::String* NodeID; // 0x28
		::System::Single OffsetX; // 0x30
		::System::Single OffsetY; // 0x34
		::System::Boolean Follow; // 0x38
		::System::Boolean Is3DObject; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialGuideTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialGuideTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialGuideTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
