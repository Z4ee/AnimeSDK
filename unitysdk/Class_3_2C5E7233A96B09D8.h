#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"

class Class_1_43BD383C98B4C0C5_106;
class Class_1_E44054C0F1A43C8E;
class Class_3_024B137FE9F1BACE;
class Class_3_AD202E4D78C8CB31;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C5E7233A96B09D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9211C50)
#define CLASS_3_2C5E7233A96B09D8_METHOD_3_E71EFB3D606976E5_OFFSET UNITYSDK_OFFSET(0x92129E0)
#define CLASS_3_2C5E7233A96B09D8_METHOD_3_FE95444BEF90AE14_1_OFFSET UNITYSDK_OFFSET(0x9212E20)
#define CLASS_3_2C5E7233A96B09D8_METHOD_3_FE95444BEF90AE14_OFFSET UNITYSDK_OFFSET(0x9212780)
#define CLASS_3_2C5E7233A96B09D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9211C90)
#define CLASS_3_2C5E7233A96B09D8__CTOR_OFFSET UNITYSDK_OFFSET(0x9211BD0)
#define CLASS_3_2C5E7233A96B09D8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9213080)

inline static constexpr unsigned int Class_3_2C5E7233A96B09D8_TypeDefinitionIndex = 49639;

class Class_3_2C5E7233A96B09D8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AD202E4D78C8CB31*>
{
public:
	::Class_1_E44054C0F1A43C8E* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AD202E4D78C8CB31* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AD202E4D78C8CB31*))((::PBYTE)hIl2Cpp + CLASS_3_2C5E7233A96B09D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5E7233A96B09D8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5E7233A96B09D8_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_E71EFB3D606976E5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_310B46602BEB4586& a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::Struct_2_310B46602BEB4586&))((::PBYTE)hIl2Cpp + CLASS_3_2C5E7233A96B09D8_METHOD_3_E71EFB3D606976E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FE95444BEF90AE14(::Class_3_024B137FE9F1BACE* a1, ::Class_3_024B137FE9F1BACE* a2, ::Class_1_43BD383C98B4C0C5_106* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_024B137FE9F1BACE*, ::Class_3_024B137FE9F1BACE*, ::Class_1_43BD383C98B4C0C5_106*))((::PBYTE)hIl2Cpp + CLASS_3_2C5E7233A96B09D8_METHOD_3_FE95444BEF90AE14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FE95444BEF90AE14_1(::Class_3_024B137FE9F1BACE* a1, ::Class_3_024B137FE9F1BACE* a2, ::Class_1_43BD383C98B4C0C5_106* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_024B137FE9F1BACE*, ::Class_3_024B137FE9F1BACE*, ::Class_1_43BD383C98B4C0C5_106*))((::PBYTE)hIl2Cpp + CLASS_3_2C5E7233A96B09D8_METHOD_3_FE95444BEF90AE14_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5E7233A96B09D8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
