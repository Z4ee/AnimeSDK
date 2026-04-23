#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_80793F5E162C6353_Struct_2_97AE06CE5D4F548E_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_80793F5E162C6353_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA3B800)
#define CLASS_1_80793F5E162C6353_METHOD_1_040B376D8D5FBACC_OFFSET UNITYSDK_OFFSET(0xAA3B920)
#define CLASS_1_80793F5E162C6353_METHOD_1_08129E9A46D60112_OFFSET UNITYSDK_OFFSET(0xAA3D550)
#define CLASS_1_80793F5E162C6353_METHOD_1_11A4B5B9C7557187_OFFSET UNITYSDK_OFFSET(0xAA3A450)
#define CLASS_1_80793F5E162C6353_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAA3B790)
#define CLASS_1_80793F5E162C6353_METHOD_1_254BE92053B8EE01_OFFSET UNITYSDK_OFFSET(0xAA3C1E0)
#define CLASS_1_80793F5E162C6353_METHOD_1_56F65626149842A5_OFFSET UNITYSDK_OFFSET(0xAA3C820)
#define CLASS_1_80793F5E162C6353_METHOD_1_796CF69C9B160254_OFFSET UNITYSDK_OFFSET(0xAA3C480)
#define CLASS_1_80793F5E162C6353_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xAA3B980)
#define CLASS_1_80793F5E162C6353_METHOD_1_9941258D9DC49207_OFFSET UNITYSDK_OFFSET(0xAA3D3F0)
#define CLASS_1_80793F5E162C6353_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA3C190)
#define CLASS_1_80793F5E162C6353_METHOD_1_CCF896314741B04E_OFFSET UNITYSDK_OFFSET(0xAA3C0D0)
#define CLASS_1_80793F5E162C6353_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xAA3C3F0)
#define CLASS_1_80793F5E162C6353_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xAA3B850)
#define CLASS_1_80793F5E162C6353_METHOD_1_F5EF7B108C5699B2_OFFSET UNITYSDK_OFFSET(0xAA3C990)
#define CLASS_1_80793F5E162C6353__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3B7F0)

inline static constexpr unsigned int Class_1_80793F5E162C6353_TypeDefinitionIndex = 56000;

class Class_1_80793F5E162C6353 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1*>* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_1; // 0x20
	::RPG::Client::PerformanceManager* Field_1_5; // 0x28
	::UnityEngine::Transform* Field_1_2; // 0x30
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_040B376D8D5FBACC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_040B376D8D5FBACC_OFFSET))(this, a1);
	}

	::System::Void Method_1_11A4B5B9C7557187(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_11A4B5B9C7557187_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCF896314741B04E(::System::UInt32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_CCF896314741B04E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_254BE92053B8EE01(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_254BE92053B8EE01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_796CF69C9B160254(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_796CF69C9B160254_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_56F65626149842A5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_56F65626149842A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_F5EF7B108C5699B2(::System::Nullable_1<::Class_1_80793F5E162C6353_Struct_2_97AE06CE5D4F548E_1> a1, ::System::Nullable_1<::Class_1_80793F5E162C6353_Struct_2_97AE06CE5D4F548E_1> a2, ::System::Nullable_1<::Class_1_80793F5E162C6353_Struct_2_97AE06CE5D4F548E_1> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Class_1_80793F5E162C6353_Struct_2_97AE06CE5D4F548E_1>, ::System::Nullable_1<::Class_1_80793F5E162C6353_Struct_2_97AE06CE5D4F548E_1>, ::System::Nullable_1<::Class_1_80793F5E162C6353_Struct_2_97AE06CE5D4F548E_1>))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_F5EF7B108C5699B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9941258D9DC49207(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single& a4, ::System::Boolean& a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_9941258D9DC49207_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_08129E9A46D60112(::Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1* a1, ::Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1*, ::Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1*))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_METHOD_1_08129E9A46D60112_OFFSET))(this, a1, a2);
	}
};
