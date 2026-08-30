#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchHandResetGame; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_2A9C00FA86D9F256_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152DD220)
#define CLASS_2_2A9C00FA86D9F256_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x152DD9A0)
#define CLASS_2_2A9C00FA86D9F256_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152DD390)
#define CLASS_2_2A9C00FA86D9F256_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152DD270)
#define CLASS_2_2A9C00FA86D9F256_TICK_OFFSET UNITYSDK_OFFSET(0x152DD330)
#define CLASS_2_2A9C00FA86D9F256__CTOR_OFFSET UNITYSDK_OFFSET(0x152DD210)

inline static constexpr unsigned int Class_2_2A9C00FA86D9F256_TypeDefinitionIndex = 53574;

class Class_2_2A9C00FA86D9F256 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchHandResetGame* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandResetGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandResetGame*))((::PBYTE)hIl2Cpp + CLASS_2_2A9C00FA86D9F256__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A9C00FA86D9F256_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A9C00FA86D9F256_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A9C00FA86D9F256_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A9C00FA86D9F256_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2A9C00FA86D9F256_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}
};
