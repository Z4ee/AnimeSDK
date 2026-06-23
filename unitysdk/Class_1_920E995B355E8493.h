#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Code::Logic::Data::ScriptObject::Level { class Layer; }

#define CLASS_1_920E995B355E8493_METHOD_1_17F6760A528C4301_OFFSET UNITYSDK_OFFSET(0x1335BE10)
#define CLASS_1_920E995B355E8493_METHOD_1_57D0313316D9181B_OFFSET UNITYSDK_OFFSET(0x1335BFE0)
#define CLASS_1_920E995B355E8493_METHOD_1_AC72D0112BCC7BF7_OFFSET UNITYSDK_OFFSET(0x1335C0E0)
#define CLASS_1_920E995B355E8493__CTOR_OFFSET UNITYSDK_OFFSET(0x1335BBC0)

inline static constexpr unsigned int Class_1_920E995B355E8493_TypeDefinitionIndex = 87627;

class Class_1_920E995B355E8493 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::Code::Logic::Data::ScriptObject::Level::Layer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + CLASS_1_920E995B355E8493__CTOR_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_17F6760A528C4301(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_920E995B355E8493_METHOD_1_17F6760A528C4301_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_AC72D0112BCC7BF7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_920E995B355E8493_METHOD_1_AC72D0112BCC7BF7_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_57D0313316D9181B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_920E995B355E8493_METHOD_1_57D0313316D9181B_OFFSET))(this, a1, a2);
	}
};
