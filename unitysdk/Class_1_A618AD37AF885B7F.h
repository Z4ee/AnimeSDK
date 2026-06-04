#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D42443398E3AD863_1;
namespace RPG::Client { class TimeRewindAnimRaycastBind; }
namespace RPG::Client { class TimeRewindRaycast; }
namespace RPG::Client { class TimeRewindRaycastInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_A618AD37AF885B7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7046A0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xA704A30)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xA704890)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_A2D9F178DD3E14C3_OFFSET UNITYSDK_OFFSET(0xA704B20)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA704840)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_CC6ED9DAA0821769_OFFSET UNITYSDK_OFFSET(0xA705660)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0xA7055D0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_E44C4B1878F85417_OFFSET UNITYSDK_OFFSET(0xA7047D0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_EC7DC7FA5B23736B_OFFSET UNITYSDK_OFFSET(0xA705770)
#define CLASS_1_A618AD37AF885B7F__CCTOR_OFFSET UNITYSDK_OFFSET(0xA705820)
#define CLASS_1_A618AD37AF885B7F__CTOR_OFFSET UNITYSDK_OFFSET(0xA704440)

inline static constexpr unsigned int Class_1_A618AD37AF885B7F_TypeDefinitionIndex = 56860;

class Class_1_A618AD37AF885B7F : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::EntityType>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A618AD37AF885B7F_TypeDefinitionIndex)->GetStaticField(0x5B180);
	}
	::System::Collections::Generic::List_1<::Class_1_D42443398E3AD863_1*>* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TimeRewindAnimRaycastBind*>* Field_1_3; // 0x20
	::RPG::Client::TimeRewindRaycast* Field_1_4; // 0x28
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_5; // 0x30
	::System::Collections::Generic::Stack_1<::Class_1_D42443398E3AD863_1*>* Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::Int32 Field_1_8; // 0x44
	::System::Single Field_1_9; // 0x48
	::System::Int32 Field_1_10; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeRewindRaycast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeRewindRaycast*))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E44C4B1878F85417(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_E44C4B1878F85417_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_A2D9F178DD3E14C3(::Il2CppArray<::RPG::Client::TimeRewindRaycastInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TimeRewindRaycastInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_A2D9F178DD3E14C3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_CC6ED9DAA0821769(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_CC6ED9DAA0821769_OFFSET))(this, a1, a2);
	}

	::Class_1_D42443398E3AD863_1* Method_1_E14A7FCF78650419()
	{
		return ((::Class_1_D42443398E3AD863_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Void Method_1_EC7DC7FA5B23736B(::Class_1_D42443398E3AD863_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D42443398E3AD863_1*))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_EC7DC7FA5B23736B_OFFSET))(this, a1);
	}

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_45714050EDEF8291_OFFSET))(this);
	}
};
