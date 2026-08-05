#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }

#define CLASS_1_8A073C272F0F25B3_CLASS_1_B25F782BF1AEE848_METHOD_1_A22A4C2AF184070E_OFFSET UNITYSDK_OFFSET(0x10F2AC70)
#define CLASS_1_8A073C272F0F25B3_CLASS_1_B25F782BF1AEE848__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2AA30)

inline static constexpr unsigned int Class_1_8A073C272F0F25B3_Class_1_B25F782BF1AEE848_TypeDefinitionIndex = 90985;

class Class_1_8A073C272F0F25B3_Class_1_B25F782BF1AEE848 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_CLASS_1_B25F782BF1AEE848__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A22A4C2AF184070E(::MoleMole::Config::ConfigHollowChessboard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_CLASS_1_B25F782BF1AEE848_METHOD_1_A22A4C2AF184070E_OFFSET))(this, a1);
	}
};
