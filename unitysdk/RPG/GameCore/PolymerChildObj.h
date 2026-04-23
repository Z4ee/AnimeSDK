#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StagePrefabInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_POLYMERCHILDOBJ_METHOD_3_218C3E658CA1BD77_OFFSET UNITYSDK_OFFSET(0x18C37A60)
#define RPG_GAMECORE_POLYMERCHILDOBJ_METHOD_3_2C1FACA4F64BF1C1_OFFSET UNITYSDK_OFFSET(0x18C37A20)
#define RPG_GAMECORE_POLYMERCHILDOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18C37A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PolymerChildObj_TypeDefinitionIndex = 18123;

	class PolymerChildObj : public ::RPG::GameCore::StagePrefabInfo
	{
	public:
		::System::String* Path; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMERCHILDOBJ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C1FACA4F64BF1C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PolymerChildObj*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PolymerChildObj*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMERCHILDOBJ_METHOD_3_2C1FACA4F64BF1C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_218C3E658CA1BD77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PolymerChildObj* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PolymerChildObj*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMERCHILDOBJ_METHOD_3_218C3E658CA1BD77_OFFSET))(a1, a2);
		}
	};
}
