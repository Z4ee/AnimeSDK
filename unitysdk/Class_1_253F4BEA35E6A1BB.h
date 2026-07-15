#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_253F4BEA35E6A1BB_CLEAR_OFFSET UNITYSDK_OFFSET(0x179C9130)
#define CLASS_1_253F4BEA35E6A1BB_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x179C9210)
#define CLASS_1_253F4BEA35E6A1BB_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x179C91B0)
#define CLASS_1_253F4BEA35E6A1BB__CTOR_OFFSET UNITYSDK_OFFSET(0x179C9280)

inline static constexpr unsigned int Class_1_253F4BEA35E6A1BB_TypeDefinitionIndex = 57098;

class Class_1_253F4BEA35E6A1BB : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_253F4BEA35E6A1BB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_253F4BEA35E6A1BB_CLEAR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_253F4BEA35E6A1BB_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_253F4BEA35E6A1BB_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}
};
