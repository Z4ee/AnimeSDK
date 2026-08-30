#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeString.h"

namespace HoudiniEngineUnity { class JSONObject; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaTable; }

#define CLASS_1_A8BF55F906C7654B_METHOD_1_0E801852F4B4F2C3_OFFSET UNITYSDK_OFFSET(0x1A79A840)
#define CLASS_1_A8BF55F906C7654B_METHOD_1_1082279FA65C761E_OFFSET UNITYSDK_OFFSET(0x1A79A130)
#define CLASS_1_A8BF55F906C7654B_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x1A79B620)
#define CLASS_1_A8BF55F906C7654B_METHOD_1_E2B2E1DEE99874B5_OFFSET UNITYSDK_OFFSET(0x1A79A470)
#define CLASS_1_A8BF55F906C7654B_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1A79AF10)
#define CLASS_1_A8BF55F906C7654B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A79BA00)

inline static constexpr unsigned int Class_1_A8BF55F906C7654B_TypeDefinitionIndex = 60134;

class Class_1_A8BF55F906C7654B : public ::System::Object
{
public:
	::System::String* BOIJNHAFIDH; // 0x10
	::RPG::Client::RPGProfilerMarker* NBCPAOCIHEL; // 0x18
	::RPG::Client::RPGProfilerMarker* AABOMBAEELI; // 0x20
	::HoudiniEngineUnity::JSONObject* EOCNNGBKFAN; // 0x28
	::RPG::Client::RPGProfilerMarker* FALLNHJEKLL; // 0x30
	::RPG::Client::RPGProfilerMarker* MHNHCBNCFPD; // 0x38
	::RPG::Client::RPGProfilerMarker* DPBGHAPJHKC; // 0x40
	::RPG::Client::RPGProfilerMarker* PBPAADBDKIO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8BF55F906C7654B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1082279FA65C761E(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A8BF55F906C7654B_METHOD_1_1082279FA65C761E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E2B2E1DEE99874B5(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>*))((::PBYTE)hIl2Cpp + CLASS_1_A8BF55F906C7654B_METHOD_1_E2B2E1DEE99874B5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0E801852F4B4F2C3(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::XLua::LuaTable* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_A8BF55F906C7654B_METHOD_1_0E801852F4B4F2C3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8BF55F906C7654B_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8BF55F906C7654B_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}
};
