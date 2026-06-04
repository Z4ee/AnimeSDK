#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FormationMoveAddGroup; }
namespace RPG::GameCore { class FormationMoveConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_1E594D28D4184726_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC201040)
#define CLASS_2_1E594D28D4184726_METHOD_2_9871B2ED609502A4_OFFSET UNITYSDK_OFFSET(0xC201940)
#define CLASS_2_1E594D28D4184726_METHOD_2_EDD62BDB33599FEC_OFFSET UNITYSDK_OFFSET(0xC201350)
#define CLASS_2_1E594D28D4184726_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2010F0)
#define CLASS_2_1E594D28D4184726_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC201890)
#define CLASS_2_1E594D28D4184726_TICK_OFFSET UNITYSDK_OFFSET(0xC2018E0)
#define CLASS_2_1E594D28D4184726__CCTOR_OFFSET UNITYSDK_OFFSET(0xC201A20)
#define CLASS_2_1E594D28D4184726__CTOR_OFFSET UNITYSDK_OFFSET(0xC201030)

inline static constexpr unsigned int Class_2_1E594D28D4184726_TypeDefinitionIndex = 54326;

class Class_2_1E594D28D4184726 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1E594D28D4184726_TypeDefinitionIndex)->GetStaticField(0x684A0);
	}
	static ::RPG::GameCore::FormationMoveConfig** StaticGet_Field_2_1()
	{
		return (::RPG::GameCore::FormationMoveConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1E594D28D4184726_TypeDefinitionIndex)->GetStaticField(0x684A8);
	}
	::RPG::GameCore::FormationMoveAddGroup* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x28
	::System::UInt32 Field_2_5; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveAddGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveAddGroup*))((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EDD62BDB33599FEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726_METHOD_2_EDD62BDB33599FEC_OFFSET))(this);
	}

	::System::Void Method_2_9871B2ED609502A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1E594D28D4184726_METHOD_2_9871B2ED609502A4_OFFSET))(this, a1);
	}
};
