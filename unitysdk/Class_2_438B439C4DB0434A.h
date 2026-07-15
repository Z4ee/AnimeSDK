#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueMagicOptionalLayerGate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_438B439C4DB0434A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17204250)
#define CLASS_2_438B439C4DB0434A_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x17204140)
#define CLASS_2_438B439C4DB0434A_METHOD_2_77D0BA711228273D_OFFSET UNITYSDK_OFFSET(0x17204350)
#define CLASS_2_438B439C4DB0434A_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x172042A0)
#define CLASS_2_438B439C4DB0434A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17204300)
#define CLASS_2_438B439C4DB0434A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17203C70)
#define CLASS_2_438B439C4DB0434A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17204200)
#define CLASS_2_438B439C4DB0434A_TICK_OFFSET UNITYSDK_OFFSET(0x17203C10)
#define CLASS_2_438B439C4DB0434A__CTOR_OFFSET UNITYSDK_OFFSET(0x17203C00)

inline static constexpr unsigned int Class_2_438B439C4DB0434A_TypeDefinitionIndex = 55852;

class Class_2_438B439C4DB0434A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::LuaUIController* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicOptionalLayerGate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicOptionalLayerGate*))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt32 Method_2_77D0BA711228273D()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_438B439C4DB0434A_METHOD_2_77D0BA711228273D_OFFSET))(this);
	}
};
