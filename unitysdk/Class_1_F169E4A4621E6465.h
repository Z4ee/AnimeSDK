#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2EDCA7D63D6FF2D7.h"
#include "unitysdk/System/Object.h"

class Class_4_2E0A1A668714B3CC;
namespace RPG::GameCore { class TeamTowersPassiveSkillConfig; }

#define CLASS_1_F169E4A4621E6465_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B9A760)
#define CLASS_1_F169E4A4621E6465_METHOD_1_E3D3C1812C792667_OFFSET UNITYSDK_OFFSET(0x17B9A870)
#define CLASS_1_F169E4A4621E6465_METHOD_1_F761F9FBB717B8B1_OFFSET UNITYSDK_OFFSET(0x17B9A610)
#define CLASS_1_F169E4A4621E6465__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9AB50)

inline static constexpr unsigned int Class_1_F169E4A4621E6465_TypeDefinitionIndex = 35573;

class Class_1_F169E4A4621E6465 : public ::System::Object
{
public:
	::Class_4_2E0A1A668714B3CC* Field_1_0; // 0x10
	::Struct_2_2EDCA7D63D6FF2D7 Field_1_1; // 0x18
	::RPG::GameCore::TeamTowersPassiveSkillConfig* Field_1_2; // 0x50
	::System::UInt32 Field_1_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F169E4A4621E6465__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F761F9FBB717B8B1(::Class_4_2E0A1A668714B3CC* a1, ::System::UInt32 a2, ::RPG::GameCore::TeamTowersPassiveSkillConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_2E0A1A668714B3CC*, ::System::UInt32, ::RPG::GameCore::TeamTowersPassiveSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F169E4A4621E6465_METHOD_1_F761F9FBB717B8B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F169E4A4621E6465_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E3D3C1812C792667(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F169E4A4621E6465_METHOD_1_E3D3C1812C792667_OFFSET))(this, a1);
	}
};
