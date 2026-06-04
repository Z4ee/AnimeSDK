#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16DB7E1B089706BB;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_9E4E5BB5D3E96815_EXECUTE_OFFSET UNITYSDK_OFFSET(0xACDC620)
#define CLASS_1_9E4E5BB5D3E96815_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xACDBCF0)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_2C8B479EA1C435F4_OFFSET UNITYSDK_OFFSET(0xACDCF40)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_3DCE3EC3BD3E5622_OFFSET UNITYSDK_OFFSET(0xACDD410)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xACDCD60)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0xACDC680)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xACDD920)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_BF9BCC073D7977E5_OFFSET UNITYSDK_OFFSET(0xACDD570)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_C9072C01C81FE8E4_OFFSET UNITYSDK_OFFSET(0xACDD4A0)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_D9621FAAAE4FCAB4_OFFSET UNITYSDK_OFFSET(0xACDD250)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0xACDC890)
#define CLASS_1_9E4E5BB5D3E96815_METHOD_1_FE3E37275125621B_OFFSET UNITYSDK_OFFSET(0xACDBED0)
#define CLASS_1_9E4E5BB5D3E96815_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xACDCDE0)
#define CLASS_1_9E4E5BB5D3E96815__CTOR_OFFSET UNITYSDK_OFFSET(0xACDBB20)

inline static constexpr unsigned int Class_1_9E4E5BB5D3E96815_TypeDefinitionIndex = 71591;

class Class_1_9E4E5BB5D3E96815 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_1; // 0x10
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x18
	::Class_1_B4357A1C72BABC6B* Field_1_3; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_FE3E37275125621B(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_FE3E37275125621B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C8B479EA1C435F4(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_2C8B479EA1C435F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D9621FAAAE4FCAB4(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_D9621FAAAE4FCAB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9072C01C81FE8E4(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_C9072C01C81FE8E4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_1_3DCE3EC3BD3E5622(::Class_1_16DB7E1B089706BB* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16DB7E1B089706BB*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_3DCE3EC3BD3E5622_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF9BCC073D7977E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_BF9BCC073D7977E5_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}
};
