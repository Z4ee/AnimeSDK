#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTRUCTBODYPART_METHOD_3_6CEB49911DA8D837_OFFSET UNITYSDK_OFFSET(0x1D9B5E90)
#define RPG_GAMECORE_CONSTRUCTBODYPART_METHOD_3_8C6756B82D0014BA_OFFSET UNITYSDK_OFFSET(0x1D9B5E30)
#define RPG_GAMECORE_CONSTRUCTBODYPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B5E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstructBodyPart_TypeDefinitionIndex = 22444;

	class ConstructBodyPart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PartName; // 0x18
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x20
		::RPG::GameCore::DynamicFloat* EnhancedID; // 0x28
		::System::Int32 TeamLocationOffset; // 0x30
		::System::Boolean TeamLocationOffsetInGroup; // 0x34
		::System::Int32 IdentifyType; // 0x38
		::System::Boolean LinkedStance; // 0x3C
		::System::Boolean LinkedHitByPart; // 0x3D
		::System::Boolean IndependentVisualLayer; // 0x3E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTRUCTBODYPART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C6756B82D0014BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConstructBodyPart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConstructBodyPart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTRUCTBODYPART_METHOD_3_8C6756B82D0014BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CEB49911DA8D837(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConstructBodyPart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConstructBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTRUCTBODYPART_METHOD_3_6CEB49911DA8D837_OFFSET))(a1, a2);
		}
	};
}
