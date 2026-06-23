#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_59;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_DB3A5EFF78BBB49D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13349640)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_330A6162267AC4C4_OFFSET UNITYSDK_OFFSET(0x1334A7F0)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x13349EB0)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x1334A7E0)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x1334A230)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1334AAC0)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1334A220)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_C91FF5680B3C8AB4_OFFSET UNITYSDK_OFFSET(0x13349880)
#define CLASS_1_DB3A5EFF78BBB49D_METHOD_1_CEA4D82439556AE1_OFFSET UNITYSDK_OFFSET(0x1334AAD0)
#define CLASS_1_DB3A5EFF78BBB49D__CTOR_OFFSET UNITYSDK_OFFSET(0x13349870)

inline static constexpr unsigned int Class_1_DB3A5EFF78BBB49D_TypeDefinitionIndex = 79731;

class Class_1_DB3A5EFF78BBB49D : public ::System::Object
{
public:
	::MoleMole::Config::ConfigDynamicAccessoryData* Field_1_6; // 0x10
	::UnityEngine::GameObject* Field_1_7; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::Class_3_F33F9DC5F4112336* Field_1_3; // 0x28
	::System::String* Field_1_1; // 0x30
	::Class_1_5DA2E7556103D5A3_59* Field_1_5; // 0x38
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_2; // 0x40
	::System::Boolean Field_1_8; // 0x48
	::System::Boolean Field_1_9; // 0x49
	::System::Int32 Field_1_4; // 0x4C
	::System::Int32 Field_1_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C91FF5680B3C8AB4(::System::Int32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_C91FF5680B3C8AB4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_B76CD5CB3E297DF3_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_330A6162267AC4C4(::MoleMole::Battle::Entity* a1, ::Class_1_5DA2E7556103D5A3_59* a2, ::MoleMole::Config::ConfigDynamicAccessoryData* a3, ::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_5DA2E7556103D5A3_59*, ::MoleMole::Config::ConfigDynamicAccessoryData*, ::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_330A6162267AC4C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CEA4D82439556AE1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB3A5EFF78BBB49D_METHOD_1_CEA4D82439556AE1_OFFSET))(this);
	}
};
