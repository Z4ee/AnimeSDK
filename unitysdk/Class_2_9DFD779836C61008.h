#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6312566761D69A.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_855;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_2_9DFD779836C61008_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xBED0460)
#define CLASS_2_9DFD779836C61008_METHOD_2_1E00B1F74EED64E4_OFFSET UNITYSDK_OFFSET(0xBED0E20)
#define CLASS_2_9DFD779836C61008_METHOD_2_4F96388701A3F277_OFFSET UNITYSDK_OFFSET(0xBED1470)
#define CLASS_2_9DFD779836C61008_METHOD_2_6E813745B9F3D55C_OFFSET UNITYSDK_OFFSET(0xBED10F0)
#define CLASS_2_9DFD779836C61008_METHOD_2_8FF7072B05A872E7_OFFSET UNITYSDK_OFFSET(0xBED0BE0)
#define CLASS_2_9DFD779836C61008_METHOD_2_E906932410FB07A7_OFFSET UNITYSDK_OFFSET(0xBED1010)
#define CLASS_2_9DFD779836C61008__CTOR_OFFSET UNITYSDK_OFFSET(0xBED0430)

inline static constexpr unsigned int Class_2_9DFD779836C61008_TypeDefinitionIndex = 65198;

class Class_2_9DFD779836C61008 : public ::Class_1_ED6312566761D69A
{
public:
	::Class_0_16E4307DCC419505_855* BABBJILOOAL; // 0x20
	::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::Class_0_16E4307DCC419505_855* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_8FF7072B05A872E7(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_8FF7072B05A872E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E906932410FB07A7(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_E906932410FB07A7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6E813745B9F3D55C(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_6E813745B9F3D55C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F96388701A3F277(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_4F96388701A3F277_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E00B1F74EED64E4(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_1E00B1F74EED64E4_OFFSET))(this, a1, a2, a3);
	}
};
