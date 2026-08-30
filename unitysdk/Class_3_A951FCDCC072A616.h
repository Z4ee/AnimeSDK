#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7E850DDB8FBC5CC5;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_A951FCDCC072A616_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105AF260)
#define CLASS_3_A951FCDCC072A616__CTOR_OFFSET UNITYSDK_OFFSET(0x105AF200)

inline static constexpr unsigned int Class_3_A951FCDCC072A616_TypeDefinitionIndex = 53522;

class Class_3_A951FCDCC072A616 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7E850DDB8FBC5CC5*>
{
public:
	::Class_3_7E850DDB8FBC5CC5* APPIHABBCGK; // 0x28
	::System::String* JKNIPJCHKNN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7E850DDB8FBC5CC5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7E850DDB8FBC5CC5*))((::PBYTE)hIl2Cpp + CLASS_3_A951FCDCC072A616__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A951FCDCC072A616_ONTASKBEGIN_OFFSET))(this);
	}
};
