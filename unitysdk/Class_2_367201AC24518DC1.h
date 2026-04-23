#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System { class String; }

#define CLASS_2_367201AC24518DC1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x11E5C6B0)
#define CLASS_2_367201AC24518DC1_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x11E5C2D0)
#define CLASS_2_367201AC24518DC1_METHOD_2_E72E7D79B56C15C6_OFFSET UNITYSDK_OFFSET(0x11E5C2E0)
#define CLASS_2_367201AC24518DC1__CTOR_OFFSET UNITYSDK_OFFSET(0x11E5C770)

inline static constexpr unsigned int Class_2_367201AC24518DC1_TypeDefinitionIndex = 69106;

class Class_2_367201AC24518DC1 : public ::Class_1_D019640AABA5E1A8
{
public:
	// static const ::System::String* Field_2_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_E72E7D79B56C15C6(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1_METHOD_2_E72E7D79B56C15C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1_METHOD_2_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
