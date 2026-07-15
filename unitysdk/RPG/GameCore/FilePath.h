#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_FILEPATH_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BA7FC50)
#define RPG_GAMECORE_FILEPATH_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA7FC10)
#define RPG_GAMECORE_FILEPATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BA7FC60)
#define RPG_GAMECORE_FILEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7FC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FilePath_TypeDefinitionIndex = 10506;

	class FilePath : public ::System::Object
	{
	public:
		::System::String* PathPrivate; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FilePath* op_Implicit(::System::String* a1)
		{
			return ((::RPG::GameCore::FilePath*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_1(::RPG::GameCore::FilePath* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH_OP_IMPLICIT_1_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH_TOSTRING_OFFSET))(this);
		}
	};
}
