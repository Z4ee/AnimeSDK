#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CBD04A4E767294BB;
namespace RPG::GameCore { class FiveDimSplineMoveConfig; }

#define CLASS_1_71671727F8DF4D8D_CLEAR_OFFSET UNITYSDK_OFFSET(0x181E0F70)
#define CLASS_1_71671727F8DF4D8D__CTOR_OFFSET UNITYSDK_OFFSET(0x181E1020)

inline static constexpr unsigned int Class_1_71671727F8DF4D8D_TypeDefinitionIndex = 41915;

class Class_1_71671727F8DF4D8D : public ::System::Object
{
public:
	::Class_1_CBD04A4E767294BB* NNANJMDMAOC; // 0x10
	::RPG::GameCore::FiveDimSplineMoveConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71671727F8DF4D8D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71671727F8DF4D8D_CLEAR_OFFSET))(this);
	}
};
