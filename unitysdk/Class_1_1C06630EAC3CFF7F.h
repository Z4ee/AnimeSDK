#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_36BDD8A913F3199E.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
class Class_1_C6453D65EC213DF3;
class Class_2_2F326B57B6445F8D;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_1C06630EAC3CFF7F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1835F6B0)
#define CLASS_1_1C06630EAC3CFF7F_METHOD_1_2C17B63329D00E77_OFFSET UNITYSDK_OFFSET(0x1835F060)
#define CLASS_1_1C06630EAC3CFF7F_METHOD_1_38514A052CD7D117_OFFSET UNITYSDK_OFFSET(0x1835F420)
#define CLASS_1_1C06630EAC3CFF7F_METHOD_1_6F6DD3DC870AC77B_OFFSET UNITYSDK_OFFSET(0x1835F370)
#define CLASS_1_1C06630EAC3CFF7F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1835EFC0)
#define CLASS_1_1C06630EAC3CFF7F_METHOD_1_CC8ABA006B677963_OFFSET UNITYSDK_OFFSET(0x1835F4C0)
#define CLASS_1_1C06630EAC3CFF7F_METHOD_1_DF7BD167BD299425_OFFSET UNITYSDK_OFFSET(0x1835EEB0)
#define CLASS_1_1C06630EAC3CFF7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1835F710)

inline static constexpr unsigned int Class_1_1C06630EAC3CFF7F_TypeDefinitionIndex = 57971;

class Class_1_1C06630EAC3CFF7F : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
	::Struct_2_36BDD8A913F3199E GOPMOPPKFPH; // 0x18
	::Il2CppArray<::Class_2_2F326B57B6445F8D*>* EKONIPGDFNE; // 0x38
	::System::String* FJEJHABHCPH; // 0x40
	::Class_1_C6453D65EC213DF3* HNJMIKCEINB; // 0x48
	::Class_1_A0302E9AE0B8A2B9* BHIBFLIGINF; // 0x50
	::System::Int32 EMPOLDLHGPA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DF7BD167BD299425(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::Class_2_2F326B57B6445F8D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::Class_2_2F326B57B6445F8D*>*))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F_METHOD_1_DF7BD167BD299425_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_6F6DD3DC870AC77B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F_METHOD_1_6F6DD3DC870AC77B_OFFSET))(this);
	}

	::System::Void Method_1_38514A052CD7D117(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F_METHOD_1_38514A052CD7D117_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC8ABA006B677963(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F_METHOD_1_CC8ABA006B677963_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C17B63329D00E77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F_METHOD_1_2C17B63329D00E77_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06630EAC3CFF7F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
