#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BLOCKINPUTCONTROLLER_METHOD_3_4AEA4D716D9911D2_OFFSET UNITYSDK_OFFSET(0x194DEB70)
#define RPG_GAMECORE_BLOCKINPUTCONTROLLER_METHOD_3_4E292CB22BD4CA83_OFFSET UNITYSDK_OFFSET(0x194DEAF0)
#define RPG_GAMECORE_BLOCKINPUTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x194DEB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockInputController_TypeDefinitionIndex = 19329;

	class BlockInputController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::Il2CppArray<::System::String*>* ActionNameList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKINPUTCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E292CB22BD4CA83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockInputController*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockInputController*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKINPUTCONTROLLER_METHOD_3_4E292CB22BD4CA83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AEA4D716D9911D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockInputController* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockInputController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKINPUTCONTROLLER_METHOD_3_4AEA4D716D9911D2_OFFSET))(a1, a2);
		}
	};
}
