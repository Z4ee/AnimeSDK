#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_6.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }

#define CLASS_1_5126474C9F661228_METHOD_1_1D886997C3F143DB_OFFSET UNITYSDK_OFFSET(0x164983E0)
#define CLASS_1_5126474C9F661228_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0x16498350)
#define CLASS_1_5126474C9F661228__CTOR_OFFSET UNITYSDK_OFFSET(0x16498340)

inline static constexpr unsigned int Class_1_5126474C9F661228_TypeDefinitionIndex = 67253;

class Class_1_5126474C9F661228 : public ::System::Object
{
public:
	::RPG::Client::RogueTournPersonaRoomCompositionTypeData* KMDCEKEHADA; // 0x10
	::Struct_2_FD0368737CBF6F9B_6 LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_6))((::PBYTE)hIl2Cpp + CLASS_1_5126474C9F661228__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5126474C9F661228_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::Client::RogueTournPersonaRoomCompositionTypeData* Method_1_1D886997C3F143DB()
	{
		return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5126474C9F661228_METHOD_1_1D886997C3F143DB_OFFSET))(this);
	}
};
