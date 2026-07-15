#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MarbleSealPlayAnim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BD0D7F4902256CD6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1670E660)
#define CLASS_2_BD0D7F4902256CD6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1670E410)
#define CLASS_2_BD0D7F4902256CD6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1670E610)
#define CLASS_2_BD0D7F4902256CD6_TICK_OFFSET UNITYSDK_OFFSET(0x1670E6A0)
#define CLASS_2_BD0D7F4902256CD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1670E700)
#define CLASS_2_BD0D7F4902256CD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1670E400)

inline static constexpr unsigned int Class_2_BD0D7F4902256CD6_TypeDefinitionIndex = 50603;

class Class_2_BD0D7F4902256CD6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BD0D7F4902256CD6_TypeDefinitionIndex)->GetStaticField(0x7230);
	}
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::MarbleSealPlayAnim* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleSealPlayAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleSealPlayAnim*))((::PBYTE)hIl2Cpp + CLASS_2_BD0D7F4902256CD6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BD0D7F4902256CD6__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0D7F4902256CD6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0D7F4902256CD6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0D7F4902256CD6_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD0D7F4902256CD6_TICK_OFFSET))(this, a1);
	}
};
