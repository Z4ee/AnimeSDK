#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class Action; }

#define CLASS_1_F06989A9BBC81E8D_CLASS_1_B863B19BCA53883D_METHOD_1_BABCC3B1316F306D_OFFSET UNITYSDK_OFFSET(0xF619470)
#define CLASS_1_F06989A9BBC81E8D_CLASS_1_B863B19BCA53883D__CTOR_OFFSET UNITYSDK_OFFSET(0xF619460)

inline static constexpr unsigned int Class_1_F06989A9BBC81E8D_Class_1_B863B19BCA53883D_TypeDefinitionIndex = 85027;

class Class_1_F06989A9BBC81E8D_Class_1_B863B19BCA53883D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_CLASS_1_B863B19BCA53883D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BABCC3B1316F306D(::MoleMole::Config::TagLibraryConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_CLASS_1_B863B19BCA53883D_METHOD_1_BABCC3B1316F306D_OFFSET))(this, a1);
	}
};
