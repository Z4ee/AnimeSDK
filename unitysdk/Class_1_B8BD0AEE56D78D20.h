#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { class String; }

#define CLASS_1_B8BD0AEE56D78D20_METHOD_1_51200D1B0A4E8FC0_1_OFFSET UNITYSDK_OFFSET(0x11B9F4E0)
#define CLASS_1_B8BD0AEE56D78D20_METHOD_1_51200D1B0A4E8FC0_2_OFFSET UNITYSDK_OFFSET(0x11B9F580)
#define CLASS_1_B8BD0AEE56D78D20_METHOD_1_51200D1B0A4E8FC0_OFFSET UNITYSDK_OFFSET(0x11B7A330)

inline static constexpr unsigned int Class_1_B8BD0AEE56D78D20_TypeDefinitionIndex = 54794;

class Class_1_B8BD0AEE56D78D20 : public ::System::Object
{
public:
	static ::RPG::Client::LuaUIController* Method_1_51200D1B0A4E8FC0(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::LuaUIController*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B8BD0AEE56D78D20_METHOD_1_51200D1B0A4E8FC0_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LuaUIController* Method_1_51200D1B0A4E8FC0_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::LuaUIController*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B8BD0AEE56D78D20_METHOD_1_51200D1B0A4E8FC0_1_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LuaUIController* Method_1_51200D1B0A4E8FC0_2(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::LuaUIController*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B8BD0AEE56D78D20_METHOD_1_51200D1B0A4E8FC0_2_OFFSET))(a1, a2);
	}
};
