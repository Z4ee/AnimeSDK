#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_3_7BD30926656A6DD2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_F7273DFA9FB70175_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC7FF20)
#define CLASS_2_F7273DFA9FB70175_METHOD_2_091B1F0E0E06E7DD_OFFSET UNITYSDK_OFFSET(0xBC80420)
#define CLASS_2_F7273DFA9FB70175_METHOD_2_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xBC80340)
#define CLASS_2_F7273DFA9FB70175_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0xBC80490)
#define CLASS_2_F7273DFA9FB70175_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xBC80570)
#define CLASS_2_F7273DFA9FB70175_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC80280)
#define CLASS_2_F7273DFA9FB70175_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC7FFF0)
#define CLASS_2_F7273DFA9FB70175_TICK_OFFSET UNITYSDK_OFFSET(0xBC80130)
#define CLASS_2_F7273DFA9FB70175__CTOR_OFFSET UNITYSDK_OFFSET(0xBC7FCE0)

inline static constexpr unsigned int Class_2_F7273DFA9FB70175_TypeDefinitionIndex = 53280;

class Class_2_F7273DFA9FB70175 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_7BD30926656A6DD2* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Struct_2_D3027B1CDFF61281 DDPDDGJPEBO; // 0x28
	::Struct_2_D3027B1CDFF61281 NKGCIGBAIFD; // 0x58
	::RPG::GameCore::GameEntity* BFMNFEOMLPF; // 0x88
	::System::UInt32 JGGDKOCIEGH; // 0x90
	::System::UInt32 PEEFHNHDBMF; // 0x94
	::System::Boolean IELBAJHONPC; // 0x98

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7BD30926656A6DD2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7BD30926656A6DD2*))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_METHOD_2_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_091B1F0E0E06E7DD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F7273DFA9FB70175_METHOD_2_091B1F0E0E06E7DD_OFFSET))(this, a1);
	}
};
