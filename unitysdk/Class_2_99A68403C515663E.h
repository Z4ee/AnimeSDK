#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_242BFB9DE152D766_30;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_99A68403C515663E_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x159C2040)
#define CLASS_2_99A68403C515663E_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x159C20F0)
#define CLASS_2_99A68403C515663E_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x159C2190)
#define CLASS_2_99A68403C515663E_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x159C2090)
#define CLASS_2_99A68403C515663E__CTOR_OFFSET UNITYSDK_OFFSET(0x159C2200)

inline static constexpr unsigned int Class_2_99A68403C515663E_TypeDefinitionIndex = 64437;

class Class_2_99A68403C515663E : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* MLHLKONMMFO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_UPDATESTART_OFFSET))(this);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_242BFB9DE152D766_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_30*))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_UPDATEDONE_OFFSET))(this);
	}
};
