#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SETGRAPHDYNAMICSTRING_METHOD_3_3CD646DFAD9564DE_OFFSET UNITYSDK_OFFSET(0x1D500C50)
#define RPG_GAMECORE_SETGRAPHDYNAMICSTRING_METHOD_3_4D6126E161FF5DEF_OFFSET UNITYSDK_OFFSET(0x1D500CA0)
#define RPG_GAMECORE_SETGRAPHDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D500C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGraphDynamicString_TypeDefinitionIndex = 20472;

	class SetGraphDynamicString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean TargetSelf; // 0x20
		::Il2CppArray<::System::UInt32>* TargetIDs; // 0x28
		::RPG::GameCore::DynamicString* Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CD646DFAD9564DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGraphDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGraphDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICSTRING_METHOD_3_3CD646DFAD9564DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D6126E161FF5DEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICSTRING_METHOD_3_4D6126E161FF5DEF_OFFSET))(a1, a2);
		}
	};
}
