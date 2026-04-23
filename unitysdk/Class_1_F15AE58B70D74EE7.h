#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_F15AE58B70D74EE7_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xECD2020)
#define CLASS_1_F15AE58B70D74EE7_METHOD_1_9CB6A3E57A73DA6D_OFFSET UNITYSDK_OFFSET(0xECD2090)
#define CLASS_1_F15AE58B70D74EE7_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xECD2010)
#define CLASS_1_F15AE58B70D74EE7__CTOR_OFFSET UNITYSDK_OFFSET(0xECD2160)

inline static constexpr unsigned int Class_1_F15AE58B70D74EE7_TypeDefinitionIndex = 46127;

class Class_1_F15AE58B70D74EE7 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15AE58B70D74EE7__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15AE58B70D74EE7_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15AE58B70D74EE7_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_9CB6A3E57A73DA6D(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2, ::System::Action_1<::UnityEngine::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_F15AE58B70D74EE7_METHOD_1_9CB6A3E57A73DA6D_OFFSET))(this, a1, a2, a3);
	}
};
