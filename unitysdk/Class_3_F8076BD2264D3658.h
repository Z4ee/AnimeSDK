#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_291F7DA21A504FC4;
class Class_3_9241DAB08E007B55;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8076BD2264D3658_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159BF2F0)
#define CLASS_3_F8076BD2264D3658_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159BF330)
#define CLASS_3_F8076BD2264D3658__CTOR_OFFSET UNITYSDK_OFFSET(0x159BF2C0)

inline static constexpr unsigned int Class_3_F8076BD2264D3658_TypeDefinitionIndex = 54115;

class Class_3_F8076BD2264D3658 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9241DAB08E007B55*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_2_291F7DA21A504FC4*> HEJKAKEJCMP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9241DAB08E007B55* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9241DAB08E007B55*))((::PBYTE)hIl2Cpp + CLASS_3_F8076BD2264D3658__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8076BD2264D3658_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8076BD2264D3658_ONTASKBEGIN_OFFSET))(this);
	}
};
