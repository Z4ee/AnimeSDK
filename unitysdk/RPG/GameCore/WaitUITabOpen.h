#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITUITABOPEN_METHOD_3_0880AF0C6D1574F3_OFFSET UNITYSDK_OFFSET(0x17908420)
#define RPG_GAMECORE_WAITUITABOPEN_METHOD_3_30EF63AB39D84594_OFFSET UNITYSDK_OFFSET(0x179084A0)
#define RPG_GAMECORE_WAITUITABOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x17908470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUITabOpen_TypeDefinitionIndex = 22399;

	class WaitUITabOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TabPath; // 0x18
		::System::String* NodeID; // 0x20
		::System::String* TabPathPC; // 0x28
		::System::UInt32 Index; // 0x30
		::System::Boolean IsOpen; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUITABOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0880AF0C6D1574F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUITabOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUITabOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUITABOPEN_METHOD_3_0880AF0C6D1574F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30EF63AB39D84594(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUITabOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUITabOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUITABOPEN_METHOD_3_30EF63AB39D84594_OFFSET))(a1, a2);
		}
	};
}
