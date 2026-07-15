#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_66D6A0360B93D27A_1;
class Class_1_8844A4E6AE686D5C_6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_99A68403C515663E_1_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1708DEB0)
#define CLASS_2_99A68403C515663E_1_METHOD_2_664BF37AE86A8EB2_OFFSET UNITYSDK_OFFSET(0x1708E320)
#define CLASS_2_99A68403C515663E_1_METHOD_2_7415656B23F00D86_OFFSET UNITYSDK_OFFSET(0x1708DF80)
#define CLASS_2_99A68403C515663E_1_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1708E8F0)
#define CLASS_2_99A68403C515663E_1_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x1708E860)
#define CLASS_2_99A68403C515663E_1_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1708DF00)
#define CLASS_2_99A68403C515663E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1708EC00)

inline static constexpr unsigned int Class_2_99A68403C515663E_1_TypeDefinitionIndex = 62032;

class Class_2_99A68403C515663E_1 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_1__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_1_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_1_UPDATESTART_OFFSET))(this);
	}

	::System::Void Method_2_7415656B23F00D86(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_1_METHOD_2_7415656B23F00D86_OFFSET))(this, a1);
	}

	::System::Void Method_2_664BF37AE86A8EB2(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_1_METHOD_2_664BF37AE86A8EB2_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_1_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void PreUpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A68403C515663E_1_PREUPDATEDONE_OFFSET))(this);
	}
};
