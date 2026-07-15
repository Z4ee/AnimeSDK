#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CREATELEVELAREAS_METHOD_3_B975EB696683A330_OFFSET UNITYSDK_OFFSET(0x1BC3AC30)
#define RPG_GAMECORE_CREATELEVELAREAS_METHOD_3_EC5E4F917F0BE291_OFFSET UNITYSDK_OFFSET(0x1BC3AC70)
#define RPG_GAMECORE_CREATELEVELAREAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3AC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateLevelAreas_TypeDefinitionIndex = 19961;

	class CreateLevelAreas : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AssetPath; // 0x18
		::System::Boolean IsLocal; // 0x20
		::System::Boolean IsDefaultArea; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATELEVELAREAS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B975EB696683A330(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateLevelAreas*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateLevelAreas*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATELEVELAREAS_METHOD_3_B975EB696683A330_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC5E4F917F0BE291(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateLevelAreas* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateLevelAreas*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATELEVELAREAS_METHOD_3_EC5E4F917F0BE291_OFFSET))(a1, a2);
		}
	};
}
