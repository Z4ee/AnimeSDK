#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LodDetail; }
namespace System { class String; }

#define RPG_GAMECORE_LODTEMPLATE_METHOD_2_99F845AFBFA921C5_OFFSET UNITYSDK_OFFSET(0x18A7B580)
#define RPG_GAMECORE_LODTEMPLATE_METHOD_2_B6371B90F9686635_OFFSET UNITYSDK_OFFSET(0x18A7B340)
#define RPG_GAMECORE_LODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7B570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LodTemplate_TypeDefinitionIndex = 18238;

	class LodTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Index; // 0x18
		::System::Single Distance; // 0x1C
		::Il2CppArray<::RPG::GameCore::LodDetail*>* LodDetailList; // 0x20
		::System::String* Layer; // 0x28
		::System::Boolean DitherSwitch; // 0x30
		::System::Boolean UseAABBDist; // 0x31
		::System::Boolean IsAutoGen; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6371B90F9686635(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODTEMPLATE_METHOD_2_B6371B90F9686635_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_99F845AFBFA921C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LodTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODTEMPLATE_METHOD_2_99F845AFBFA921C5_OFFSET))(a1, a2);
		}
	};
}
