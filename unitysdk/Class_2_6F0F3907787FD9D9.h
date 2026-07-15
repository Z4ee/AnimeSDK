#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

namespace System { class String; }

#define CLASS_2_6F0F3907787FD9D9_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15FFA870)
#define CLASS_2_6F0F3907787FD9D9_METHOD_2_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0x15FFA880)
#define CLASS_2_6F0F3907787FD9D9_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x15FFAB20)
#define CLASS_2_6F0F3907787FD9D9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FFAAE0)
#define CLASS_2_6F0F3907787FD9D9__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFAC50)

inline static constexpr unsigned int Class_2_6F0F3907787FD9D9_TypeDefinitionIndex = 53604;

class Class_2_6F0F3907787FD9D9 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
	::RPG::GameCore::TurnState Field_2_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F3907787FD9D9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F3907787FD9D9_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F3907787FD9D9_METHOD_2_096C7F7C8EC87129_OFFSET))(this);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F3907787FD9D9_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0F3907787FD9D9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
