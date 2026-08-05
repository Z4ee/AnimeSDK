#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_48;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_22AF1BA6B9A53CBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13D22DA0)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_330A6162267AC4C4_OFFSET UNITYSDK_OFFSET(0x13D23040)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_5622C13D3E7B9CA4_OFFSET UNITYSDK_OFFSET(0x13D23320)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x13D24070)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x13D23E30)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_8B5E3014AFF7F8EA_1_OFFSET UNITYSDK_OFFSET(0x13D24340)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x13D23860)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x13D23E20)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x13D24730)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13D247A0)
#define CLASS_1_22AF1BA6B9A53CBF_METHOD_1_E1BD69374AF2BF76_OFFSET UNITYSDK_OFFSET(0x13D24740)
#define CLASS_1_22AF1BA6B9A53CBF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D23030)

inline static constexpr unsigned int Class_1_22AF1BA6B9A53CBF_TypeDefinitionIndex = 85743;

class Class_1_22AF1BA6B9A53CBF : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_10; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_13; // 0x20
	::System::String* Field_1_0; // 0x28
	::Class_1_5DA2E7556103D5A3_48* Field_1_4; // 0x30
	::Class_3_C93CC3D2C2AC4067* Field_1_7; // 0x38
	::MoleMole::Config::ConfigDynamicAccessoryData* Field_1_11; // 0x40
	::Class_3_F33F9DC5F4112336* Field_1_6; // 0x48
	::System::Int32 Field_1_5; // 0x50
	::System::Int32 Field_1_15; // 0x54
	::System::Boolean Field_1_9; // 0x58
	::System::Boolean Field_1_8; // 0x59
	::System::Boolean Field_1_14; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_330A6162267AC4C4(::MoleMole::Battle::Entity* a1, ::Class_1_5DA2E7556103D5A3_48* a2, ::MoleMole::Config::ConfigDynamicAccessoryData* a3, ::System::Action_2<::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_5DA2E7556103D5A3_48*, ::MoleMole::Config::ConfigDynamicAccessoryData*, ::System::Action_2<::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_330A6162267AC4C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_5622C13D3E7B9CA4(::System::Int32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::System::Action_2<::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_2<::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*>*))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_5622C13D3E7B9CA4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_E1BD69374AF2BF76()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_E1BD69374AF2BF76_OFFSET))(this);
	}

	::System::Void Method_1_8B5E3014AFF7F8EA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_8B5E3014AFF7F8EA_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_22AF1BA6B9A53CBF_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}
};
