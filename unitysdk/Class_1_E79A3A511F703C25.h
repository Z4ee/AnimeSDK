#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesBuff; }
namespace System { class String; }

#define CLASS_1_E79A3A511F703C25__CTOR_OFFSET UNITYSDK_OFFSET(0xC16AB20)

inline static constexpr unsigned int Class_1_E79A3A511F703C25_TypeDefinitionIndex = 77240;

class Class_1_E79A3A511F703C25 : public ::System::Object
{
public:
	::System::String* EOMFOMKCMAK; // 0x10
	::RPG::GameCore::ChenLingFesBuff* HABJHGPFGEB; // 0x18
	::System::String* OENAMINOLLF; // 0x20
	::Il2CppArray<::System::Single>* NPHFIJAFHLB; // 0x28
	::System::Single GAFENHHEBPG; // 0x30
	::System::Int32 DBPLPPBABDP; // 0x34

	::System::Void _ctor(::RPG::GameCore::ChenLingFesBuff* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E79A3A511F703C25__CTOR_OFFSET))(this, a1, a2);
	}
};
