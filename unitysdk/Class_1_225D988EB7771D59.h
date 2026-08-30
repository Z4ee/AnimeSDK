#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_760;
class Class_0_16E4307DCC419505_761;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_225D988EB7771D59_METHOD_1_218BCA6C07A0F1DC_1_OFFSET UNITYSDK_OFFSET(0x19FB86E0)
#define CLASS_1_225D988EB7771D59_METHOD_1_218BCA6C07A0F1DC_OFFSET UNITYSDK_OFFSET(0x19FB84E0)
#define CLASS_1_225D988EB7771D59_METHOD_1_3B44B8691B5EED8E_OFFSET UNITYSDK_OFFSET(0x19FB88E0)
#define CLASS_1_225D988EB7771D59__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB89A0)

inline static constexpr unsigned int Class_1_225D988EB7771D59_TypeDefinitionIndex = 62594;

class Class_1_225D988EB7771D59 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_0_16E4307DCC419505_760*>* FOBOPMENMHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_225D988EB7771D59__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_218BCA6C07A0F1DC(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Class_0_16E4307DCC419505_761* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_225D988EB7771D59_METHOD_1_218BCA6C07A0F1DC_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_218BCA6C07A0F1DC_1(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Class_0_16E4307DCC419505_761* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_761*))((::PBYTE)hIl2Cpp + CLASS_1_225D988EB7771D59_METHOD_1_218BCA6C07A0F1DC_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3B44B8691B5EED8E(::RPG::GameCore::AvatarPropertyType a1, ::Class_0_16E4307DCC419505_760* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Class_0_16E4307DCC419505_760*))((::PBYTE)hIl2Cpp + CLASS_1_225D988EB7771D59_METHOD_1_3B44B8691B5EED8E_OFFSET))(this, a1, a2);
	}
};
