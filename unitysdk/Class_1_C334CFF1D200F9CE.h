#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_C334CFF1D200F9CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB91AB00)
#define CLASS_1_C334CFF1D200F9CE_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xB91AB90)
#define CLASS_1_C334CFF1D200F9CE_METHOD_1_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0xB91AB40)
#define CLASS_1_C334CFF1D200F9CE__CTOR_OFFSET UNITYSDK_OFFSET(0xB91ABA0)

inline static constexpr unsigned int Class_1_C334CFF1D200F9CE_TypeDefinitionIndex = 53630;

class Class_1_C334CFF1D200F9CE : public ::System::Object
{
public:
	::System::String* GIDAEFPOGHI; // 0x10
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C334CFF1D200F9CE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C334CFF1D200F9CE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C334CFF1D200F9CE_METHOD_1_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C334CFF1D200F9CE_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
