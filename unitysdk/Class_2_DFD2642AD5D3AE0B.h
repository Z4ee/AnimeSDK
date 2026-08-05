#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8300C0E13E94E2DB.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_07AAFA6F7F79BEB3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DFD2642AD5D3AE0B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18215AD0)
#define CLASS_2_DFD2642AD5D3AE0B_METHOD_2_4FCA6958CC485830_OFFSET UNITYSDK_OFFSET(0x182156F0)
#define CLASS_2_DFD2642AD5D3AE0B_METHOD_2_BEAB68CF71FB26B2_OFFSET UNITYSDK_OFFSET(0x18214EF0)
#define CLASS_2_DFD2642AD5D3AE0B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18215B60)
#define CLASS_2_DFD2642AD5D3AE0B__CTOR_OFFSET UNITYSDK_OFFSET(0x18215B50)

inline static constexpr unsigned int Class_2_DFD2642AD5D3AE0B_TypeDefinitionIndex = 52613;

class Class_2_DFD2642AD5D3AE0B : public ::Class_1_8300C0E13E94E2DB
{
public:
	::MoleMole::Battle::MonsterAlertInitParams Field_2_4; // 0x20
	::Class_3_07AAFA6F7F79BEB3* Field_2_11; // 0x40
	::UnityEngine::Vector3 Field_2_5; // 0x48
	::System::Boolean Field_2_7; // 0x54
	::System::Boolean Field_2_0; // 0x55
	::System::Boolean Field_2_6; // 0x56
	::System::UInt32 Field_2_3; // 0x58
	::System::Single Field_2_2; // 0x5C
	::System::Int32 Field_2_10; // 0x60
	::System::Int32 Field_2_1; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD2642AD5D3AE0B__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_BEAB68CF71FB26B2()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD2642AD5D3AE0B_METHOD_2_BEAB68CF71FB26B2_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD2642AD5D3AE0B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4FCA6958CC485830(::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_2_DFD2642AD5D3AE0B_METHOD_2_4FCA6958CC485830_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD2642AD5D3AE0B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
