#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_53B8D1DFB0B66FBC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A1E52E0152984879_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DAF0D0)
#define CLASS_3_A1E52E0152984879_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAEFF0)

inline static constexpr unsigned int Class_3_A1E52E0152984879_1_TypeDefinitionIndex = 51700;

class Class_3_A1E52E0152984879_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_53B8D1DFB0B66FBC*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_53B8D1DFB0B66FBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_53B8D1DFB0B66FBC*))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1E52E0152984879_1_ONTASKBEGIN_OFFSET))(this);
	}
};
