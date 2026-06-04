#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_1_61097837E1D530F4;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_DB992AD35C032A5C_METHOD_1_69A54399DF813FC5_OFFSET UNITYSDK_OFFSET(0x134C21B0)
#define CLASS_1_DB992AD35C032A5C_METHOD_1_8164AB5D3C0F15EF_OFFSET UNITYSDK_OFFSET(0x134C2230)
#define CLASS_1_DB992AD35C032A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x134C2330)

inline static constexpr unsigned int Class_1_DB992AD35C032A5C_TypeDefinitionIndex = 58803;

class Class_1_DB992AD35C032A5C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB992AD35C032A5C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_69A54399DF813FC5(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_DB992AD35C032A5C_METHOD_1_69A54399DF813FC5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_360* Method_1_8164AB5D3C0F15EF(::Class_0_16E4307DCC419505_360* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_61097837E1D530F4* a3)
	{
		return ((::Class_0_16E4307DCC419505_360*(*)(::PVOID, ::Class_0_16E4307DCC419505_360*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_DB992AD35C032A5C_METHOD_1_8164AB5D3C0F15EF_OFFSET))(this, a1, a2, a3);
	}
};
