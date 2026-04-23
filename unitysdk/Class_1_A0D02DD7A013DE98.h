#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0E0403D2B5AD79E8;
namespace RPG::GameCore { class RtBattleMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A0D02DD7A013DE98_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11DF5220)
#define CLASS_1_A0D02DD7A013DE98_METHOD_1_97D80D416CEEE883_OFFSET UNITYSDK_OFFSET(0x11DF4D80)
#define CLASS_1_A0D02DD7A013DE98__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF5290)

inline static constexpr unsigned int Class_1_A0D02DD7A013DE98_TypeDefinitionIndex = 49990;

class Class_1_A0D02DD7A013DE98 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E0403D2B5AD79E8*>* Field_1_3; // 0x10
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0D02DD7A013DE98__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97D80D416CEEE883(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_A0D02DD7A013DE98_METHOD_1_97D80D416CEEE883_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0D02DD7A013DE98_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
