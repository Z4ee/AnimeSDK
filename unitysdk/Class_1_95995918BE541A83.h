#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaSystem; }
namespace System { class String; }

#define CLASS_1_95995918BE541A83_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xA55F7C0)
#define CLASS_1_95995918BE541A83_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xA55F6F0)
#define CLASS_1_95995918BE541A83_METHOD_1_F2D815940C668A94_OFFSET UNITYSDK_OFFSET(0xA55F800)
#define CLASS_1_95995918BE541A83__CTOR_OFFSET UNITYSDK_OFFSET(0xA55F6A0)

inline static constexpr unsigned int Class_1_95995918BE541A83_TypeDefinitionIndex = 55542;

class Class_1_95995918BE541A83 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::RPG::Client::LuaSystem* Field_1_1; // 0x10

	::System::Void _ctor(::RPG::Client::LuaSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaSystem*))((::PBYTE)hIl2Cpp + CLASS_1_95995918BE541A83__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95995918BE541A83_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::String* Method_1_F2D815940C668A94()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95995918BE541A83_METHOD_1_F2D815940C668A94_OFFSET))(this);
	}

	static ::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_95995918BE541A83_METHOD_1_0DF420E95D6252BE_OFFSET))();
	}
};
