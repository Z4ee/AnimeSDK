#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_FILEPATH_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x188E31F0)
#define RPG_GAMECORE_FILEPATH_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x188E31B0)
#define RPG_GAMECORE_FILEPATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188E3200)
#define RPG_GAMECORE_FILEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x188E31A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FilePath_TypeDefinitionIndex = 23580;

	class FilePath : public ::System::Object
	{
	public:
		::System::String* PathPrivate; // 0x10

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH__CTOR_OFFSET))(this, path);
		}

		static ::RPG::GameCore::FilePath* op_Implicit(::System::String* path)
		{
			return ((::RPG::GameCore::FilePath*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH_OP_IMPLICIT_OFFSET))(path);
		}

		static ::System::String* op_Implicit_1(::RPG::GameCore::FilePath* filePath)
		{
			return ((::System::String*(*)(::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH_OP_IMPLICIT_1_OFFSET))(filePath);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILEPATH_TOSTRING_OFFSET))(this);
		}
	};
}
