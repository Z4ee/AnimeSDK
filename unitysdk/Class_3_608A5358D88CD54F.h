#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_D9E989B298282E16;
class Class_3_8960B8D5132C5605_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_608A5358D88CD54F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188CE840)
#define CLASS_3_608A5358D88CD54F_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x188CE8F0)
#define CLASS_3_608A5358D88CD54F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188CE880)
#define CLASS_3_608A5358D88CD54F__CTOR_OFFSET UNITYSDK_OFFSET(0x188CE7C0)

inline static constexpr unsigned int Class_3_608A5358D88CD54F_TypeDefinitionIndex = 54050;

class Class_3_608A5358D88CD54F : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8960B8D5132C5605_1*>
{
public:
	::Class_1_D9E989B298282E16* OHKCFMOAECF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8960B8D5132C5605_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8960B8D5132C5605_1*))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F_METHOD_3_128774387667156B_OFFSET))(this);
	}
};
