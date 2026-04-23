#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MusicRhythmGroupRow; }

#define CLASS_1_A74E5D9D220A2598_GET_ID_OFFSET UNITYSDK_OFFSET(0x9080270)
#define CLASS_1_A74E5D9D220A2598_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9080290)
#define CLASS_1_A74E5D9D220A2598_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x9080200)
#define CLASS_1_A74E5D9D220A2598_SET_ID_OFFSET UNITYSDK_OFFSET(0x9080280)
#define CLASS_1_A74E5D9D220A2598_SET_ROW_OFFSET UNITYSDK_OFFSET(0x90802A0)
#define CLASS_1_A74E5D9D220A2598__CTOR_OFFSET UNITYSDK_OFFSET(0x9080190)

inline static constexpr unsigned int Class_1_A74E5D9D220A2598_TypeDefinitionIndex = 55509;

class Class_1_A74E5D9D220A2598 : public ::System::Object
{
public:
	::RPG::GameCore::MusicRhythmGroupRow* _Row_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A74E5D9D220A2598__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A74E5D9D220A2598_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A74E5D9D220A2598_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A74E5D9D220A2598_SET_ID_OFFSET))(this, value);
	}

	::RPG::GameCore::MusicRhythmGroupRow* get_Row()
	{
		return ((::RPG::GameCore::MusicRhythmGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A74E5D9D220A2598_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::RPG::GameCore::MusicRhythmGroupRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_A74E5D9D220A2598_SET_ROW_OFFSET))(this, value);
	}
};
