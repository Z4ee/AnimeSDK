#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A27BF87A78CEBB28;
class Class_1_DFC115D3A3A89EBD;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CB9B6C54D4BCE65_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AEA740)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_0701B0E9F618C30B_OFFSET UNITYSDK_OFFSET(0x8AEABA0)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_231AD7675306AFC3_OFFSET UNITYSDK_OFFSET(0x8AEA920)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_2E74614B64CD2BB3_OFFSET UNITYSDK_OFFSET(0x8AEA9F0)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_353330F79F29432B_OFFSET UNITYSDK_OFFSET(0x8AEAB10)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x8AEAD80)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8AEAD30)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8AEACC0)
#define CLASS_1_1CB9B6C54D4BCE65_METHOD_1_E066918103F67D44_OFFSET UNITYSDK_OFFSET(0x8AEA7C0)
#define CLASS_1_1CB9B6C54D4BCE65__CTOR_OFFSET UNITYSDK_OFFSET(0x8AEA700)

inline static constexpr unsigned int Class_1_1CB9B6C54D4BCE65_TypeDefinitionIndex = 49398;

class Class_1_1CB9B6C54D4BCE65 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E066918103F67D44(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphAimIdentifyType>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphAimIdentifyType>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_E066918103F67D44_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_231AD7675306AFC3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_231AD7675306AFC3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2E74614B64CD2BB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_2E74614B64CD2BB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_353330F79F29432B(::Class_1_DFC115D3A3A89EBD* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFC115D3A3A89EBD*, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_353330F79F29432B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0701B0E9F618C30B(::Class_1_DFC115D3A3A89EBD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFC115D3A3A89EBD*))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_0701B0E9F618C30B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB9B6C54D4BCE65_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};
