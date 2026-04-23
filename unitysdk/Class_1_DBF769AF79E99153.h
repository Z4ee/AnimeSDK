#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeString.h"

namespace HoudiniEngineUnity { class JSONObject; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaTable; }

#define CLASS_1_DBF769AF79E99153_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x10AEB7C0)
#define CLASS_1_DBF769AF79E99153_METHOD_1_38D7ED5B78AEB8EC_OFFSET UNITYSDK_OFFSET(0x10AEA760)
#define CLASS_1_DBF769AF79E99153_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x10AEB090)
#define CLASS_1_DBF769AF79E99153_METHOD_1_83CECA629B8CD9E8_OFFSET UNITYSDK_OFFSET(0x10AEAB40)
#define CLASS_1_DBF769AF79E99153_METHOD_1_D5C3A10CA60641C4_OFFSET UNITYSDK_OFFSET(0x10AEA410)
#define CLASS_1_DBF769AF79E99153__CTOR_OFFSET UNITYSDK_OFFSET(0x10AEBBC0)

inline static constexpr unsigned int Class_1_DBF769AF79E99153_TypeDefinitionIndex = 55362;

class Class_1_DBF769AF79E99153 : public ::System::Object
{
public:
	::HoudiniEngineUnity::JSONObject* Field_1_1; // 0x10
	::RPG::Client::RPGProfilerMarker* Field_1_7; // 0x18
	::RPG::Client::RPGProfilerMarker* Field_1_3; // 0x20
	::RPG::Client::RPGProfilerMarker* Field_1_4; // 0x28
	::System::String* Field_1_0; // 0x30
	::RPG::Client::RPGProfilerMarker* Field_1_2; // 0x38
	::RPG::Client::RPGProfilerMarker* Field_1_6; // 0x40
	::RPG::Client::RPGProfilerMarker* Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBF769AF79E99153__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D5C3A10CA60641C4(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_DBF769AF79E99153_METHOD_1_D5C3A10CA60641C4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_38D7ED5B78AEB8EC(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>*))((::PBYTE)hIl2Cpp + CLASS_1_DBF769AF79E99153_METHOD_1_38D7ED5B78AEB8EC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_83CECA629B8CD9E8(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::XLua::LuaTable* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_DBF769AF79E99153_METHOD_1_83CECA629B8CD9E8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBF769AF79E99153_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBF769AF79E99153_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}
};
