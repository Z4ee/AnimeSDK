#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StagePrefabInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PolymerChildObj; }
namespace System { class String; }

#define RPG_GAMECORE_POLYMEROBJ_METHOD_3_3A61DDF89E5C170B_OFFSET UNITYSDK_OFFSET(0x18C38210)
#define RPG_GAMECORE_POLYMEROBJ_METHOD_3_B245B8C845ED5E41_OFFSET UNITYSDK_OFFSET(0x18C38250)
#define RPG_GAMECORE_POLYMEROBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18C38240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PolymerObj_TypeDefinitionIndex = 18121;

	class PolymerObj : public ::RPG::GameCore::StagePrefabInfo
	{
	public:
		::System::String* Chap; // 0xB0
		::Il2CppArray<::RPG::GameCore::PolymerChildObj*>* ChildrenObj; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMEROBJ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A61DDF89E5C170B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PolymerObj*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PolymerObj*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMEROBJ_METHOD_3_3A61DDF89E5C170B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B245B8C845ED5E41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PolymerObj* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PolymerObj*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMEROBJ_METHOD_3_B245B8C845ED5E41_OFFSET))(a1, a2);
		}
	};
}
