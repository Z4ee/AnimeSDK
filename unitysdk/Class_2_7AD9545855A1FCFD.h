#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_8960B8D5132C5605;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7AD9545855A1FCFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158F7430)
#define CLASS_2_7AD9545855A1FCFD_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x158F79F0)
#define CLASS_2_7AD9545855A1FCFD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158F79A0)
#define CLASS_2_7AD9545855A1FCFD_ONSKIP_OFFSET UNITYSDK_OFFSET(0x158F7840)
#define CLASS_2_7AD9545855A1FCFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158F7520)
#define CLASS_2_7AD9545855A1FCFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158F7790)
#define CLASS_2_7AD9545855A1FCFD_TICK_OFFSET UNITYSDK_OFFSET(0x158F77E0)
#define CLASS_2_7AD9545855A1FCFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x158F7A00)
#define CLASS_2_7AD9545855A1FCFD__CTOR_OFFSET UNITYSDK_OFFSET(0x158F7420)

inline static constexpr unsigned int Class_2_7AD9545855A1FCFD_TypeDefinitionIndex = 53540;

class Class_2_7AD9545855A1FCFD : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_LIKAKCCGEGG()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7AD9545855A1FCFD_TypeDefinitionIndex)->GetStaticField(0x14200);
	}
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_8960B8D5132C5605* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8960B8D5132C5605* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8960B8D5132C5605*))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AD9545855A1FCFD_GET_FORCESKIP_OFFSET))(this);
	}
};
