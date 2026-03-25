#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETBILLBOARDINFO_METHOD_3_0ED56062465A52B2_OFFSET UNITYSDK_OFFSET(0x176AB4C0)
#define RPG_GAMECORE_SETBILLBOARDINFO_METHOD_3_48E858C916DF1D05_OFFSET UNITYSDK_OFFSET(0x176AB300)
#define RPG_GAMECORE_SETBILLBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x176AB490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBillboardInfo_TypeDefinitionIndex = 18758;

	class SetBillboardInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType TargetEntityType; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Title; // 0x38
		::System::UInt32 MapIconType; // 0x48
		::System::Single XOffest; // 0x4C
		::System::Single YOffest; // 0x50
		::System::Single ZOffest; // 0x54
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x58
		::Il2CppArray<::System::Int32>* ShowDistance; // 0x60
		::System::String* AttachPointOverrideNameBoardPosition; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBILLBOARDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48E858C916DF1D05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBillboardInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBillboardInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBILLBOARDINFO_METHOD_3_48E858C916DF1D05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0ED56062465A52B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBILLBOARDINFO_METHOD_3_0ED56062465A52B2_OFFSET))(a1, a2);
		}
	};
}
