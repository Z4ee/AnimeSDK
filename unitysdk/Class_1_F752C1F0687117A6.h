#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_F752C1F0687117A6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x15515D20)
#define CLASS_1_F752C1F0687117A6_METHOD_1_3140216FE05D29AB_OFFSET UNITYSDK_OFFSET(0x15515210)
#define CLASS_1_F752C1F0687117A6_METHOD_1_9FA94838273C9B95_OFFSET UNITYSDK_OFFSET(0x15515B70)
#define CLASS_1_F752C1F0687117A6_METHOD_1_BA00E6E19C4E30FC_OFFSET UNITYSDK_OFFSET(0x155155F0)
#define CLASS_1_F752C1F0687117A6_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x15515CD0)
#define CLASS_1_F752C1F0687117A6_METHOD_1_BFC70CF9054640E0_OFFSET UNITYSDK_OFFSET(0x15516040)
#define CLASS_1_F752C1F0687117A6_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x15514E50)
#define CLASS_1_F752C1F0687117A6_METHOD_1_F19797CE7029EBDB_OFFSET UNITYSDK_OFFSET(0x15515D30)
#define CLASS_1_F752C1F0687117A6__CTOR_OFFSET UNITYSDK_OFFSET(0x15514DF0)

inline static constexpr unsigned int Class_1_F752C1F0687117A6_TypeDefinitionIndex = 86389;

class Class_1_F752C1F0687117A6 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::Int32 Field_1_5; // 0x24
	::System::Int32 Field_1_1; // 0x28
	::Foundation::Coroutine::CoroutineHandle Field_1_9; // 0x2C
	::System::UInt32 Field_1_11; // 0x30
	::System::Boolean Field_1_6; // 0x34
	::System::Boolean Field_1_7; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_1_3140216FE05D29AB(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_3140216FE05D29AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9FA94838273C9B95()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_9FA94838273C9B95_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA00E6E19C4E30FC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_BA00E6E19C4E30FC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_F19797CE7029EBDB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_F19797CE7029EBDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BFC70CF9054640E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F752C1F0687117A6_METHOD_1_BFC70CF9054640E0_OFFSET))(this);
	}
};
